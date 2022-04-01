using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float Speed = 200;
    public float Spin = 20;
    private Rigidbody Rigidbody;
    private Animator Animator;

    // Start is called before the first frame update
    void Start()
    {
        Rigidbody = GetComponent<Rigidbody>();
        Animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!Animator.GetBool("Dead"))
        {
            // Forward movement
            float forward = Input.GetAxis("Vertical");
            if (forward > 0)
            {
                Rigidbody.AddForce(transform.forward * Speed);
                Animator.SetBool("Running", true);
            }
            else
                Animator.SetBool("Running", false);

            // Rotation
            float turn = Input.GetAxis("Horizontal");
            if (turn != 0)
            {
                Rigidbody.AddTorque(transform.up * turn * Spin);
            }

            // Attack
            if (Input.GetAxis("Fire1") != 0)
            {
                Animator.SetTrigger("Attacking");
            }
        }
    }
}
