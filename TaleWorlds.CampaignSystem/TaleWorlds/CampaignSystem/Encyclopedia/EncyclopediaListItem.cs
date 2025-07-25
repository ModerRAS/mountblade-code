// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.EncyclopediaListItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia
{
  public struct EncyclopediaListItem
  {
    public readonly object Object;
    public readonly string Name;
    public readonly string Description;
    public readonly string Id;
    public readonly string TypeName;
    public readonly bool PlayerCanSeeValues;
    public readonly Action OnShowTooltip;

    public EncyclopediaListItem(
      object obj,
      string name,
      string description,
      string id,
      string typeName,
      bool playerCanSeeValues,
      Action onShowTooltip = null)
    {
      this.Object = obj;
      this.Name = name;
      this.Description = description;
      this.Id = id;
      this.TypeName = typeName;
      this.PlayerCanSeeValues = playerCanSeeValues;
      this.OnShowTooltip = onShowTooltip;
    }
  }
}
