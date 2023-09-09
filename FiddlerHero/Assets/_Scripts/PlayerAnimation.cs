using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimation : MonoBehaviour
{
    private Animator animator;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }


    public void Sprint(bool sprint)
    {
        animator.SetBool("Sprint", sprint);
    }
}
