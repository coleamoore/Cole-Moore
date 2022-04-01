﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PreventMultiAttack : StateMachineBehaviour
{
    public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        animator.gameObject.GetComponent<Animator>().ResetTrigger("Attacking");
    }
}
