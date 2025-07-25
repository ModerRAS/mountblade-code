// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IEditorMissionTester
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IEditorMissionTester
  {
    void StartMissionForEditor(string missionName, string sceneName, string levels);

    void StartMissionForReplayEditor(
      string missionName,
      string sceneName,
      string levels,
      string fileName,
      bool record,
      float startTime,
      float endTime);
  }
}
