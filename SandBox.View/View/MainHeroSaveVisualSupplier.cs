// Decompiled with JetBrains decompiler
// Type: SandBox.View.MainHeroSaveVisualSupplier
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using System.Globalization;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.View
{
  public class MainHeroSaveVisualSupplier : IMainHeroVisualSupplier
  {
    string IMainHeroVisualSupplier.GetMainHeroVisualCode()
    {
      Hero mainHero = Hero.MainHero;
      CharacterObject characterObject = mainHero.CharacterObject;
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(characterObject.Race);
      MBStringBuilder mbStringBuilder = new MBStringBuilder();
      mbStringBuilder.Initialize(1024, "GetMainHeroVisualCode");
      mbStringBuilder.Append<string>("4|");
      mbStringBuilder.Append<string>(MBActionSet.GetActionSet(baseMonsterFromRace.ActionSetCode).GetSkeletonName());
      mbStringBuilder.Append<string>("|");
      Equipment battleEquipment = mainHero.BattleEquipment;
      SkinMask skinMeshesMask = battleEquipment.GetSkinMeshesMask();
      mbStringBuilder.Append<string>(skinMeshesMask.ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(mainHero.IsFemale.ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(mainHero.CharacterObject.Race.ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(battleEquipment.GetUnderwearType(mainHero.IsFemale).ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(battleEquipment.BodyMeshType.ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(battleEquipment.HairCoverType.ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(battleEquipment.BeardCoverType.ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(battleEquipment.BodyDeformType.ToString());
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(characterObject.FaceDirtAmount.ToString((IFormatProvider) CultureInfo.InvariantCulture));
      mbStringBuilder.Append<string>("|");
      mbStringBuilder.Append<string>(mainHero.BodyProperties.ToString());
      mbStringBuilder.Append<string>("|");
      ref MBStringBuilder local1 = ref mbStringBuilder;
      uint num;
      string str1;
      if (mainHero.MapFaction == null)
      {
        str1 = "0xFFFFFFFF";
      }
      else
      {
        num = mainHero.MapFaction.Color;
        str1 = num.ToString();
      }
      local1.Append<string>(str1);
      mbStringBuilder.Append<string>("|");
      ref MBStringBuilder local2 = ref mbStringBuilder;
      string str2;
      if (mainHero.MapFaction == null)
      {
        str2 = "0xFFFFFFFF";
      }
      else
      {
        num = mainHero.MapFaction.Color2;
        str2 = num.ToString();
      }
      local2.Append<string>(str2);
      mbStringBuilder.Append<string>("|");
      EquipmentElement equipmentElement;
      for (EquipmentIndex index = EquipmentIndex.NumAllWeaponSlots; index < EquipmentIndex.ArmorItemEndSlot; ++index)
      {
        equipmentElement = battleEquipment[index];
        ItemObject itemObject = equipmentElement.Item;
        string multiMeshName = itemObject != null ? itemObject.MultiMeshName : "";
        bool flag1 = itemObject != null && itemObject.IsUsingTeamColor;
        bool flag2 = itemObject != null && itemObject.IsUsingTableau;
        bool flag3 = itemObject != null && itemObject.HasArmorComponent && itemObject.ArmorComponent.MultiMeshHasGenderVariations;
        mbStringBuilder.Append<string>(multiMeshName + "|");
        mbStringBuilder.Append<string>(flag1.ToString() + "|");
        mbStringBuilder.Append<string>(flag3.ToString() + "|");
        mbStringBuilder.Append<string>(flag2.ToString() + "|");
      }
      equipmentElement = mainHero.BattleEquipment[EquipmentIndex.ArmorItemEndSlot];
      if (!equipmentElement.IsEmpty)
      {
        equipmentElement = mainHero.BattleEquipment[EquipmentIndex.ArmorItemEndSlot];
        ItemObject mountItem = equipmentElement.Item;
        equipmentElement = mainHero.BattleEquipment[EquipmentIndex.HorseHarness];
        ItemObject itemObject = equipmentElement.Item;
        HorseComponent horseComponent = mountItem.HorseComponent;
        MBActionSet actionSet = MBActionSet.GetActionSet(mountItem.HorseComponent.Monster.ActionSetCode);
        mbStringBuilder.Append<string>(actionSet.GetSkeletonName());
        mbStringBuilder.Append<string>("|");
        mbStringBuilder.Append<string>(mountItem.MultiMeshName);
        mbStringBuilder.Append<string>("|");
        MountCreationKey randomMountKey = MountCreationKey.GetRandomMountKey(mountItem, characterObject.GetMountKeySeed());
        mbStringBuilder.Append<MountCreationKey>(randomMountKey);
        mbStringBuilder.Append<string>("|");
        if (horseComponent.HorseMaterialNames.Count > 0)
        {
          int index1 = MathF.Min((int) randomMountKey.MaterialIndex, horseComponent.HorseMaterialNames.Count - 1);
          HorseComponent.MaterialProperty horseMaterialName = horseComponent.HorseMaterialNames[index1];
          mbStringBuilder.Append<string>(horseMaterialName.Name);
          mbStringBuilder.Append<string>("|");
          uint maxValue = uint.MaxValue;
          int index2 = MathF.Min((int) randomMountKey.MeshMultiplierIndex, horseMaterialName.MeshMultiplier.Count - 1);
          if (index2 != -1)
            maxValue = horseMaterialName.MeshMultiplier[index2].Item1;
          mbStringBuilder.Append(maxValue);
        }
        else
          mbStringBuilder.Append<string>("|");
        mbStringBuilder.Append<string>("|");
        ActionIndexCache actionCode = ActionIndexCache.Create("act_inventory_idle");
        mbStringBuilder.Append<string>(actionSet.GetAnimationName(actionCode));
        mbStringBuilder.Append<string>("|");
        if (itemObject != null)
        {
          mbStringBuilder.Append<string>(itemObject.MultiMeshName);
          mbStringBuilder.Append<string>("|");
          mbStringBuilder.Append<bool>(itemObject.IsUsingTeamColor);
          mbStringBuilder.Append<string>("|");
          mbStringBuilder.Append<string>(itemObject.ArmorComponent.ReinsMesh);
          mbStringBuilder.Append<string>("|");
        }
        else
          mbStringBuilder.Append<string>("|||");
        List<string> stringList = new List<string>();
        foreach (KeyValuePair<string, bool> additionalMeshesName in horseComponent.AdditionalMeshesNameList)
        {
          if (additionalMeshesName.Key.Length > 0)
          {
            string str3 = additionalMeshesName.Key;
            if (itemObject == null || !additionalMeshesName.Value)
            {
              stringList.Add(str3);
            }
            else
            {
              ArmorComponent armorComponent1 = itemObject.ArmorComponent;
              if ((armorComponent1 != null ? (armorComponent1.ManeCoverType != ArmorComponent.HorseHarnessCoverTypes.All ? 1 : 0) : 1) != 0)
              {
                ArmorComponent armorComponent2 = itemObject.ArmorComponent;
                if ((armorComponent2 != null ? (armorComponent2.ManeCoverType > ArmorComponent.HorseHarnessCoverTypes.None ? 1 : 0) : 0) != 0)
                  str3 = str3 + "_" + (object) itemObject?.ArmorComponent?.ManeCoverType;
                stringList.Add(str3);
              }
            }
          }
        }
        mbStringBuilder.Append(stringList.Count);
        foreach (string str4 in stringList)
        {
          mbStringBuilder.Append<string>("|");
          mbStringBuilder.Append<string>(str4);
        }
      }
      else
        mbStringBuilder.Append<string>("|||||||||0");
      return mbStringBuilder.ToStringAndRelease();
    }
  }
}
