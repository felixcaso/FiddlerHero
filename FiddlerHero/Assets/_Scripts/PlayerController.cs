using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(CharacterController))]
public class PlayerController : MonoBehaviour
{
    [SerializeField, Tooltip("Player speed multiplier.")]
    private float playerSpeed = 2.0f;
    [SerializeField, Tooltip("How how the player should jump.")]
    private float jumpHeight = 1.0f;
    [SerializeField, Tooltip("Downwards force on the player.")]
    private float gravityValue = -9.81f;
    [SerializeField, Tooltip("Rotation Speed multiplier.")]
    private float rotationSpeed = .4f;
    [SerializeField, Tooltip("Player speed multiplier.")]
    private float animationBlendDamp = .3f;
    
    private PlayerInput playerInput;
    private Animator anim;
    private CharacterController controller;
    private Vector3 playerVelocity;
    private bool groundedPlayer;
    private Transform cameraTransform;
    private InputActionAsset asset;

    private void Start()
    {
        controller = GetComponent<CharacterController>();
        anim = GetComponent<Animator>();
        playerInput = GetComponent<PlayerInput>();
        cameraTransform = Camera.main.transform;
    }

    void Update()
    {
        groundedPlayer = controller.isGrounded;
        // Remove downwards force when player is grounded.
        if (groundedPlayer && playerVelocity.y < 0)
        {
            playerVelocity.y = 0f;
        }
       

        Vector2 input = playerInput.actions["Move"].ReadValue<Vector2>();
        Vector3 move = new Vector3(input.x, 0, input.y);
        // Take into account camera direction for player movement.
        move = move.x * cameraTransform.right + move.z * cameraTransform.forward;
        move.y = 0f;
        controller.Move(move * Time.deltaTime * playerSpeed);

        //if (Input.GetKeyDown(KeyCode.Space))
        //{
        //    anim.Play("Dance");
        //}

        // Play Dance 1
        if (playerInput.actions["Dance"].triggered)
        {
            if (Random.Range(0,2) == 0)
            {
                anim.Play("Dance1");
            }
            else
            {
                anim.Play("Dance2");
            }
            
            
        }

        playerVelocity.y += gravityValue * Time.deltaTime;
        controller.Move(playerVelocity * Time.deltaTime);

        // Set blending animation when player is moving.
        anim.SetFloat ("Blend", input.sqrMagnitude, animationBlendDamp, Time.deltaTime);

        // Rotate the player depending on their input and camera direction.
        if (input != Vector2.zero) {
            float targetAngle = Mathf.Atan2(input.x, input.y) * Mathf.Rad2Deg + cameraTransform.eulerAngles.y;
            Quaternion rotation = Quaternion.Euler(0, targetAngle, 0);
            transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * rotationSpeed);
        }
    }
}