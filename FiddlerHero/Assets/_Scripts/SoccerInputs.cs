using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using FishNet.Object;

public class SoccerInputs : MonoBehaviour
{
    [SerializeField]
	private float kickForce = 1;
    

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
