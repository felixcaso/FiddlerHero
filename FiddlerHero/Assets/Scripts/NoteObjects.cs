using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteObjects : MonoBehaviour
{

    public bool canBePressed;
    private bool isCleared = true;

    public GameObject hitEffect, goodEffect, perfectEffect, missEffect;

    public KeyCode keyToPress;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(keyToPress))
        {
            if (canBePressed)
            {
                if(Mathf.Abs(transform.position.y) > 0.25f)//Normal Hit
                {
                    Debug.Log("Normal Hit");
                    GameManager.instance.NormalHit();
                    Instantiate(hitEffect, transform.position, hitEffect.transform.rotation);
                    isCleared = true;
                    gameObject.SetActive(false);
                }
                else if(Mathf.Abs(transform.position.y) > 0.11f)
                {
                    Debug.Log("Good Hit");
                    GameManager.instance.GoodHit();
                    Instantiate(goodEffect, transform.position, goodEffect.transform.rotation);
                    isCleared = true;
                    gameObject.SetActive(false);
                }
                else
                {
                    Debug.Log("Perfect Hit");
                    GameManager.instance.PerfectHit();
                    Instantiate(perfectEffect, transform.position, perfectEffect.transform.rotation);
                    isCleared = true;
                    gameObject.SetActive(false);
                }
            }
        }
            
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Activator")
        {
            canBePressed = true;
            isCleared = false;
        }
    }//end onTriggerEnter()

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Activator")
        {
            canBePressed = false;
            if (!isCleared)
            {
                GameManager.instance.NoteMissed();
                Instantiate(missEffect, transform.position, missEffect.transform.rotation);
            }
                
        }
    }//end onTriggerExit()
}
