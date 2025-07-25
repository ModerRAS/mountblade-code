// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.SettlementNameplatePartyMarkerItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class SettlementNameplatePartyMarkerItemVM : ViewModel
  {
    private ImageIdentifierVM _visual;
    private bool _isCaravan;
    private bool _isLord;
    private bool _isDefault;

    public MobileParty Party { get; private set; }

    public int SortIndex { get; private set; }

    public SettlementNameplatePartyMarkerItemVM(MobileParty mobileParty)
    {
      this.Party = mobileParty;
      if (mobileParty.IsCaravan)
      {
        this.IsCaravan = true;
        this.SortIndex = 1;
      }
      else if (mobileParty.IsLordParty && mobileParty.LeaderHero != null)
      {
        this.IsLord = true;
        this.Visual = new ImageIdentifierVM(BannerCode.CreateFrom(mobileParty.ActualClan?.Banner), true);
        this.SortIndex = 0;
      }
      else
      {
        this.IsDefault = true;
        this.SortIndex = 2;
      }
    }

    public ImageIdentifierVM Visual
    {
      get => this._visual;
      set
      {
        if (value == this._visual)
          return;
        this._visual = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (Visual));
      }
    }

    public bool IsCaravan
    {
      get => this._isCaravan;
      set
      {
        if (value == this._isCaravan)
          return;
        this._isCaravan = value;
        this.OnPropertyChangedWithValue(value, nameof (IsCaravan));
      }
    }

    public bool IsLord
    {
      get => this._isLord;
      set
      {
        if (value == this._isLord)
          return;
        this._isLord = value;
        this.OnPropertyChangedWithValue(value, nameof (IsLord));
      }
    }

    public bool IsDefault
    {
      get => this._isDefault;
      set
      {
        if (value == this._isDefault)
          return;
        this._isDefault = value;
        this.OnPropertyChangedWithValue(value, nameof (IsDefault));
      }
    }
  }
}
