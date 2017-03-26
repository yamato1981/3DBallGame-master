using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class StartButtonCtrl : MonoBehaviour {


	public void pushStartButton(){
		
		SceneManager.LoadScene ("Stage1");
	}
}
