using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoomboxController : MonoBehaviour
{
    [SerializeField]
    private GameObject danceBtn;


    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "PLayer")
        {
            danceBtn.SetActive(true);
        }
    }


    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "PLayer")
        {
            danceBtn.SetActive(false);
        }
    }


}
