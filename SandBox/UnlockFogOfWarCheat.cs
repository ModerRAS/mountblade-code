// Decompiled with JetBrains decompiler
// Type: SandBox.UnlockFogOfWarCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class UnlockFogOfWarCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
        allAliveHero.IsKnownToPlayer = true;
    }

    public override TextObject GetName() => new TextObject("{=jPtG0Pu1}Unlock Fog of War");
  }
}
