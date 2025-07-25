// Decompiled with JetBrains decompiler
// Type: SandBox.Give10GrainCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox
{
  public class Give10GrainCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      MBReadOnlyList<ItemObject> objectTypeList = MBObjectManager.Instance.GetObjectTypeList<ItemObject>();
      ItemObject itemObject = objectTypeList != null ? objectTypeList.FirstOrDefault<ItemObject>((Func<ItemObject, bool>) (i => i.StringId == "grain")) : (ItemObject) null;
      if (itemObject == null)
        return;
      PartyBase.MainParty?.ItemRoster?.AddToCounts(itemObject, 10);
    }

    public override TextObject GetName() => new TextObject("{=Jdc2aaYo}Give 10 Grain");
  }
}
