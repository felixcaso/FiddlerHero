using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMoveTouch : MonoBehaviour
{
    private Vector2 touchStartPos;
    private Vector2 touchEndPos;
    private Vector2 touchDelta;

    public float moveSpeed = 5.0f;

    void Update()
    {
        // Check for touch input
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                // Record the starting position of the touch
                touchStartPos = touch.position;
            }
            else if (touch.phase == TouchPhase.Moved)
            {
                // Calculate the difference in touch position
                touchEndPos = touch.position;
                touchDelta = (touchEndPos - touchStartPos).normalized;

                // Move the player
                Vector3 moveDirection = new Vector3(touchDelta.x, 0, touchDelta.y);
                transform.Translate(moveDirection * moveSpeed * Time.deltaTime);
            }
        }
    }
}

