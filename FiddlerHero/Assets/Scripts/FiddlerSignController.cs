using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FiddlerSignController : MonoBehaviour
{
    
    

    private const float WAIT_TIME = 2f;

    
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Starting Fiddler Hero in "+WAIT_TIME+" secs");
        StartCoroutine( StartFiddlerHero() );

    }

    private IEnumerator StartFiddlerHero()
    {
        yield return new WaitForSeconds(WAIT_TIME);

        //SceneManager.LoadSceneAsync("FiddlerHero");
        Application.OpenURL("http://unity3d.com/");

    }






}
