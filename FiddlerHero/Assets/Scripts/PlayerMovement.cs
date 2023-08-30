using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    private float moveSpeed = 10f;
    private float rotateSpeed = 150f;
    private CharacterController characterController;
    private PlayerAnimation playerAnimation;

    private void Awake()
    {
        characterController = GetComponent<CharacterController>();
        playerAnimation = GetComponent<PlayerAnimation>();
    }



    // Update is called once per frame
    void Update()
    {
        

        float horizontal = Input.GetAxisRaw("Horizontal");
        float vertical = Input.GetAxisRaw("Vertical");
        transform.Rotate(new Vector3(0f, horizontal * rotateSpeed * Time.deltaTime));

        //transform.position = new Vector3(transform.position.x, Physics.gravity.y, transform.position.z);


        Vector3 offset = new Vector3(horizontal, Physics.gravity.y, vertical) * (moveSpeed * Time.deltaTime);
        offset = transform.TransformDirection(offset);
        //characterController.Move(offset);

        //Check for movement
        if (horizontal != 0f || vertical != 0f)
        {

            if (vertical < 0)// if down
            {
                playerAnimation.SprintBackward(true);

            }

            else // if up
            {
                playerAnimation.SprintForward(true);
            }
        }
        else
        {
            playerAnimation.SprintBackward(false);
            playerAnimation.SprintForward(false);
        }

        //if (Input.GetKeyDown(KeyCode.Space))
        //{
        //    playerAnimation.PlayViolin();
        //}

        //if(Input.GetKeyDown(KeyCode.Alpha1))
        //    playerAnimation.StartDance("Dance1");
        //if (Input.GetKeyDown(KeyCode.Alpha2))
        //    playerAnimation.StartDance("Dance2");


        

    }//end update

    
}
