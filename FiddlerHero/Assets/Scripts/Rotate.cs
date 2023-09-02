using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    private float degreesPerSecond = 50;

    private void Update()
    {
        
        //transform.Rotate(new Vector3(0f, degreesPerSecond, 0f) * Time.deltaTime);
        transform.Rotate(new Vector3(0f, degreesPerSecond * Time.deltaTime));
    }
}
