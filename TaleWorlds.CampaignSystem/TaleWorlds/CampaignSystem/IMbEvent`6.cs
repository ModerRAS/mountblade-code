// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.IMbEvent`6
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public interface IMbEvent<out T1, out T2, out T3, out T4, out T5, out T6> : IMbEventBase
  {
    void AddNonSerializedListener(object owner, Action<T1, T2, T3, T4, T5, T6> action);
  }
}
