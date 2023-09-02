using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCPlayViolin : MonoBehaviour
{
    public GameObject violin;
    public Transform spawnPoint;

    public void PlayViolin()
    {
        GameObject violinInstance;

        violinInstance = Instantiate(violin, spawnPoint.position, violin.transform.rotation);
    }


    
}
