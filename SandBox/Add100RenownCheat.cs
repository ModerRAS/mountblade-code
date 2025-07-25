// Decompiled with JetBrains decompiler
// Type: SandBox.Add100RenownCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class Add100RenownCheat : GameplayCheatItem
  {
    public override void ExecuteCheat() => GainRenownAction.Apply(Hero.MainHero, 100f, true);

    public override TextObject GetName() => new TextObject("{=zXQwb3lj}Add 100 Renown");
  }
}
