// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.MapSiege.MapSiegeProductionMachineVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.MapSiege
{
  public class MapSiegeProductionMachineVM : ViewModel
  {
    private Action<MapSiegeProductionMachineVM> _onSelection;
    private bool _isCancel;
    private int _machineType;
    private int _numberOfMachines;
    private string _machineID;
    private bool _isReserveOption;
    private string _actionText;

    public SiegeEngineType Engine { get; }

    public MapSiegeProductionMachineVM(
      SiegeEngineType engineType,
      int number,
      Action<MapSiegeProductionMachineVM> onSelection)
    {
      this._onSelection = onSelection;
      this.Engine = engineType;
      this.NumberOfMachines = number;
      this.MachineID = engineType.StringId;
      this.IsReserveOption = false;
    }

    public MapSiegeProductionMachineVM(
      Action<MapSiegeProductionMachineVM> onSelection,
      bool isCancel)
    {
      this._onSelection = onSelection;
      this.Engine = (SiegeEngineType) null;
      this.NumberOfMachines = 0;
      this.MachineID = "reserve";
      this.IsReserveOption = true;
      this._isCancel = isCancel;
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.ActionText = this._isCancel ? GameTexts.FindText("str_cancel").ToString() : GameTexts.FindText("str_siege_move_to_reserve").ToString();
    }

    public void OnSelection() => this._onSelection(this);

    public void ExecuteShowTooltip()
    {
      if (this.Engine == null)
        return;
      InformationManager.ShowTooltip(typeof (List<TooltipProperty>), (object) SandBoxUIHelper.GetSiegeEngineTooltip(this.Engine));
    }

    public void ExecuteHideTooltip() => MBInformationManager.HideInformations();

    [DataSourceProperty]
    public int MachineType
    {
      get => this._machineType;
      set
      {
        if (value == this._machineType)
          return;
        this._machineType = value;
        this.OnPropertyChangedWithValue(value, nameof (MachineType));
      }
    }

    [DataSourceProperty]
    public string MachineID
    {
      get => this._machineID;
      set
      {
        if (!(value != this._machineID))
          return;
        this._machineID = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (MachineID));
      }
    }

    [DataSourceProperty]
    public int NumberOfMachines
    {
      get => this._numberOfMachines;
      set
      {
        if (value == this._numberOfMachines)
          return;
        this._numberOfMachines = value;
        this.OnPropertyChangedWithValue(value, nameof (NumberOfMachines));
      }
    }

    [DataSourceProperty]
    public string ActionText
    {
      get => this._actionText;
      set
      {
        if (!(value != this._actionText))
          return;
        this._actionText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ActionText));
      }
    }

    [DataSourceProperty]
    public bool IsReserveOption
    {
      get => this._isReserveOption;
      set
      {
        if (value == this._isReserveOption)
          return;
        this._isReserveOption = value;
        this.OnPropertyChangedWithValue(value, nameof (IsReserveOption));
      }
    }
  }
}
