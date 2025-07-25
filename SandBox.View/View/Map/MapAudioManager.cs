// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapAudioManager
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.View.Map
{
  internal class MapAudioManager : CampaignEntityVisualComponent
  {
    private const string SeasonParameterId = "Season";
    private const string CameraHeightParameterId = "CampaignCameraHeight";
    private const string TimeOfDayParameterId = "Daytime";
    private const string WeatherEventIntensityParameterId = "Rainfall";
    private CampaignTime.Seasons _lastCachedSeason;
    private float _lastCameraZ;
    private int _lastHourUpdate;
    private MapScene _mapScene;

    public MapAudioManager() => this._mapScene = Campaign.Current.MapSceneWrapper as MapScene;

    public override void OnVisualTick(MapScreen screen, float realDt, float dt)
    {
      CampaignTime now;
      if (CampaignTime.Now.GetSeasonOfYear != this._lastCachedSeason)
      {
        SoundManager.SetGlobalParameter("Season", (float) CampaignTime.Now.GetSeasonOfYear);
        now = CampaignTime.Now;
        this._lastCachedSeason = now.GetSeasonOfYear;
      }
      double lastCameraZ = (double) this._lastCameraZ;
      Vec3 renderCameraPosition = this._mapScene.Scene.LastFinalRenderCameraPosition;
      double z = (double) renderCameraPosition.Z;
      if ((double) Math.Abs((float) (lastCameraZ - z)) > 0.10000000149011612)
      {
        renderCameraPosition = this._mapScene.Scene.LastFinalRenderCameraPosition;
        SoundManager.SetGlobalParameter("CampaignCameraHeight", renderCameraPosition.Z);
        renderCameraPosition = this._mapScene.Scene.LastFinalRenderCameraPosition;
        this._lastCameraZ = renderCameraPosition.Z;
      }
      now = CampaignTime.Now;
      if ((int) now.CurrentHourInDay != this._lastHourUpdate)
        return;
      now = CampaignTime.Now;
      SoundManager.SetGlobalParameter("Daytime", now.CurrentHourInDay);
      now = CampaignTime.Now;
      this._lastHourUpdate = (int) now.CurrentHourInDay;
    }
  }
}
