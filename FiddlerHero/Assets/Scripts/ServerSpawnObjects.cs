using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FishNet.Object;

public class ServerSpawnObjects : NetworkBehaviour
{
    public GameObject FiddleHeroSign;

    private void Awake()
    {
        //StartCoroutine( SpawnFiddleSign() );
    }




    private IEnumerator SpawnFiddleSign()
    {
        yield return new WaitForSeconds(2f);
        GameObject sign = Instantiate( FiddleHeroSign, Vector3.zero, Quaternion.identity );
        ServerManager.Spawn(sign);
    }

}
