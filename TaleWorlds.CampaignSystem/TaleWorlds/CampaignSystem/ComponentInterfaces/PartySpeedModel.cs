// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PartySpeedModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PartySpeedModel : GameModel
  {
    public abstract float BaseSpeed { get; }

    public abstract float MinimumSpeed { get; }

    public abstract ExplainedNumber CalculateBaseSpeed(
      MobileParty party,
      bool includeDescriptions = false,
      int additionalTroopOnFootCount = 0,
      int additionalTroopOnHorseCount = 0);

    public abstract ExplainedNumber CalculateFinalSpeed(
      MobileParty mobileParty,
      ExplainedNumber finalSpeed);
  }
}
