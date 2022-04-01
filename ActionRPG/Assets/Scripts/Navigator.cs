using System.Collections;
using System.Collections.Generic;
using Unity.IO.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.AI;

public class Navigator : MonoBehaviour
{
    private NavMeshAgent NavMeshAgent;
    private GameObject Target;
    private Vector3 Position;

    // Start is called before the first frame update
    protected virtual void Start()
    {
        NavMeshAgent = GetComponent<NavMeshAgent>();
    }

    public GameObject GetTarget()
    {
        return Target;
    }

    public void SetTarget(GameObject newTarget)
    {
        Target = newTarget;
        if (newTarget == null)
        {
            NavMeshAgent.isStopped = true;
        }
        else
        {
            Position = newTarget.transform.position;
            NavMeshAgent.SetDestination(Position);
            NavMeshAgent.isStopped = false;
        }
    }

    // Update is called once per frame
    protected virtual void Update()
    {
        if (Target != null)
        {
            //Target has moved
            float targetDrift = Vector3.Distance(Target.transform.position, Position);
            if (targetDrift > 5)
            {
                SetTarget(Target);
            }
            // Reach the target
            float distanceToTarget = Vector3.Distance(transform.position, Target.transform.position);
            if (distanceToTarget < 5)
            {
                GameObject t = Target;
                SetTarget(null);
                OnReachTarget(t);
            }
        }
    }

    protected virtual void OnReachTarget(GameObject target)
    {
        // Do nothing
    }
}
