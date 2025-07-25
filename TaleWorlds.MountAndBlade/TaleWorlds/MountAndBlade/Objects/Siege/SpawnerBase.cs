// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.Siege.SpawnerBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects.Siege
{
  public class SpawnerBase : ScriptComponentBehavior
  {
    [EditorVisibleScriptComponentVariable(true)]
    public string ToBeSpawnedOverrideName = "";
    [EditorVisibleScriptComponentVariable(true)]
    public string ToBeSpawnedOverrideNameForFireVersion = "";
    protected SpawnerEntityEditorHelper _spawnerEditorHelper;
    protected SpawnerEntityMissionHelper _spawnerMissionHelper;
    protected SpawnerEntityMissionHelper _spawnerMissionHelperFire;

    protected internal override bool OnCheckForProblems() => !this._spawnerEditorHelper.IsValid;

    public virtual void AssignParameters(SpawnerEntityMissionHelper _spawnerMissionHelper)
    {
      Debug.FailedAssert("Please override 'AssignParameters' function in the derived class.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\SpawnerBase.cs", nameof (AssignParameters), 40);
    }

    public class SpawnerPermissionField : EditorVisibleScriptComponentVariable
    {
      public SpawnerPermissionField()
        : base(false)
      {
      }
    }
  }
}
