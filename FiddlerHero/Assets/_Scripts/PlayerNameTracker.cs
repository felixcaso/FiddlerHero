using System;
using UnityEngine;
using FishNet.Object;
using FishNet.Connection;
using FishNet.Managing.Logging;
using FishNet.Object.Synchronizing;
using FishNet.Transporting;

public class PlayerNameTracker : NetworkBehaviour
{
    // Called when a player changes their name
    public static event Action<NetworkConnection, string> OnNameChange;

    //A list(Dictionary) of every player connecting
    [SyncObject]
    private readonly SyncDictionary<NetworkConnection, string> _playerNames = new SyncDictionary<NetworkConnection, string>();

    //A single instance of this object
    private static PlayerNameTracker _instance;

    private void Awake()
    {
        _instance = this;
        _playerNames.OnChange += _playerNames_OnChange;
    }

    public override void OnStartServer()
    {
        base.OnStartServer();
        base.NetworkManager.ServerManager.OnRemoteConnectionState += ServerManager_OnRemoteConnectionState;
    }

    public override void OnStopServer()
    {
        base.OnStopServer();
        base.NetworkManager.ServerManager.OnRemoteConnectionState -= ServerManager_OnRemoteConnectionState;
    }

    private void ServerManager_OnRemoteConnectionState(NetworkConnection arg1, FishNet.Transporting.RemoteConnectionStateArgs arg2)
    {
        if (arg2.ConnectionState != RemoteConnectionState.Started)
            _playerNames.Remove(arg1);
    }

    private void _playerNames_OnChange(SyncDictionaryOperation op, NetworkConnection key, string val, bool asServer)
    {
        if (op == SyncDictionaryOperation.Add || op == SyncDictionaryOperation.Set)
            OnNameChange?.Invoke(key, val);
    }

    public static string getPlayername(NetworkConnection conn)
    {
        if (_instance._playerNames.TryGetValue(conn, out string result))
            return result;
        else
            return string.Empty;
    }

    [Client]
    public static void SetName(string name)
    {
        _instance.ServerSetName(name);
    }

    [ServerRpc(RequireOwnership = false)]
    private void ServerSetName(string name, NetworkConnection sender = null)
    {
        _playerNames[sender] = name;
    }

    


}
