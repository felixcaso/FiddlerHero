using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using FishNet.Object;
using FishNet.Connection;

public class NameDisplayer : NetworkBehaviour
{
    [SerializeField]
    private TextMeshPro _text;

    public override void OnStartClient()
    {
        base.OnStartClient();
        setName();

        //support for the event a player changes name mid-game
        PlayerNameTracker.OnNameChange += PlayerNameTracker_OnNameChange;

    }

    public override void OnStopClient()
    {
        base.OnStopClient();

        //support for the event a player changes name mid-game
        PlayerNameTracker.OnNameChange -= PlayerNameTracker_OnNameChange;

    }

    private void PlayerNameTracker_OnNameChange(NetworkConnection arg1, string arg2)
    {
        //throw new System.NotImplementedException();
        if (arg1 != base.Owner)
            return;

        setName();
    }

    public override void OnOwnershipClient(NetworkConnection prevOwner)
    {
        base.OnOwnershipClient(prevOwner);
        setName();
    }

    private void setName()
    {
        string result = null;
        //owner does not exist
        if (base.Owner.IsValid)
            result = PlayerNameTracker.getPlayername(base.Owner);

        if (string.IsNullOrEmpty(result))
            result = "Unset";

        _text.text = result;
    }
}
