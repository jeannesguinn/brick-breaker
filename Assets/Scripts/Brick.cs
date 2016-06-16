﻿using UnityEngine;
using System.Collections;

public class Brick : MonoBehaviour {

	public AudioClip thud;
	private int timesHit;
	private LevelManager levelManager;

	public Sprite[] hitSprites;
	public static int breakableCount = 0;
	public GameObject smoke;
	private bool isBreakable;

	// Use this for initialization
	void Start ()
	{
		isBreakable = (this.tag == "Breakable");
		//Keep track of breakable bricks
		if (isBreakable) {
			breakableCount++;
			print(breakableCount);
		}

		timesHit = 0;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D (Collision2D coll)
	{
		AudioSource.PlayClipAtPoint(thud, transform.position, .8f);
		if (isBreakable) {
			HandleHits ();
		}
	}

	void HandleHits (){

		timesHit++;
		int maxHits = hitSprites.Length + 1;
		if (timesHit >= maxHits) {
			//decrease number of breakable bricks before destroying the gameObject
			breakableCount--;
			//print(breakableCount);
			levelManager.BrickDestroyed();
			Destroy (gameObject);
		} else {
			LoadSprites();
		}
	}

	void LoadSprites ()
	{

		int spriteIndex = timesHit - 1;
		//print(hitSprites.Length);
		if (hitSprites [spriteIndex]) {
			this.GetComponent<SpriteRenderer> ().sprite = hitSprites [spriteIndex];
		}
	}

	void SimulateWin (){
		levelManager.LoadNextLevel();
	}
}
