// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPlayerProgressionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPlayerProgressionModel : PlayerProgressionModel
  {
    public override float GetPlayerProgress()
    {
      return MBMath.ClampFloat((float) ((double) Clan.PlayerClan.Fiefs.Count * 0.10000000149011612 + (double) Clan.PlayerClan.TotalStrength * 0.00079999997979030013 + (double) Clan.PlayerClan.Renown * 1.4999999621068127E-05 + (double) Clan.PlayerClan.Lords.Count * (1.0 / 500.0) + (double) Clan.PlayerClan.Companions.Count * 0.0099999997764825821 + (double) Clan.PlayerClan.SupporterNotables.Count * (1.0 / 1000.0) + (double) Hero.MainHero.OwnedCaravans.Count * 0.0099999997764825821 + (double) PartyBase.MainParty.NumberOfAllMembers * (1.0 / 500.0) + (double) CharacterObject.PlayerCharacter.Level * (1.0 / 500.0)), 0.0f, 1f);
    }
  }
}
