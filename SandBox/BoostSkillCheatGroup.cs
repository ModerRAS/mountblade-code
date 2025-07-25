// Decompiled with JetBrains decompiler
// Type: SandBox.BoostSkillCheatGroup
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class BoostSkillCheatGroup : GameplayCheatGroup
  {
    public override IEnumerable<GameplayCheatBase> GetCheats()
    {
      foreach (SkillObject skillToBoost in (List<SkillObject>) Skills.All)
        yield return (GameplayCheatBase) new BoostSkillCheatGroup.BoostSkillCheeat(skillToBoost);
    }

    public override TextObject GetName() => new TextObject("{=SFn4UFd4}Boost Skill");

    public class BoostSkillCheeat : GameplayCheatItem
    {
      private readonly SkillObject _skillToBoost;

      public BoostSkillCheeat(SkillObject skillToBoost) => this._skillToBoost = skillToBoost;

      public override void ExecuteCheat()
      {
        int changeAmount = 50;
        if (Hero.MainHero.GetSkillValue(this._skillToBoost) + changeAmount > 330)
          changeAmount = 330 - Hero.MainHero.GetSkillValue(this._skillToBoost);
        Hero.MainHero.HeroDeveloper.ChangeSkillLevel(this._skillToBoost, changeAmount, false);
      }

      public override TextObject GetName() => this._skillToBoost.GetName();
    }
  }
}
