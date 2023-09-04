using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HomeGoal : MonoBehaviour
{
    private Vector3 centerField = new Vector3(0f, 1, 0f);
    private int score;

    public TMP_Text scoreTxt;


    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Ball")
        {
            score++;
            scoreTxt.text = "Home: " + score;
            other.transform.position = centerField;
        }
    }




}
