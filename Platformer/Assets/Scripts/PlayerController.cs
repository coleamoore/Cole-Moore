using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float Speed = 2;
    public float Jump = 400;
    public Boolean OnGround = false;

    private Rigidbody2D body;
    private SpriteRenderer renderer;
    private Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        renderer = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        // Move horizontal
        body.AddForce(new Vector2(Input.GetAxis("Horizontal") * Speed, 0));

        // Move vertical
        if (Input.GetButtonDown("Jump") && OnGround)
        {
            body.AddForce(new Vector2(0, Jump));
        }

        // Face the right direction
        if (body.velocity.x < 0)
            renderer.flipX = true;
        else if (body.velocity.x > 0)
            renderer.flipX = false;

        // Update animator parameters
        animator.SetBool("OnGround", OnGround);
        animator.SetBool("MovingHorizontal", body.velocity.x != 0);
        animator.SetFloat("VerticalVelocity", body.velocity.y);
    }
}