using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPC : MonoBehaviour
{
    private CharacterController npcController;
    void Update()
    {
        npcController = GetComponent<CharacterController>();
    }
    void Start()
    {
        if (!npcController.isGrounded)
        {
            transform.position = new Vector3(transform.position.x, Physics.gravity.y, transform.position.z);
        }

        
    }

    
}
