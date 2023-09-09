using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float moveSpeed = 10f;
    public float rotateSpeed = 150f;
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
        characterController.Move(offset);

        //Check for movement
        if (horizontal != 0f || vertical != 0f)
        {

            if (vertical < 0)// if down
            {
                playerAnimation.Sprint(false);

            }

            else // if up
            {
                playerAnimation.Sprint(true);
            }
        }
        else
        {
            playerAnimation.Sprint(false);
        }
    }//end update

    
}
