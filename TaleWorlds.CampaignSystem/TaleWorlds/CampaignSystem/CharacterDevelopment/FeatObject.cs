// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterDevelopment.FeatObject
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterDevelopment
{
  public sealed class FeatObject : PropertyObject
  {
    public static MBReadOnlyList<FeatObject> All => Campaign.Current.AllFeats;

    public float EffectBonus { get; private set; }

    public FeatObject.AdditionType IncrementType { get; private set; }

    public bool IsPositive { get; private set; }

    public FeatObject(string stringId)
      : base(stringId)
    {
    }

    public void Initialize(
      string name,
      string description,
      float effectBonus,
      bool isPositiveEffect,
      FeatObject.AdditionType incrementType)
    {
      this.Initialize(new TextObject(name), new TextObject(description));
      this.EffectBonus = effectBonus;
      this.IncrementType = incrementType;
      this.IsPositive = isPositiveEffect;
      this.AfterInitialized();
    }

    public enum AdditionType
    {
      Add,
      AddFactor,
    }
  }
}
