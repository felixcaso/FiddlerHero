using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    //Music varibables
    public AudioSource music;
    public BeatScroller beatScoller;


    //Game Variables
    private bool startplaying = false;
    private bool isWaiting = true;
    public static GameManager instance;
    public GameObject welcomeScreen;

    //Text display variables
    public Text scoreTxt;
    public Text multiplierTxt;
    public Text streakTxt;
    public Text percentHitTxt, normalHitTxt, goodHitTxt, perfectHitTxt, missedHitTxt, rankTxt, finalScoreTxt;

    public GameObject resultScreen;

    //Score variables
    private int currScore = 0;
    private int scorePerNote = 100;
    private int scorePerGoodNote = 125;
    private int scorePerPerfectNote = 150;

    private int streak = 0;
    private int multiplier;
    private int multiplierTracker;

    //Score keeping
    public float totalNotes; //total notes in the song
    public float normalHits; 
    public float goodHits;
    public float perfectHits;
    public float missedNotes;
    public float percentageHit;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;
        scoreTxt.text = "Score: " + currScore;
        multiplier = 1;
        multiplierTracker = 0;
        welcomeScreen.SetActive(true);
        totalNotes = FindObjectsOfType<NoteObjects>().Length;// getting totals notes
    }

    // Update is called once per frame
    void Update()
    {
        if (!startplaying)
        {
            if (Input.anyKeyDown)
            {
                welcomeScreen.SetActive(false);
                startplaying = true;
                beatScoller.hasStarted = true;
                isWaiting = true;
            }
        }
        else
        {
            if(beatScoller.transform.position.y < 0 && isWaiting)
            {
                music.Play();
                isWaiting = false;

            }
            if(!music.isPlaying && !resultScreen.activeInHierarchy && !isWaiting)
            {
                resultScreen.SetActive(true);

                normalHitTxt.text = normalHits.ToString();
                goodHitTxt.text = goodHits.ToString();
                perfectHitTxt.text = perfectHits.ToString();
                missedHitTxt.text = missedNotes.ToString();

                float totalHits = normalHits + goodHits + perfectHits;
                float percentHit = (totalHits / totalNotes) * 100f;

                percentHitTxt.text = percentHit.ToString("F1") + "%";

                string rank = "F";
                if (percentHit > 60)
                {
                    rank = "C";
                    if(percentHit > 80)
                    {
                        rank = "B";
                        if(percentHit > 90)
                        {
                            rank = "A";
                            if( percentHit == 100f && streak == totalNotes)
                            {
                                rank = "S";
                            }
                        }
                    }

                }

                rankTxt.text = rank;
                finalScoreTxt.text = currScore.ToString();
                
            }
        }
        
    }//end void update()

   private void UpdateText()
    {
        scoreTxt.text = "Score: " + currScore;
        multiplierTxt.text = "Multiplier: x" + multiplier;
        streakTxt.text = "Note Streak: " + streak;
    }

    public void NoteHit()
    {
        Debug.Log("Hit On Time");
        streak++;

        if(streak % 2 == 0 && multiplier < 16)
        {
            multiplier *= 2;
        }

        UpdateText();

    }//end NoteHit()

    public void NoteMissed()
    {
        //Debug.Log("Missed Note");
        missedNotes++;
        multiplier = 1;
        streak = 0;
        UpdateText();

    }

    public void NormalHit()
    {
        //Debug.Log("Normal Hit");
        currScore += scorePerNote * multiplier;
        normalHits++;
        NoteHit();
    }

    public void GoodHit()
    {
        //Debug.Log("Good Hit");
        currScore += scorePerGoodNote * multiplier;
        goodHits++;
        NoteHit();
    }

    public void PerfectHit()
    {
        //Debug.Log("Perfect hit");
        currScore += scorePerPerfectNote * multiplier;
        perfectHits++;
        NoteHit();
    }
}
