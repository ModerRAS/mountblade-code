// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterRestrictionFlags
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  [Flags]
  public enum CharacterRestrictionFlags : uint
  {
    None = 0,
    NotTransferableInPartyScreen = 1,
    CanNotGoInHideout = 2,
  }
}
