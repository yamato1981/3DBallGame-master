using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameOverFlagment : MonoBehaviour {


	bool gameOver = false;

	void OnTriggerEnter(Collider collider){
		if (collider.gameObject.CompareTag("Player") && !gameOver ) {
			gameOver = true;
			Destroy (collider.gameObject);
			Debug.Log ("GameOver!");

		}
	}
}
