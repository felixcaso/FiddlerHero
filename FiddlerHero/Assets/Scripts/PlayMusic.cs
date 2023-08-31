using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayMusic : MonoBehaviour
{

    private AudioSource music;
    // Start is called before the first frame update

    void Start()
    {
        music = GetComponent<AudioSource>();
        //music.PlayDelayed(2f);
    }

    private void OnTriggerEnter(Collider other)
    {

        music.Play();
    }

    private void OnTriggerExit(Collider other)
    {
        music.Stop();
    }



}
