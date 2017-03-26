using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {
	public float speed; // 移動速度
	public Text countText;//消したPickUpの数
	public Text winText;//ゲームクリアのテキスト
	private int count;//消したPickUpの数を保存

	const float Gravity = 9.8f;
	public float gravityScale = 30.0f;

	void Start()
	{
		count = 0;
//		SetCountText ();
//		winText.text = "";
	}
	void FixedUpdate()
	{
		if (Application.isEditor) {
			float moveHorizontal = Input.GetAxis ("Horizontal");
			float moveVertical = Input.GetAxis ("Vertical");
			Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
			Rigidbody rigidbody = GetComponent<Rigidbody> ();
			rigidbody.AddForce (movement * speed * Time.deltaTime);
			Debug.Log("get Horizontal or Vertical");
		} else {
			Vector3 vector = new Vector3 ();
			vector.x = Input.acceleration.x;    // 横画面で左右
			vector.z = Input.acceleration.y;
			vector.y = Input.acceleration.z;
			Physics.gravity = Gravity * vector.normalized * gravityScale;
		}
	}
	// 衝突した時の動作
	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.tag == "Pick Up") {
			other.gameObject.SetActive (false); // オブジェクトを無効化（非表示）
			count = count + 1;
			SetCountText ();
		}
	}
	void SetCountText()
	{
		countText.text = "Count: " + count.ToString ();
		if (count == 8) {
			winText.text = "YOU WIN";
		}
	}
}