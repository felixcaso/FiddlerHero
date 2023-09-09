using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BeatScroller : MonoBehaviour
{

    public float beatTempo;

    public bool hasStarted = false;

    private float startPos = 10f;

    public TextMeshProUGUI readyTxt;

    
    void Start()
    {
        beatTempo /= 60f;
        transform.position = new Vector3(0f, startPos, 0f);
    }

    
    void Update()
    {
        float pos = transform.position.y;
        if (hasStarted)
        {
            if(pos <= 5)
            {
                int countDown = (int)pos +3; //converting float to int
                readyTxt.text = countDown.ToString();

                if (countDown <= 0)
                    readyTxt.gameObject.SetActive(false);
            }

            transform.position -= new Vector3(0f, beatTempo * Time.deltaTime, 0f);//dropping the beat scale
            
        }
    }
}
