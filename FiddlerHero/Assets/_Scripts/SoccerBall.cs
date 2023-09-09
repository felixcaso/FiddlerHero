using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoccerBall : MonoBehaviour
{
    private Vector3 centerField = new Vector3(0f, 3, 0f);
    

    private void Awake()
    {
        Transform parentCenter = GetComponentInParent<Transform>();
        transform.position = parentCenter.position;
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            transform.position = centerField;
        }
    }

    
}
