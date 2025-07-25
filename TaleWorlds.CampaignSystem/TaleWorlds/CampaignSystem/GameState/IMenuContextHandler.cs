// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.IMenuContextHandler
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Roster;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public interface IMenuContextHandler
  {
    void OnBackgroundMeshNameSet(string name);

    void OnOpenTownManagement();

    void OnOpenRecruitVolunteers();

    void OnOpenTournamentLeaderboard();

    void OnOpenTroopSelection(
      TroopRoster fullRoster,
      TroopRoster initialSelections,
      Func<CharacterObject, bool> canChangeStatusOfTroop,
      Action<TroopRoster> onDone,
      int maxSelectableTroopCount,
      int minSelectableTroopCount);

    void OnMenuCreate();

    void OnMenuActivate();

    void OnHourlyTick();

    void OnPanelSoundIDSet(string panelSoundID);

    void OnAmbientSoundIDSet(string ambientSoundID);
  }
}
