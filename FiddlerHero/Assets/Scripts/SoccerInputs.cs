using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FishNet.Object;

public class SoccerInputs : NetworkBehaviour
{
    [SerializeField]
	private float kickForce = 10;
    private Vector3 centerField = new Vector3(0f, 1, 0f);
    private void Update()
    {
        
    }

    private void OnControllerColliderHit(ControllerColliderHit hit)
    {
        Rigidbody rigidbody = hit.collider.attachedRigidbody;

        if(rigidbody != null)
        {
            Vector3 forceDir = hit.gameObject.transform.position - transform.position;
            forceDir.y = 0;
            forceDir.Normalize();

            rigidbody.AddForceAtPosition(forceDir * kickForce, transform.position, ForceMode.Impulse);
        }
    }


}
