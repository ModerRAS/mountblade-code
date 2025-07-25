// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Markable
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class Markable : ScriptComponentBehavior
  {
    public string MarkerPrefabName = "highlight_beam";
    private GameEntity _marker;
    private DestructableComponent _destructibleComponent;
    private bool _markerActive;
    private bool _markerVisible;
    private float _markerEventBeginningTime;
    private float _markerActiveDuration;
    private float _markerPassiveDuration;

    private bool MarkerActive
    {
      get => this._markerActive;
      set
      {
        if (this._markerActive == value)
          return;
        this._markerActive = value;
        this.SetScriptComponentToTick(this.GetTickRequirement());
      }
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._marker = GameEntity.Instantiate(Mission.Current.Scene, "highlight_beam", this.GameEntity.GetGlobalFrame());
      this.DeactivateMarker();
      this._destructibleComponent = this.GameEntity.GetFirstScriptOfType<DestructableComponent>();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.MarkerActive ? ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement() : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      if (!this.MarkerActive)
        return;
      if (this._destructibleComponent != null && this._destructibleComponent.IsDestroyed)
      {
        if (!this._markerVisible)
          return;
        this.DisableMarkerActivation();
      }
      else if (this._markerVisible)
      {
        if ((double) Mission.Current.CurrentTime - (double) this._markerEventBeginningTime <= (double) this._markerActiveDuration)
          return;
        this.DeactivateMarker();
      }
      else
      {
        if (this._markerVisible || (double) Mission.Current.CurrentTime - (double) this._markerEventBeginningTime <= (double) this._markerPassiveDuration)
          return;
        this.ActivateMarkerFor(this._markerActiveDuration, this._markerPassiveDuration);
      }
    }

    public void DisableMarkerActivation()
    {
      this.MarkerActive = false;
      this.DeactivateMarker();
    }

    public void ActivateMarkerFor(float activeSeconds, float passiveSeconds)
    {
      if (this._destructibleComponent != null && this._destructibleComponent.IsDestroyed)
        return;
      this.MarkerActive = true;
      this._markerVisible = true;
      this._markerEventBeginningTime = Mission.Current.CurrentTime;
      this._markerActiveDuration = activeSeconds;
      this._markerPassiveDuration = passiveSeconds;
      this._marker.SetVisibilityExcludeParents(true);
      this._marker.BurstEntityParticle(true);
    }

    private void DeactivateMarker()
    {
      this._markerVisible = false;
      this._marker.SetVisibilityExcludeParents(false);
      this._markerEventBeginningTime = Mission.Current.CurrentTime;
    }

    public void ResetPassiveDurationTimer()
    {
      if (this._markerVisible || !this.MarkerActive)
        return;
      this._markerEventBeginningTime = Mission.Current.CurrentTime;
    }
  }
}
