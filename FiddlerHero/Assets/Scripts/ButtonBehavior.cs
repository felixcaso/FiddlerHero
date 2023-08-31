using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonBehavior : MonoBehaviour
{
    private SpriteRenderer SPRender;
    public Sprite defaultImg;
    public Sprite pressedImg;

    public KeyCode keyToPress;
    // Start is called before the first frame update
    void Start()
    {
        SPRender = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(keyToPress))
        {
            SPRender.sprite = pressedImg;
        }

        if (Input.GetKeyUp(keyToPress))
        {
            SPRender.sprite = defaultImg;
        }

    }
}
