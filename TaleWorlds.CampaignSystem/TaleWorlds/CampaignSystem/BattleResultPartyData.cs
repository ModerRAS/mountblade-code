// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BattleResultPartyData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public struct BattleResultPartyData
  {
    public readonly PartyBase Party;
    public readonly List<CharacterObject> Characters;

    public BattleResultPartyData(PartyBase party)
    {
      this.Party = party;
      this.Characters = new List<CharacterObject>();
    }
  }
}
