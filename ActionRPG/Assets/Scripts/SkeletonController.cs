using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkeletonController : Navigator
{
    public GameObject[] Waypoints;
    private Animator Animator;
    private int CurrentWaypoint = 0;

    // Start is called before the first frame update
    new void Start()
    {
        base.Start();
        Animator = GetComponent<Animator>();
        SetTarget(Waypoints[CurrentWaypoint]);
    }

    // Update is called once per frame
    new void Update()
    {
        base.Update();
    }

    protected override void OnReachTarget(GameObject target)
    {
        // Arrive at waypoint
        if (target == Waypoints[CurrentWaypoint])
        {
            CurrentWaypoint++;
            if (CurrentWaypoint == Waypoints.Length)
                CurrentWaypoint = 0;
            SetTarget(Waypoints[CurrentWaypoint]);
        }
        // Arrive at the player
        else if (target.gameObject.CompareTag("Player"))
        {
            Animator.SetBool("Attacking", true);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            SetTarget(other.gameObject);
            Animator.SetBool("Running", true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            SetTarget(Waypoints[CurrentWaypoint]);
            Animator.SetBool("Running", false);
            Animator.SetBool("Attacking", false);
        }
    }
}
