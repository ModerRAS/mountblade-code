// Decompiled with JetBrains decompiler
// Type: SandBox.Give10WarhorsesCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox
{
  public class Give10WarhorsesCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      ItemObject itemObject = MBObjectManager.Instance.GetObjectTypeList<ItemObject>().FirstOrDefault<ItemObject>((Func<ItemObject, bool>) (i => i.StringId == "war_horse"));
      if (itemObject == null)
        return;
      PartyBase.MainParty?.ItemRoster?.AddToCounts(itemObject, 10);
    }

    public override TextObject GetName() => new TextObject("{=4KvAwfEZ}Give 10 War Horses");
  }
}
