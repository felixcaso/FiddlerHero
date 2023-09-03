using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FishNet.Object;
using Cinemachine;

public class CameraController : NetworkBehaviour
{
    public override void OnStartClient()
    {
        base.OnStartClient();
        if (base.IsOwner)
        {
            Camera cam = Camera.main;
            if(cam.tag != "MainCamera")
            {
                Debug.Log("No camera found");
            }
            else
            {
                Debug.Log("found");
            }
            CinemachineVirtualCamera vc = cam.GetComponent<CinemachineVirtualCamera>();

            vc.Follow = transform;
            vc.LookAt = transform;

        }
    }
    
}
