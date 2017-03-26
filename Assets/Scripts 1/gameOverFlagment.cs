using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class gameOverFlagment : MonoBehaviour {


	bool gameOver = false;

	void OnTriggerEnter(Collider collider){
		if (collider.gameObject.CompareTag("Player") && !gameOver ) {
			gameOver = true;
			Destroy (collider.gameObject);
			SceneManager.LoadScene ("GameOverScene1");

			Debug.Log ("GameOver!");

		}
	}
}
