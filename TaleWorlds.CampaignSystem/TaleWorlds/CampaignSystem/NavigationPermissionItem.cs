// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.NavigationPermissionItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public struct NavigationPermissionItem
  {
    public bool IsAuthorized { get; private set; }

    public TextObject ReasonString { get; private set; }

    public NavigationPermissionItem(bool isAuthorized, TextObject reasonString)
    {
      this.IsAuthorized = isAuthorized;
      this.ReasonString = reasonString;
    }
  }
}
