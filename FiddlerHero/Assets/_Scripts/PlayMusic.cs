using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayMusic : MonoBehaviour
{

    private AudioSource music;

    void Start()
    {
        music = GetComponent<AudioSource>();
        music.PlayDelayed(2f);
        music.Pause();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!music.isPlaying) {
            music.Play();
        }
            
    }

    private void OnTriggerExit(Collider other)
    { 
        music.Pause();
    }



}
