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


    public void SprintForward(bool sprint)
    {
        animator.SetBool("SprintF", sprint);
    }

    public void SprintBackward(bool sprint)
    {
        animator.SetBool("SprintB", sprint);
    }

    public void Jump()
    {
        animator.SetTrigger("Jump");
    }

    public void PlayViolin()
    {
        animator.SetTrigger("Play");
    }

    
}
