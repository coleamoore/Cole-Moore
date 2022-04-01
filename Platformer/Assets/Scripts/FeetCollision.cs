using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class FeetCollision : MonoBehaviour
{
	// The parent object's PlayerController component.
	private PlayerController parent;

	// Start is called before the first frame update.
	void Start()
	{
		parent = transform.parent.GetComponent<PlayerController>();
	}

	// Happens when the feet first hit another collider.
	private void OnTriggerEnter2D(Collider2D other)
	{
		parent.OnGround = true;
		Debug.Log("The player has landed.");
	}

	// Happens when the feet stop hitting another collider.
	private void OnTriggerExit2D(Collider2D other)
	{
		parent.OnGround = false;
	}
}