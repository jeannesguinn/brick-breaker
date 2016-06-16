using UnityEngine;
using System.Collections;

public class Paddle : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 paddlePos = new Vector3 (0.5f,this.transform.position.y,0f);
		//gives us the x coordinate of Mouse Position in game units
		float MousePauseInBlocks = (Input.mousePosition.x / Screen.width)*16;

		paddlePos.x = MousePauseInBlocks;

		this.transform.position = paddlePos;
	
	}
}
