using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    private const string FiddlerHero = "FiddlerHero";
    private const string MainScene = "MainScene";



    public void InitFiddlerHeroScene()
    {
        SceneManager.LoadSceneAsync( FiddlerHero );
    }

    public void InitMainScene()
    {
        SceneManager.LoadSceneAsync( MainScene );
    }

    

}
