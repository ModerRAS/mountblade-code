// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameMenus.GameMenuEventHandler
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameMenus
{
  [AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
  public class GameMenuEventHandler : Attribute
  {
    public string MenuId { get; private set; }

    public string MenuOptionId { get; private set; }

    public GameMenuEventHandler.EventType Type { get; private set; }

    public GameMenuEventHandler(
      string menuId,
      string menuOptionId,
      GameMenuEventHandler.EventType type)
    {
      this.MenuId = menuId;
      this.MenuOptionId = menuOptionId;
      this.Type = type;
    }

    public enum EventType
    {
      OnCondition,
      OnConsequence,
    }
  }
}
