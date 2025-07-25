// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.EncyclopediaSortController
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia
{
  public class EncyclopediaSortController
  {
    public TextObject Name { get; }

    public EncyclopediaListItemComparerBase Comparer { get; }

    public EncyclopediaSortController(TextObject name, EncyclopediaListItemComparerBase comparer)
    {
      this.Name = name;
      this.Comparer = comparer;
    }
  }
}
