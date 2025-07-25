// Decompiled with JetBrains decompiler
// Type: SandBox.FillCraftingStaminaCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class FillCraftingStaminaCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      ICraftingCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<ICraftingCampaignBehavior>();
      if (campaignBehavior == null || PartyBase.MainParty == null)
        return;
      for (int index = 0; index < PartyBase.MainParty.MemberRoster.Count; ++index)
      {
        CharacterObject characterAtIndex = PartyBase.MainParty.MemberRoster.GetCharacterAtIndex(index);
        if (characterAtIndex.HeroObject != null)
        {
          int heroCraftingStamina = campaignBehavior.GetMaxHeroCraftingStamina(characterAtIndex.HeroObject);
          campaignBehavior?.SetHeroCraftingStamina(characterAtIndex.HeroObject, MathF.Max(heroCraftingStamina, 100));
        }
      }
    }

    public override TextObject GetName() => new TextObject("{=1Pc0SXXL}Fill Crafting Stamina");
  }
}
