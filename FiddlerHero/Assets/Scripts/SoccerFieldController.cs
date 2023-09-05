using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoccerFieldController : MonoBehaviour
{
    private int playersOnTheField = 0;

    [SerializeField]
    private GameObject soccerDisplayTxt;
    

    


    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            playersOnTheField++;
            soccerDisplayTxt.SetActive(true);
        }
    }




    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Ball")
        {
            other.transform.position = transform.position;
        }

        if (other.tag == "Player")
        {
            playersOnTheField--;
            soccerDisplayTxt.SetActive(false);
        }
    }
}
