using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClearFlag : MonoBehaviour {

	//初期はfalse
	bool gameClearFlag = false;

	void OnTriggerEnter(Collider collider){
		//Playerタグがついたものと衝突、かつクリアフラグがfalseのとき
		if (collider.gameObject.CompareTag("Player") && !gameClearFlag ) {
			gameClearFlag = true;

			//Playerを消す
			Destroy (collider.gameObject);
			string presentStage = SceneManager.GetActiveScene().name;
			Debug.Log (presentStage);

			SceneManager.LoadScene ("Stage2");

			Debug.Log ("GameClear!");

		}

	}
}
