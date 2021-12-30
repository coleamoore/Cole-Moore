using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float Speed = 10;    // default value (if not changed in Unity per object)
                                // change in Unity does not change code
    private Rigidbody body;

    // Start is called before the first frame update
    void Start()
    {
        // gets body once (less expensive)
        body = GetComponent<Rigidbody>();
    }

    // FixedUpdate is called once per PHYSICS frame (phyxics still works even if it can't
    // draw fast enough)
    // Update is called once per frame to draw the frame
    void FixedUpdate()
    {
        float horizontalForce = Input.GetAxis("Horizontal") * Speed;     // x (forward/backward)
        float verticalForce = Input.GetAxis("Vertical") * Speed;       // y (side-to-side)
        body.AddForce(new Vector3(horizontalForce, 0, verticalForce));      // 0 = z (up, down)
    }
}
