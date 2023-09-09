using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FishNet.Object;
using System;

public class PlayerSpawnedNotifier : NetworkBehaviour
{
    public static event Action<Transform> OnPlayerSpawned;

    public override void OnStartClient()
    {
        base.OnStartClient();
        if (base.IsOwner)
        {
            NetworkObject netObj = base.LocalConnection.FirstObject;

            if(netObj == base.NetworkObject)
            {
                OnPlayerSpawned?.Invoke(transform);
            }
                   
        }
    }
}
