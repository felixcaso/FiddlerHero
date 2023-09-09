using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    private const string FiddlerHero = "FiddlerHero";
    private const string MainScene = "MainScene";

    public static SceneLoader sceneLoaderInstance;

    private void Start()
    {
        sceneLoaderInstance = this;
    }


    public void InitFiddlerHeroScene()
    {
        if (!Input.touchSupported)
        {
            Debug.Log("Touchscreen not supported");
            return;
        }
        SceneManager.LoadSceneAsync( FiddlerHero );
    }

    public void InitMainScene()
    {
        SceneManager.LoadSceneAsync( MainScene );
    }

    

}
