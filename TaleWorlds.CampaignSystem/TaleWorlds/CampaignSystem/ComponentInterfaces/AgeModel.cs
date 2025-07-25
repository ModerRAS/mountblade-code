// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.AgeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class AgeModel : GameModel
  {
    public abstract int BecomeInfantAge { get; }

    public abstract int BecomeChildAge { get; }

    public abstract int BecomeTeenagerAge { get; }

    public abstract int HeroComesOfAge { get; }

    public abstract int BecomeOldAge { get; }

    public abstract int MaxAge { get; }

    public abstract void GetAgeLimitForLocation(
      CharacterObject character,
      out int minimumAge,
      out int maximumAge,
      string additionalTags = "");

    public abstract float GetSkillScalingModifierForAge(
      Hero hero,
      SkillObject skill,
      bool isByNaturalGrowth);
  }
}
