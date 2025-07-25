// Decompiled with JetBrains decompiler
// Type: SandBox.UnlockAllCraftingRecipesCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class UnlockAllCraftingRecipesCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      CraftingCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<CraftingCampaignBehavior>();
      if (campaignBehavior == null)
        return;
      Type type = typeof (CraftingCampaignBehavior);
      FieldInfo field1 = type.GetField("_openedPartsDictionary", BindingFlags.Instance | BindingFlags.NonPublic);
      FieldInfo field2 = type.GetField("_openNewPartXpDictionary", BindingFlags.Instance | BindingFlags.NonPublic);
      Dictionary<CraftingTemplate, List<CraftingPiece>> dictionary1 = (Dictionary<CraftingTemplate, List<CraftingPiece>>) field1.GetValue((object) campaignBehavior);
      Dictionary<CraftingTemplate, float> dictionary2 = (Dictionary<CraftingTemplate, float>) field2.GetValue((object) campaignBehavior);
      MethodInfo method = type.GetMethod("OpenPart", BindingFlags.Instance | BindingFlags.NonPublic);
      foreach (CraftingTemplate key in (List<CraftingTemplate>) CraftingTemplate.All)
      {
        if (!dictionary1.ContainsKey(key))
          dictionary1.Add(key, new List<CraftingPiece>());
        if (!dictionary2.ContainsKey(key))
          dictionary2.Add(key, 0.0f);
        foreach (object piece in key.Pieces)
        {
          object[] parameters = new object[3]
          {
            piece,
            (object) key,
            (object) false
          };
          method.Invoke((object) campaignBehavior, parameters);
        }
      }
      field1.SetValue((object) campaignBehavior, (object) dictionary1);
      field2.SetValue((object) campaignBehavior, (object) dictionary2);
    }

    public override TextObject GetName()
    {
      return new TextObject("{=pGfDkbBE}Unlock All Crafting Recipes");
    }
  }
}
