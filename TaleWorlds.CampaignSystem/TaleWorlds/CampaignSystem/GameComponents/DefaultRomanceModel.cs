// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultRomanceModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultRomanceModel : RomanceModel
  {
    public override int GetAttractionValuePercentage(
      Hero potentiallyInterestedCharacter,
      Hero heroOfInterest)
    {
      StaticBodyProperties staticBodyProperties = potentiallyInterestedCharacter.StaticBodyProperties;
      int hashCode1 = staticBodyProperties.GetHashCode();
      staticBodyProperties = heroOfInterest.StaticBodyProperties;
      int hashCode2 = staticBodyProperties.GetHashCode();
      return MathF.Abs((hashCode1 + hashCode2) % 100);
    }
  }
}
