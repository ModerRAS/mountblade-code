// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.IViewDataTracker
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public interface IViewDataTracker
  {
    void SetInventoryLocks(IEnumerable<string> locks);

    IEnumerable<string> GetInventoryLocks();

    bool GetMapBarExtendedState();

    void SetMapBarExtendedState(bool value);

    void SetPartyTroopLocks(IEnumerable<string> locks);

    void SetPartyPrisonerLocks(IEnumerable<string> locks);

    void SetPartySortType(int sortType);

    void SetIsPartySortAscending(bool isAscending);

    IEnumerable<string> GetPartyTroopLocks();

    IEnumerable<string> GetPartyPrisonerLocks();

    int GetPartySortType();

    bool GetIsPartySortAscending();

    void AddEncyclopediaBookmarkToItem(Concept concept);

    void AddEncyclopediaBookmarkToItem(Kingdom kingdom);

    void AddEncyclopediaBookmarkToItem(Settlement settlement);

    void AddEncyclopediaBookmarkToItem(CharacterObject unit);

    void AddEncyclopediaBookmarkToItem(Hero item);

    void AddEncyclopediaBookmarkToItem(Clan clan);

    void RemoveEncyclopediaBookmarkFromItem(Hero hero);

    void RemoveEncyclopediaBookmarkFromItem(Clan clan);

    void RemoveEncyclopediaBookmarkFromItem(Concept concept);

    void RemoveEncyclopediaBookmarkFromItem(Kingdom kingdom);

    void RemoveEncyclopediaBookmarkFromItem(Settlement settlement);

    void RemoveEncyclopediaBookmarkFromItem(CharacterObject unit);

    bool IsEncyclopediaBookmarked(Hero hero);

    bool IsEncyclopediaBookmarked(Clan clan);

    bool IsEncyclopediaBookmarked(Concept concept);

    bool IsEncyclopediaBookmarked(Kingdom kingdom);

    bool IsEncyclopediaBookmarked(Settlement settlement);

    bool IsEncyclopediaBookmarked(CharacterObject unit);

    void SetQuestSelection(QuestBase selection);

    QuestBase GetQuestSelection();

    void SetQuestSortTypeSelection(int questSortTypeSelection);

    int GetQuestSortTypeSelection();

    void InventorySetSortPreference(int inventoryMode, int sortOption, int sortState);

    Tuple<int, int> InventoryGetSortPreference(int inventoryMode);

    bool IsPartyNotificationActive { get; }

    string GetPartyNotificationText();

    void ClearPartyNotification();

    void UpdatePartyNotification();

    bool IsQuestNotificationActive { get; }

    List<JournalLog> UnExaminedQuestLogs { get; }

    string GetQuestNotificationText();

    void OnQuestLogExamined(JournalLog log);

    List<Army> UnExaminedArmies { get; }

    int NumOfKingdomArmyNotifications { get; }

    void OnArmyExamined(Army army);

    bool IsCharacterNotificationActive { get; }

    void ClearCharacterNotification();

    string GetCharacterNotificationText();
  }
}
