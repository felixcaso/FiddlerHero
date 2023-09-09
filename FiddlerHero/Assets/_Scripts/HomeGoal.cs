using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HomeGoal : MonoBehaviour
{
    private Vector3 centerField = new Vector3(0f, 1, 0f);
    private int score = 0;

    public TMP_Text scoreTxt;

    private bool availableToScore = true;


    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Ball" && availableToScore)
        {
            availableToScore = false;
            score++;
            
            scoreTxt.text = "Home: " + score;
            
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Ball")
        {
            availableToScore = true;
            StartCoroutine(ResetBall(other.transform));
        }
    }

    IEnumerator ResetBall(Transform ball)
    {
        yield return new WaitForSeconds(2f);
        ball.position = centerField;
    }




}
