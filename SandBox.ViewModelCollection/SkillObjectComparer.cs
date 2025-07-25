// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SkillObjectComparer
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;

#nullable disable
namespace SandBox.ViewModelCollection
{
  public class SkillObjectComparer : IComparer<PerkObject>
  {
    public int Compare(PerkObject x, PerkObject y)
    {
      int objectTypeSortIndex = SandBoxUIHelper.GetSkillObjectTypeSortIndex(x.Skill);
      int num = SandBoxUIHelper.GetSkillObjectTypeSortIndex(y.Skill).CompareTo(objectTypeSortIndex);
      return num != 0 ? num : this.ResolveEquality(x, y);
    }

    private int ResolveEquality(PerkObject x, PerkObject y)
    {
      return x.RequiredSkillValue.CompareTo(y.RequiredSkillValue);
    }
  }
}
