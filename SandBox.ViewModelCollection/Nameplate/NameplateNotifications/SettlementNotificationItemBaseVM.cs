// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationItemBaseVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications
{
  public class SettlementNotificationItemBaseVM : ViewModel
  {
    private readonly Action<SettlementNotificationItemBaseVM> _onRemove;
    private ImageIdentifierVM _characterVisual;
    private string _text;
    private string _characterName;
    private int _relationType;

    public int CreatedTick { get; set; }

    public SettlementNotificationItemBaseVM(
      Action<SettlementNotificationItemBaseVM> onRemove,
      int createdTick)
    {
      this._onRemove = onRemove;
      this.RelationType = 0;
      this.CreatedTick = createdTick;
    }

    public void ExecuteRemove() => this._onRemove(this);

    public string CharacterName
    {
      get => this._characterName;
      set
      {
        if (!(value != this._characterName))
          return;
        this._characterName = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CharacterName));
      }
    }

    public int RelationType
    {
      get => this._relationType;
      set
      {
        if (value == this._relationType)
          return;
        this._relationType = value;
        this.OnPropertyChangedWithValue(value, nameof (RelationType));
      }
    }

    public string Text
    {
      get => this._text;
      set
      {
        if (!(value != this._text))
          return;
        this._text = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Text));
      }
    }

    public ImageIdentifierVM CharacterVisual
    {
      get => this._characterVisual;
      set
      {
        if (value == this._characterVisual)
          return;
        this._characterVisual = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (CharacterVisual));
      }
    }
  }
}
