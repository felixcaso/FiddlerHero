using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FishNet.Object;

public class NPC : NetworkBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        GameObject parent = GetComponentInParent<GameObject>();
        transform.position = new Vector3(parent.transform.position.x, Physics.gravity.y, parent.transform.position.z);
        
    }

    
}
