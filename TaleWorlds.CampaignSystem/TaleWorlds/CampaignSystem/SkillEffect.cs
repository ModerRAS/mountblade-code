// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SkillEffect
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public sealed class SkillEffect : PropertyObject
  {
    public static MBReadOnlyList<SkillEffect> All => Campaign.Current.AllSkillEffects;

    public SkillEffect.PerkRole PrimaryRole { get; private set; }

    public SkillEffect.PerkRole SecondaryRole { get; private set; }

    public float PrimaryBonus { get; private set; }

    public float SecondaryBonus { get; private set; }

    public SkillEffect.EffectIncrementType IncrementType { get; private set; }

    public SkillObject[] EffectedSkills { get; private set; }

    public float PrimaryBaseValue { get; private set; }

    public float SecondaryBaseValue { get; private set; }

    public SkillEffect(string stringId)
      : base(stringId)
    {
    }

    public void Initialize(
      TextObject description,
      SkillObject[] effectedSkills,
      SkillEffect.PerkRole primaryRole = SkillEffect.PerkRole.None,
      float primaryBonus = 0.0f,
      SkillEffect.PerkRole secondaryRole = SkillEffect.PerkRole.None,
      float secondaryBonus = 0.0f,
      SkillEffect.EffectIncrementType incrementType = SkillEffect.EffectIncrementType.AddFactor,
      float primaryBaseValue = 0.0f,
      float secondaryBaseValue = 0.0f)
    {
      this.Initialize(TextObject.Empty, description);
      this.PrimaryRole = primaryRole;
      this.SecondaryRole = secondaryRole;
      this.PrimaryBonus = primaryBonus;
      this.SecondaryBonus = secondaryBonus;
      this.IncrementType = incrementType;
      this.EffectedSkills = effectedSkills;
      this.PrimaryBaseValue = primaryBaseValue;
      this.SecondaryBaseValue = secondaryBaseValue;
      this.AfterInitialized();
    }

    public float GetPrimaryValue(int skillLevel)
    {
      return MathF.Max(0.0f, this.PrimaryBaseValue + this.PrimaryBonus * (float) skillLevel);
    }

    public float GetSecondaryValue(int skillLevel)
    {
      return MathF.Max(0.0f, this.SecondaryBaseValue + this.SecondaryBonus * (float) skillLevel);
    }

    public enum EffectIncrementType
    {
      Invalid = -1, // 0xFFFFFFFF
      Add = 0,
      AddFactor = 1,
    }

    public enum PerkRole
    {
      None,
      Ruler,
      ClanLeader,
      Governor,
      ArmyCommander,
      PartyLeader,
      PartyOwner,
      Surgeon,
      Engineer,
      Scout,
      Quartermaster,
      PartyMember,
      Personal,
      Captain,
      NumberOfPerkRoles,
    }
  }
}
