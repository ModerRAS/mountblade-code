// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ClanFriendListService
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.PlatformService;
using TaleWorlds.PlayerServices;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ClanFriendListService : IFriendListService
  {
    public const string CodeName = "ClanFriends";
    private readonly Dictionary<PlayerId, ClanPlayerInfo> _clanPlayerInfos;

    bool IFriendListService.InGameStatusFetchable => false;

    bool IFriendListService.AllowsFriendOperations => false;

    bool IFriendListService.CanInvitePlayersToPlatformSession => false;

    bool IFriendListService.IncludeInAllFriends => false;

    public ClanFriendListService()
    {
      this._clanPlayerInfos = new Dictionary<PlayerId, ClanPlayerInfo>();
    }

    string IFriendListService.GetServiceCodeName() => "ClanFriends";

    TextObject IFriendListService.GetServiceLocalizedName() => new TextObject("{=j4F7tTzy}Clan");

    FriendListServiceType IFriendListService.GetFriendListServiceType()
    {
      return FriendListServiceType.Clan;
    }

    IEnumerable<PlayerId> IFriendListService.GetAllFriends()
    {
      return (IEnumerable<PlayerId>) this._clanPlayerInfos.Keys;
    }

    public event Action<PlayerId> OnUserStatusChanged;

    public event Action<PlayerId> OnFriendRemoved;

    async Task<bool> IFriendListService.GetUserOnlineStatus(PlayerId providedId)
    {
      bool result = false;
      ClanPlayerInfo clanPlayerInfo;
      this._clanPlayerInfos.TryGetValue(providedId, out clanPlayerInfo);
      if (clanPlayerInfo != null)
        result = clanPlayerInfo.State == AnotherPlayerState.InMultiplayerGame || clanPlayerInfo.State == AnotherPlayerState.AtLobby || clanPlayerInfo.State == AnotherPlayerState.InParty;
      return await Task.FromResult<bool>(result);
    }

    async Task<bool> IFriendListService.IsPlayingThisGame(PlayerId providedId)
    {
      return await ((IFriendListService) this).GetUserOnlineStatus(providedId);
    }

    async Task<string> IFriendListService.GetUserName(PlayerId providedId)
    {
      ClanPlayerInfo clanPlayerInfo;
      this._clanPlayerInfos.TryGetValue(providedId, out clanPlayerInfo);
      return await Task.FromResult<string>(clanPlayerInfo?.PlayerName);
    }

    public async Task<PlayerId> GetUserWithName(string name)
    {
      ClanPlayerInfo clanPlayerInfo = this._clanPlayerInfos.Values.FirstOrDefaultQ<ClanPlayerInfo>((Func<ClanPlayerInfo, bool>) (playerInfo => playerInfo.PlayerName == name));
      return await Task.FromResult<PlayerId>(clanPlayerInfo != null ? clanPlayerInfo.PlayerId : PlayerId.Empty);
    }

    public event Action OnFriendListChanged;

    public IEnumerable<PlayerId> GetPendingRequests() => (IEnumerable<PlayerId>) null;

    public IEnumerable<PlayerId> GetReceivedRequests() => (IEnumerable<PlayerId>) null;

    private void Dummy()
    {
      if (this.OnUserStatusChanged != null)
        this.OnUserStatusChanged(new PlayerId());
      if (this.OnFriendRemoved == null)
        return;
      this.OnFriendRemoved(new PlayerId());
    }

    public void OnClanInfoChanged(List<ClanPlayerInfo> playerInfosInClan)
    {
      this._clanPlayerInfos.Clear();
      if (playerInfosInClan != null)
      {
        foreach (ClanPlayerInfo clanPlayerInfo in playerInfosInClan)
          this._clanPlayerInfos.Add(clanPlayerInfo.PlayerId, clanPlayerInfo);
      }
      Action friendListChanged = this.OnFriendListChanged;
      if (friendListChanged == null)
        return;
      friendListChanged();
    }
  }
}
