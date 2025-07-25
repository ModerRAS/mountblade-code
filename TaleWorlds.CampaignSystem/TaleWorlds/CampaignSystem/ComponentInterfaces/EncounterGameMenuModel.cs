// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.EncounterGameMenuModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class EncounterGameMenuModel : GameModel
  {
    public abstract string GetEncounterMenu(
      PartyBase attackerParty,
      PartyBase defenderParty,
      out bool startBattle,
      out bool joinBattle);

    public abstract string GetRaidCompleteMenu();

    public abstract string GetNewPartyJoinMenu(MobileParty newParty);

    public abstract string GetGenericStateMenu();
  }
}
