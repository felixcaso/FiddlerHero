using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AwayGoal : MonoBehaviour
{
    private Vector3 centerField = new Vector3(0f, 1, 0f);
    private int score;
    private bool availableToScore = true;

    public TMP_Text scoreTxt;


    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ball" && availableToScore)
        {
            availableToScore = false;
            score++;
            scoreTxt.text = "Away: " + score;
            
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
