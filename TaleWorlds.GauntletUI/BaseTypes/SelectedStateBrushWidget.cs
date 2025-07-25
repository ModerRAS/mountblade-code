// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.SelectedStateBrushWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class SelectedStateBrushWidget : BrushWidget
  {
    private bool _isDirty = true;
    private bool _isBrushStatesRegistered;
    private string _selectedState = "Default";

    public SelectedStateBrushWidget(UIContext context)
      : base(context)
    {
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if (!this._isBrushStatesRegistered)
      {
        this.RegisterBrushStatesOfWidget();
        this._isBrushStatesRegistered = true;
      }
      if (!this._isDirty)
        return;
      this.SetState(this.SelectedState);
      this._isDirty = false;
    }

    [Editor(false)]
    public string SelectedState
    {
      get => this._selectedState;
      set
      {
        if (!(this._selectedState != value))
          return;
        this._selectedState = value;
        this.OnPropertyChanged<string>(value, nameof (SelectedState));
        this._isDirty = true;
      }
    }
  }
}
