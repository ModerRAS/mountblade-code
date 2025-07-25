// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapEventVisual
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  public class GauntletMapEventVisual : IMapEventVisual
  {
    private static int _battleSoundEventIndex = -1;
    private const string BattleSoundPath = "event:/map/ambient/node/battle";
    private const string RaidSoundPath = "event:/map/ambient/node/battle_raid";
    private const string SiegeSoundPath = "event:/map/ambient/node/battle_siege";
    private SoundEvent _siegeSoundEvent;
    private SoundEvent _raidedSoundEvent;
    private SoundEvent _battleSound;
    private readonly Action<GauntletMapEventVisual> _onDeactivate;
    private readonly Action<GauntletMapEventVisual> _onInitialized;
    private readonly Action<GauntletMapEventVisual> _onVisibilityChanged;
    private Scene _mapScene;

    public MapEvent MapEvent { get; private set; }

    public Vec2 WorldPosition { get; private set; }

    public bool IsVisible { get; private set; }

    private Scene MapScene
    {
      get
      {
        if ((NativeObject) this._mapScene == (NativeObject) null && Campaign.Current?.MapSceneWrapper != null)
          this._mapScene = ((SandBox.MapScene) Campaign.Current.MapSceneWrapper).Scene;
        return this._mapScene;
      }
    }

    public GauntletMapEventVisual(
      MapEvent mapEvent,
      Action<GauntletMapEventVisual> onInitialized,
      Action<GauntletMapEventVisual> onVisibilityChanged,
      Action<GauntletMapEventVisual> onDeactivate)
    {
      this._onDeactivate = onDeactivate;
      this._onInitialized = onInitialized;
      this._onVisibilityChanged = onVisibilityChanged;
      this.MapEvent = mapEvent;
    }

    public void Initialize(Vec2 position, int battleSizeValue, bool hasSound, bool isVisible)
    {
      this.WorldPosition = position;
      this.IsVisible = isVisible;
      Action<GauntletMapEventVisual> onInitialized = this._onInitialized;
      if (onInitialized != null)
        onInitialized(this);
      if (!hasSound)
        return;
      if (this.MapEvent.IsFieldBattle)
      {
        if (GauntletMapEventVisual._battleSoundEventIndex == -1)
          GauntletMapEventVisual._battleSoundEventIndex = SoundEvent.GetEventIdFromString("event:/map/ambient/node/battle");
        this._battleSound = SoundEvent.CreateEvent(GauntletMapEventVisual._battleSoundEventIndex, this.MapScene);
        this._battleSound.SetParameter("battle_size", (float) battleSizeValue);
        float height = 0.0f;
        this.MapScene.GetHeightAtPoint(position, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
        this._battleSound.PlayInPosition(new Vec3(position.x, position.y, height + 2f));
        if (isVisible)
          return;
        this._battleSound.Pause();
      }
      else if (this.MapEvent.IsSiegeAssault || this.MapEvent.IsSiegeOutside || this.MapEvent.IsSiegeAmbush)
      {
        float height = 0.0f;
        Vec2 point = this.MapEvent.MapEventSettlement != null ? this.MapEvent.MapEventSettlement.GatePosition : this.MapEvent.Position;
        Campaign.Current.MapSceneWrapper.GetHeightAtPoint(point, ref height);
        Vec3 vec = new Vec3(point.X, point.Y, height);
        this._siegeSoundEvent?.Stop();
        this._siegeSoundEvent = SoundEvent.CreateEventFromString("event:/map/ambient/node/battle_siege", this.MapScene);
        this._siegeSoundEvent.SetParameter("battle_size", 4f);
        this._siegeSoundEvent.SetPosition(vec);
        this._siegeSoundEvent.Play();
      }
      else
      {
        if (!this.MapEvent.IsRaid)
          return;
        if (this.MapEvent.MapEventSettlement.IsRaided && this._raidedSoundEvent == null)
        {
          this._raidedSoundEvent = SoundEvent.CreateEventFromString("event:/map/ambient/node/burning_village", this.MapScene);
          this._raidedSoundEvent.SetParameter("battle_size", 4f);
          this._raidedSoundEvent.SetPosition(this.MapEvent.MapEventSettlement.GetPosition());
          this._raidedSoundEvent.Play();
        }
        else
        {
          if (this.MapEvent.MapEventSettlement.IsRaided || this._raidedSoundEvent == null)
            return;
          this._raidedSoundEvent.Stop();
          this._raidedSoundEvent = (SoundEvent) null;
        }
      }
    }

    public void OnMapEventEnd()
    {
      Action<GauntletMapEventVisual> onDeactivate = this._onDeactivate;
      if (onDeactivate != null)
        onDeactivate(this);
      if (this._battleSound != null)
      {
        this._battleSound.Stop();
        this._battleSound = (SoundEvent) null;
      }
      if (this._siegeSoundEvent != null)
      {
        this._siegeSoundEvent.Stop();
        this._siegeSoundEvent = (SoundEvent) null;
      }
      if (this._raidedSoundEvent == null)
        return;
      this._raidedSoundEvent.Stop();
      this._raidedSoundEvent = (SoundEvent) null;
    }

    public void SetVisibility(bool isVisible)
    {
      this.IsVisible = isVisible;
      Action<GauntletMapEventVisual> visibilityChanged = this._onVisibilityChanged;
      if (visibilityChanged != null)
        visibilityChanged(this);
      SoundEvent battleSound = this._battleSound;
      if ((battleSound != null ? (battleSound.IsValid ? 1 : 0) : 0) != 0)
      {
        if (isVisible && this._battleSound.IsPaused())
          this._battleSound.Resume();
        else if (!isVisible && !this._battleSound.IsPaused())
          this._battleSound.Pause();
      }
      SoundEvent siegeSoundEvent = this._siegeSoundEvent;
      if ((siegeSoundEvent != null ? (siegeSoundEvent.IsValid ? 1 : 0) : 0) != 0)
      {
        if (isVisible && this._siegeSoundEvent.IsPaused())
          this._siegeSoundEvent.Resume();
        else if (!isVisible && !this._siegeSoundEvent.IsPaused())
          this._siegeSoundEvent.Pause();
      }
      SoundEvent raidedSoundEvent = this._raidedSoundEvent;
      if ((raidedSoundEvent != null ? (raidedSoundEvent.IsValid ? 1 : 0) : 0) == 0)
        return;
      if (isVisible && this._raidedSoundEvent.IsPaused())
      {
        this._raidedSoundEvent.Resume();
      }
      else
      {
        if (isVisible || this._raidedSoundEvent.IsPaused())
          return;
        this._raidedSoundEvent.Pause();
      }
    }
  }
}
