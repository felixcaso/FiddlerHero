using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoccerBall : MonoBehaviour
{
    private Vector3 centerField = new Vector3(0f, 1, 0f);
    private Rigidbody rigidbody;

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
        transform.position = centerField;
        
    }

    // Update is called once per frame
    void Update()
    {
        //if( transform.position.x < -6 || transform.position.x > 6 || transform.position.z > 10 || transform.position.x < -10 )
        //{
        //    transform.position = centerField;
        //    rigidbody.AddForce(Vector3.zero, ForceMode.VelocityChange);

        //}

        if (Input.GetKeyDown(KeyCode.R))
        {
            transform.position = centerField;
            rigidbody.AddForce(Vector3.zero, ForceMode.Impulse);
        }
    }

    
}
