using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FiddlerSignController : MonoBehaviour
{
    float degreesPerSecond = 50;
    private bool startGame;

    private const float WAIT_TIME = 2f;

    // Start is called before the first frame update
    void Start()
    {
        startGame = false;
    }

    private void Update()
    {
        //if(!startGame)
        transform.Rotate(new Vector3(0f, degreesPerSecond, 0f) * Time.deltaTime);
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Starting Fiddler Hero in "+WAIT_TIME+" secs");
        StartCoroutine( StartFiddlerHero() );

    }

    private IEnumerator StartFiddlerHero()
    {
        yield return new WaitForSeconds(WAIT_TIME);

        SceneManager.LoadSceneAsync("FiddlerHero");
        
    }






}
