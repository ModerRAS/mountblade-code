// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerIntermissionVotingManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Library;
using TaleWorlds.PlayerServices;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerIntermissionVotingManager
  {
    public const int MaxAllowedMapCount = 100;
    private static MultiplayerIntermissionVotingManager _instance;
    public bool IsAutomatedBattleSwitchingEnabled;
    public bool IsMapVoteEnabled;
    public bool IsCultureVoteEnabled;
    public bool IsDisableMapVoteOverride;
    public bool IsDisableCultureVoteOverride;
    public string InitialGameType;
    private readonly Dictionary<PlayerId, List<string>> _votesOfPlayers;
    public MultiplayerIntermissionState CurrentVoteState;

    public static MultiplayerIntermissionVotingManager Instance
    {
      get
      {
        return MultiplayerIntermissionVotingManager._instance ?? (MultiplayerIntermissionVotingManager._instance = new MultiplayerIntermissionVotingManager());
      }
    }

    public List<IntermissionVoteItem> MapVoteItems { get; private set; }

    public List<IntermissionVoteItem> CultureVoteItems { get; private set; }

    public List<CustomGameUsableMap> UsableMaps { get; private set; }

    public event MultiplayerIntermissionVotingManager.MapItemAddedDelegate OnMapItemAdded;

    public event MultiplayerIntermissionVotingManager.CultureItemAddedDelegate OnCultureItemAdded;

    public event MultiplayerIntermissionVotingManager.MapItemVoteCountChangedDelegate OnMapItemVoteCountChanged;

    public event MultiplayerIntermissionVotingManager.CultureItemVoteCountChangedDelegate OnCultureItemVoteCountChanged;

    public MultiplayerIntermissionVotingManager()
    {
      this.MapVoteItems = new List<IntermissionVoteItem>();
      this.CultureVoteItems = new List<IntermissionVoteItem>();
      this.UsableMaps = new List<CustomGameUsableMap>();
      this._votesOfPlayers = new Dictionary<PlayerId, List<string>>();
      this.IsMapVoteEnabled = true;
      this.IsCultureVoteEnabled = true;
      this.IsDisableMapVoteOverride = false;
      this.IsDisableCultureVoteOverride = false;
    }

    public void AddMapItem(string mapID)
    {
      if (this.MapVoteItems.ContainsItem(mapID))
        return;
      IntermissionVoteItem intermissionVoteItem = IntermissionVoteItemListExtensions.Add(this.MapVoteItems, mapID);
      MultiplayerIntermissionVotingManager.MapItemAddedDelegate onMapItemAdded = this.OnMapItemAdded;
      if (onMapItemAdded != null)
        onMapItemAdded(intermissionVoteItem.Id);
      this.SortVotesAndPickBest();
    }

    public void AddUsableMap(CustomGameUsableMap usableMap) => this.UsableMaps.Add(usableMap);

    public List<string> GetUsableMaps(string gameType)
    {
      List<string> usableMaps = new List<string>();
      for (int index = 0; index < this.UsableMaps.Count; ++index)
      {
        if (this.UsableMaps[index].isCompatibleWithAllGameTypes || this.UsableMaps[index].compatibleGameTypes.Contains(gameType))
          usableMaps.Add(this.UsableMaps[index].map);
      }
      return usableMaps;
    }

    public void AddCultureItem(string cultureID)
    {
      if (this.CultureVoteItems.ContainsItem(cultureID))
        return;
      IntermissionVoteItem intermissionVoteItem = IntermissionVoteItemListExtensions.Add(this.CultureVoteItems, cultureID);
      MultiplayerIntermissionVotingManager.CultureItemAddedDelegate cultureItemAdded = this.OnCultureItemAdded;
      if (cultureItemAdded != null)
        cultureItemAdded(intermissionVoteItem.Id);
      this.SortVotesAndPickBest();
    }

    public void AddVote(PlayerId voterID, string itemID, int voteCount)
    {
      if (this.MapVoteItems.ContainsItem(itemID))
      {
        IntermissionVoteItem intermissionVoteItem = this.MapVoteItems.GetItem(itemID);
        intermissionVoteItem.IncreaseVoteCount(voteCount);
        MultiplayerIntermissionVotingManager.MapItemVoteCountChangedDelegate voteCountChanged = this.OnMapItemVoteCountChanged;
        if (voteCountChanged != null)
          voteCountChanged(intermissionVoteItem.Index, intermissionVoteItem.VoteCount);
      }
      else if (this.CultureVoteItems.ContainsItem(itemID))
      {
        IntermissionVoteItem intermissionVoteItem = this.CultureVoteItems.GetItem(itemID);
        intermissionVoteItem.IncreaseVoteCount(voteCount);
        MultiplayerIntermissionVotingManager.CultureItemVoteCountChangedDelegate voteCountChanged = this.OnCultureItemVoteCountChanged;
        if (voteCountChanged != null)
          voteCountChanged(intermissionVoteItem.Index, intermissionVoteItem.VoteCount);
      }
      else
        Debug.FailedAssert("Item with ID does not exist.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Network\\Gameplay\\MultiplayerIntermissionVotingManager.cs", nameof (AddVote), 116);
      if (!this._votesOfPlayers.ContainsKey(voterID))
        this._votesOfPlayers.Add(voterID, new List<string>());
      switch (voteCount)
      {
        case -1:
          this._votesOfPlayers[voterID].Remove(itemID);
          break;
        case 1:
          this._votesOfPlayers[voterID].Add(itemID);
          break;
      }
      this.SortVotesAndPickBest();
    }

    public void SetVotesOfMap(int mapItemIndex, int voteCount)
    {
      this.MapVoteItems[mapItemIndex].SetVoteCount(voteCount);
      MultiplayerIntermissionVotingManager.MapItemVoteCountChangedDelegate voteCountChanged = this.OnMapItemVoteCountChanged;
      if (voteCountChanged == null)
        return;
      voteCountChanged(mapItemIndex, voteCount);
    }

    public void SetVotesOfCulture(int cultureItemIndex, int voteCount)
    {
      this.CultureVoteItems[cultureItemIndex].SetVoteCount(voteCount);
      MultiplayerIntermissionVotingManager.CultureItemVoteCountChangedDelegate voteCountChanged = this.OnCultureItemVoteCountChanged;
      if (voteCountChanged == null)
        return;
      voteCountChanged(cultureItemIndex, voteCount);
    }

    public void ClearVotes()
    {
      foreach (IntermissionVoteItem mapVoteItem in this.MapVoteItems)
      {
        mapVoteItem.SetVoteCount(0);
        MultiplayerIntermissionVotingManager.MapItemVoteCountChangedDelegate voteCountChanged = this.OnMapItemVoteCountChanged;
        if (voteCountChanged != null)
          voteCountChanged(mapVoteItem.Index, mapVoteItem.VoteCount);
      }
      foreach (IntermissionVoteItem cultureVoteItem in this.CultureVoteItems)
      {
        cultureVoteItem.SetVoteCount(0);
        MultiplayerIntermissionVotingManager.CultureItemVoteCountChangedDelegate voteCountChanged = this.OnCultureItemVoteCountChanged;
        if (voteCountChanged != null)
          voteCountChanged(cultureVoteItem.Index, cultureVoteItem.VoteCount);
      }
      this._votesOfPlayers.Clear();
    }

    public void ClearItems()
    {
      this.MapVoteItems.Clear();
      this.CultureVoteItems.Clear();
      this._votesOfPlayers.Clear();
    }

    public bool IsCultureItem(string itemID) => this.CultureVoteItems.ContainsItem(itemID);

    public bool IsMapItem(string itemID) => this.MapVoteItems.ContainsItem(itemID);

    public void HandlePlayerDisconnect(PlayerId playerID)
    {
      if (!this._votesOfPlayers.ContainsKey(playerID))
        return;
      foreach (string itemID in this._votesOfPlayers[playerID].ToList<string>())
        this.AddVote(playerID, itemID, -1);
      this._votesOfPlayers.Remove(playerID);
    }

    public void SelectRandomCultures()
    {
      string[] strArray = new string[6]
      {
        "khuzait",
        "aserai",
        "battania",
        "vlandia",
        "sturgia",
        "empire"
      };
      Random random = new Random();
      string str1 = strArray[random.Next(0, strArray.Length)];
      string str2 = strArray[random.Next(0, strArray.Length)];
      MultiplayerOptions.OptionType.CultureTeam1.SetValue(str1, MultiplayerOptions.MultiplayerOptionsAccessMode.NextMapOptions);
      MultiplayerOptions.OptionType.CultureTeam2.SetValue(str2, MultiplayerOptions.MultiplayerOptionsAccessMode.NextMapOptions);
    }

    public bool IsPeerVotedForItem(NetworkCommunicator peer, string itemID)
    {
      return this._votesOfPlayers.ContainsKey(peer.VirtualPlayer.Id) && this._votesOfPlayers[peer.VirtualPlayer.Id].Contains(itemID);
    }

    public void SortVotesAndPickBest()
    {
      if (!GameNetwork.IsServer)
        return;
      if (this.IsMapVoteEnabled)
      {
        List<IntermissionVoteItem> list = this.MapVoteItems.ToList<IntermissionVoteItem>();
        if (list.Count > 1)
        {
          list.Sort((Comparison<IntermissionVoteItem>) ((m1, m2) => -m1.VoteCount.CompareTo(m2.VoteCount)));
          MultiplayerOptions.OptionType.Map.SetValue(list[0].Id);
        }
      }
      if (!this.IsCultureVoteEnabled)
        return;
      List<IntermissionVoteItem> list1 = this.CultureVoteItems.ToList<IntermissionVoteItem>();
      if (list1.Count <= 2)
        return;
      list1.Sort((Comparison<IntermissionVoteItem>) ((c1, c2) => -c1.VoteCount.CompareTo(c2.VoteCount)));
      string id1 = list1[0].Id;
      string id2 = list1[1].Id;
      if (list1[0].VoteCount > 2 * list1[1].VoteCount)
        id2 = list1[0].Id;
      MultiplayerOptions.OptionType.CultureTeam1.SetValue(id1);
      MultiplayerOptions.OptionType.CultureTeam2.SetValue(id2);
    }

    public delegate void MapItemAddedDelegate(string mapId);

    public delegate void CultureItemAddedDelegate(string cultureId);

    public delegate void MapItemVoteCountChangedDelegate(int mapItemIndex, int voteCount);

    public delegate void CultureItemVoteCountChangedDelegate(int cultureItemIndex, int voteCount);
  }
}
