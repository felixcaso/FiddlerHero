using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomPlacement : MonoBehaviour
{
    private void Awake()
    {
        transform.position = new Vector3(Random.Range(-50, 50), this.transform.position.y, Random.Range(-50, 50));
    }
}
