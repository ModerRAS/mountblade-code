// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxEditorMissionTester
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  internal class SandBoxEditorMissionTester : IEditorMissionTester
  {
    void IEditorMissionTester.StartMissionForEditor(
      string missionName,
      string sceneName,
      string levels)
    {
      MBGameManager.StartNewGame((MBGameManager) new EditorSceneMissionManager(missionName, sceneName, levels, false, "", false, 0.0f, 0.0f));
    }

    void IEditorMissionTester.StartMissionForReplayEditor(
      string missionName,
      string sceneName,
      string levels,
      string fileName,
      bool record,
      float startTime,
      float endTime)
    {
      MBGameManager.StartNewGame((MBGameManager) new EditorSceneMissionManager(missionName, sceneName, levels, true, fileName, record, startTime, endTime));
    }
  }
}
