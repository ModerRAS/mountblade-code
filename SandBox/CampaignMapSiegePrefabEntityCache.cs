// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignMapSiegePrefabEntityCache
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class CampaignMapSiegePrefabEntityCache : ScriptComponentBehavior
  {
    [EditableScriptComponentVariable(true)]
    private string _attackerBallistaPrefab = "ballista_a_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _defenderBallistaPrefab = "ballista_b_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _attackerFireBallistaPrefab = "ballista_a_fire_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _defenderFireBallistaPrefab = "ballista_b_fire_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _attackerMangonelPrefab = "mangonel_a_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _defenderMangonelPrefab = "mangonel_b_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _attackerFireMangonelPrefab = "mangonel_a_fire_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _defenderFireMangonelPrefab = "mangonel_b_fire_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _attackerTrebuchetPrefab = "trebuchet_a_mapicon";
    [EditableScriptComponentVariable(true)]
    private string _defenderTrebuchetPrefab = "trebuchet_b_mapicon";
    private MatrixFrame _attackerBallistaLaunchEntitialFrame;
    private MatrixFrame _defenderBallistaLaunchEntitialFrame;
    private MatrixFrame _attackerFireBallistaLaunchEntitialFrame;
    private MatrixFrame _defenderFireBallistaLaunchEntitialFrame;
    private MatrixFrame _attackerMangonelLaunchEntitialFrame;
    private MatrixFrame _defenderMangonelLaunchEntitialFrame;
    private MatrixFrame _attackerFireMangonelLaunchEntitialFrame;
    private MatrixFrame _defenderFireMangonelLaunchEntitialFrame;
    private MatrixFrame _attackerTrebuchetLaunchEntitialFrame;
    private MatrixFrame _defenderTrebuchetLaunchEntitialFrame;
    private Vec3 _attackerBallistaScale;
    private Vec3 _defenderBallistaScale;
    private Vec3 _attackerFireBallistaScale;
    private Vec3 _defenderFireBallistaScale;
    private Vec3 _attackerMangonelScale;
    private Vec3 _defenderMangonelScale;
    private Vec3 _attackerFireMangonelScale;
    private Vec3 _defenderFireMangonelScale;
    private Vec3 _attackerTrebuchetScale;
    private Vec3 _defenderTrebuchetScale;

    protected override void OnInit()
    {
      base.OnInit();
      GameEntity gameEntity1 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._attackerBallistaPrefab, true);
      this._attackerBallistaLaunchEntitialFrame = gameEntity1.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._attackerBallistaScale = gameEntity1.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity2 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._defenderBallistaPrefab, true);
      this._defenderBallistaLaunchEntitialFrame = gameEntity2.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._defenderBallistaScale = gameEntity2.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity3 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._attackerFireBallistaPrefab, true);
      this._attackerFireBallistaLaunchEntitialFrame = gameEntity3.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._attackerFireBallistaScale = gameEntity3.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity4 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._defenderFireBallistaPrefab, true);
      this._defenderFireBallistaLaunchEntitialFrame = gameEntity4.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._defenderFireBallistaScale = gameEntity4.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity5 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._attackerMangonelPrefab, true);
      this._attackerMangonelLaunchEntitialFrame = gameEntity5.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._attackerMangonelScale = gameEntity5.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity6 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._defenderMangonelPrefab, true);
      this._defenderMangonelLaunchEntitialFrame = gameEntity6.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._defenderMangonelScale = gameEntity6.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity7 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._attackerFireMangonelPrefab, true);
      this._attackerFireMangonelLaunchEntitialFrame = gameEntity7.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._attackerFireMangonelScale = gameEntity7.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity8 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._defenderFireMangonelPrefab, true);
      this._defenderFireMangonelLaunchEntitialFrame = gameEntity8.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._defenderFireMangonelScale = gameEntity8.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity9 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._attackerTrebuchetPrefab, true);
      this._attackerTrebuchetLaunchEntitialFrame = gameEntity9.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._attackerTrebuchetScale = gameEntity9.GetChild(0).GetFrame().rotation.GetScaleVector();
      GameEntity gameEntity10 = GameEntity.Instantiate(((MapScene) Campaign.Current.MapSceneWrapper).Scene, this._defenderTrebuchetPrefab, true);
      this._defenderTrebuchetLaunchEntitialFrame = gameEntity10.GetChild(0).GetFirstChildEntityWithTag("projectile_position").GetGlobalFrame();
      this._defenderTrebuchetScale = gameEntity10.GetChild(0).GetFrame().rotation.GetScaleVector();
    }

    public MatrixFrame GetLaunchEntitialFrameForSiegeEngine(
      SiegeEngineType type,
      BattleSideEnum side)
    {
      MatrixFrame frameForSiegeEngine = MatrixFrame.Identity;
      if (type == DefaultSiegeEngineTypes.Onager)
        frameForSiegeEngine = this._attackerMangonelLaunchEntitialFrame;
      else if (type == DefaultSiegeEngineTypes.FireOnager)
        frameForSiegeEngine = this._attackerFireMangonelLaunchEntitialFrame;
      else if (type == DefaultSiegeEngineTypes.Catapult)
        frameForSiegeEngine = this._defenderMangonelLaunchEntitialFrame;
      else if (type == DefaultSiegeEngineTypes.FireCatapult)
        frameForSiegeEngine = this._defenderFireMangonelLaunchEntitialFrame;
      else if (type == DefaultSiegeEngineTypes.Ballista)
        frameForSiegeEngine = side == BattleSideEnum.Attacker ? this._attackerBallistaLaunchEntitialFrame : this._defenderBallistaLaunchEntitialFrame;
      else if (type == DefaultSiegeEngineTypes.FireBallista)
        frameForSiegeEngine = side == BattleSideEnum.Attacker ? this._attackerFireBallistaLaunchEntitialFrame : this._defenderFireBallistaLaunchEntitialFrame;
      else if (type == DefaultSiegeEngineTypes.Trebuchet)
        frameForSiegeEngine = this._attackerTrebuchetLaunchEntitialFrame;
      else if (type == DefaultSiegeEngineTypes.Bricole)
        frameForSiegeEngine = this._defenderTrebuchetLaunchEntitialFrame;
      return frameForSiegeEngine;
    }

    public Vec3 GetScaleForSiegeEngine(SiegeEngineType type, BattleSideEnum side)
    {
      Vec3 scaleForSiegeEngine = Vec3.Zero;
      if (type == DefaultSiegeEngineTypes.Onager)
        scaleForSiegeEngine = this._attackerMangonelScale;
      else if (type == DefaultSiegeEngineTypes.FireOnager)
        scaleForSiegeEngine = this._attackerFireMangonelScale;
      else if (type == DefaultSiegeEngineTypes.Catapult)
        scaleForSiegeEngine = this._defenderMangonelScale;
      else if (type == DefaultSiegeEngineTypes.FireCatapult)
        scaleForSiegeEngine = this._defenderFireMangonelScale;
      else if (type == DefaultSiegeEngineTypes.Ballista)
        scaleForSiegeEngine = side == BattleSideEnum.Attacker ? this._attackerBallistaScale : this._defenderBallistaScale;
      else if (type == DefaultSiegeEngineTypes.FireBallista)
        scaleForSiegeEngine = side == BattleSideEnum.Attacker ? this._attackerFireBallistaScale : this._defenderFireBallistaScale;
      else if (type == DefaultSiegeEngineTypes.Trebuchet)
        scaleForSiegeEngine = this._attackerTrebuchetScale;
      else if (type == DefaultSiegeEngineTypes.Bricole)
        scaleForSiegeEngine = this._defenderTrebuchetScale;
      return scaleForSiegeEngine;
    }
  }
}
