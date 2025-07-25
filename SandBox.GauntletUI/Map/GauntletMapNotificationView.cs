// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapNotificationView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.Map;
using TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapNotificationTypes;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapNotificationView))]
  public class GauntletMapNotificationView : MapNotificationView
  {
    private MapNotificationVM _dataSource;
    private IGauntletMovie _movie;
    private MapNavigationHandler _mapNavigationHandler;
    private GauntletLayer _layerAsGauntletLayer;
    private bool _isHoveringOnNotification;
    private const string _defaultSound = "event:/ui/default";

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._mapNavigationHandler = new MapNavigationHandler();
      this._dataSource = new MapNotificationVM((INavigationHandler) this._mapNavigationHandler, new Action<Vec2>(this.MapScreen.FastMoveCameraToPosition));
      this._dataSource.ReceiveNewNotification += new Action<MapNotificationItemBaseVM>(this.OnReceiveNewNotification);
      this._dataSource.SetRemoveInputKey(HotKeyManager.GetCategory("MapNotificationHotKeyCategory").GetHotKey("RemoveNotification"));
      this.Layer = (ScreenLayer) new GauntletLayer(100);
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("MapNotificationHotKeyCategory"));
      this.Layer.InputRestrictions.SetInputRestrictions(false, InputUsageMask.MouseButtons | InputUsageMask.Keyboardkeys);
      this._movie = this._layerAsGauntletLayer.LoadMovie("MapNotificationUI", (ViewModel) this._dataSource);
      this.MapScreen.AddLayer(this.Layer);
    }

    private void OnReceiveNewNotification(MapNotificationItemBaseVM newNotification)
    {
      if (string.IsNullOrEmpty(newNotification.SoundId))
        return;
      SoundEvent.PlaySound2D(newNotification.SoundId);
    }

    public override void RegisterMapNotificationType(System.Type data, System.Type item)
    {
      this._dataSource.RegisterMapNotificationType(data, item);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      ((ViewModel) this._dataSource).OnFinalize();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this._dataSource.OnFrameTick(dt);
      this.HandleInput();
    }

    protected override void OnMenuModeTick(float dt)
    {
      base.OnMenuModeTick(dt);
      this._dataSource.OnMenuModeTick(dt);
      this.HandleInput();
    }

    private void HandleInput()
    {
      if (!this._isHoveringOnNotification && this._dataSource.FocusedNotificationItem != null)
      {
        this._isHoveringOnNotification = true;
        this.Layer.IsFocusLayer = true;
        ScreenManager.TrySetFocus(this.Layer);
      }
      else if (this._isHoveringOnNotification && this._dataSource.FocusedNotificationItem == null)
      {
        this._isHoveringOnNotification = false;
        this.Layer.IsFocusLayer = false;
        ScreenManager.TryLoseFocus(this.Layer);
      }
      if (!this._isHoveringOnNotification || this._dataSource.FocusedNotificationItem == null || !this.Layer.Input.IsHotKeyReleased("RemoveNotification") || this._dataSource.FocusedNotificationItem.ForceInspection)
        return;
      SoundEvent.PlaySound2D("event:/ui/default");
      this._dataSource.FocusedNotificationItem.ExecuteRemove();
    }

    public override void ResetNotifications()
    {
      base.ResetNotifications();
      this._dataSource?.RemoveAllNotifications();
    }
  }
}
