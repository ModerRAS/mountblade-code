// Decompiled with JetBrains decompiler
// Type: SandBox.Add1000GoldCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class Add1000GoldCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, 1000, true);
    }

    public override TextObject GetName() => new TextObject("{=KLbeF6gf}Add 1000 Gold");
  }
}
