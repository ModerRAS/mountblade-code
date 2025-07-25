// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IAnalyticsFlagInfo
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IAnalyticsFlagInfo : IMissionBehavior
  {
    MBReadOnlyList<FlagCapturePoint> AllCapturePoints { get; }

    Team GetFlagOwnerTeam(FlagCapturePoint flag);
  }
}
