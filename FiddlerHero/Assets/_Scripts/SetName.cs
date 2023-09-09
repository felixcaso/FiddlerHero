using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SetName : MonoBehaviour
{
    public UnityEvent buttonClick;

    private void Awake()
    {
        if (buttonClick == null)
            buttonClick = new UnityEvent();
    }

    private void OnMouseUp()
    {
        print("Click bitch");
        buttonClick.Invoke();
    }
}
