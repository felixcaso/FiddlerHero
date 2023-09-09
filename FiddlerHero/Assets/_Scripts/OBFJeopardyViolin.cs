using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OBFJeopardyViolin : MonoBehaviour
{
    private const float WAIT_TIME = 2f;
    private bool isReady = false;

    private const string JEOPARDY_URL = "http://felixcaso.github.io/";
    


    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Starting OBF-Jeopardy in " + WAIT_TIME + " secs");

        StartCoroutine( StartOFBJeopardy() );

    }

    private IEnumerator StartOFBJeopardy()
    {
        yield return new WaitForSeconds(WAIT_TIME);

        if (isReady)
        {
            isReady = false;
            Application.OpenURL(JEOPARDY_URL);
        }

        StartCoroutine( SetReady() );


    }

    private IEnumerator SetReady()
    {
        yield return new WaitForSeconds(2f);
        isReady = true;

    }




}
