using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using FishNet.Object;
using Cinemachine;

public class CameraController : MonoBehaviour
{
    private void Awake()
    {
        PlayerSpawnedNotifier.OnPlayerSpawned += PlayerSpawnedNotifier_OnSpawnedPlayer;
    }

    private void PlayerSpawnedNotifier_OnSpawnedPlayer(Transform playerObj)
    {
        CinemachineFreeLook cam = GetComponent<CinemachineFreeLook>();
        cam.Follow = playerObj;
        cam.LookAt = playerObj;
    }




}
