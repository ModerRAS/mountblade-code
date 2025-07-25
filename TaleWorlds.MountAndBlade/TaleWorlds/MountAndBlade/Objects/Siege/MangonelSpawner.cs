// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.Siege.MangonelSpawner
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects.Siege
{
  public class MangonelSpawner : SpawnerBase
  {
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame projectile_pile = MatrixFrame.Zero;
    [EditorVisibleScriptComponentVariable(true)]
    public string AddOnDeployTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public string RemoveOnDeployTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_a_enabled = true;
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_b_enabled = true;
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_c_enabled = true;
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_d_enabled = true;
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_e_enabled = true;
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_f_enabled = true;
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_g_enabled = true;
    [EditorVisibleScriptComponentVariable(true)]
    public bool ammo_pos_h_enabled = true;

    protected internal override void OnPreInit()
    {
      base.OnPreInit();
      this._spawnerMissionHelper = new SpawnerEntityMissionHelper((SpawnerBase) this);
      this._spawnerMissionHelperFire = new SpawnerEntityMissionHelper((SpawnerBase) this, true);
    }

    public override void AssignParameters(SpawnerEntityMissionHelper _spawnerMissionHelper)
    {
      foreach (GameEntity child in _spawnerMissionHelper.SpawnedEntity.GetChildren())
      {
        if (child.GetFirstScriptOfType<Mangonel>() != null)
        {
          child.GetFirstScriptOfType<Mangonel>().AddOnDeployTag = this.AddOnDeployTag;
          child.GetFirstScriptOfType<Mangonel>().RemoveOnDeployTag = this.RemoveOnDeployTag;
          break;
        }
      }
    }
  }
}
