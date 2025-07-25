// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Extensions.TextObjectExtensions
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Extensions
{
  public static class TextObjectExtensions
  {
    public static void SetCharacterProperties(
      this TextObject to,
      string tag,
      CharacterObject character,
      bool includeDetails = false)
    {
      StringHelpers.SetCharacterProperties(tag, character, to, includeDetails);
    }
  }
}
