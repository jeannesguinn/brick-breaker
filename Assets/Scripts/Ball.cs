using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

	public AudioClip boing;


	private Paddle paddle;
	private bool hasStarted = false;
	private Vector3 PaddleToBallVector;
	// Use this for initialization
	void Start () {
		paddle = GameObject.FindObjectOfType<Paddle>();
		PaddleToBallVector = this.transform.position - paddle.transform.position;
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (!hasStarted) {
			//lock the ball relative to the paddle
			this.transform.position = paddle.transform.position + PaddleToBallVector;
			//wait for a mouse press to launch ball
			if (Input.GetMouseButtonDown (0)) {
				print("Mouse Clicked, launch ball");
				hasStarted = true;
				this.GetComponent<Rigidbody2D>().velocity = new Vector2(2f, 10f);
			}
			if (hasStarted) {
			GetComponent<AudioSource> ().Play ();
			}
		}
	}

//	void OnCollisionEnter2D (Collision2D collision)
//	{
//
//		Vector2 tweak = new Vector2 (Random.Range (0f, 0.2f), Random.Range (0f, 0.2f));
//
//		if (hasStarted) {
//			GetComponent<Rigidbody>().velocity += tweak;
//			GetComponent<AudioSource> ().Play ();
//		}
//
//	}


}
