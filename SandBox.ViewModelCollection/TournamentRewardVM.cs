// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.TournamentRewardVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection
{
  public class TournamentRewardVM : ViewModel
  {
    private string _text;
    private ImageIdentifierVM _imageIdentifier;
    private bool _gotImageIdentifier;

    public TournamentRewardVM(string text)
    {
      this.Text = text;
      this.GotImageIdentifier = false;
      this.ImageIdentifier = new ImageIdentifierVM(ImageIdentifierType.Null);
    }

    public TournamentRewardVM(string text, ImageIdentifierVM imageIdentifierVM)
    {
      this.Text = text;
      this.GotImageIdentifier = true;
      this.ImageIdentifier = imageIdentifierVM;
    }

    [DataSourceProperty]
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

    [DataSourceProperty]
    public bool GotImageIdentifier
    {
      get => this._gotImageIdentifier;
      set
      {
        if (value == this._gotImageIdentifier)
          return;
        this._gotImageIdentifier = value;
        this.OnPropertyChangedWithValue(value, nameof (GotImageIdentifier));
      }
    }

    [DataSourceProperty]
    public ImageIdentifierVM ImageIdentifier
    {
      get => this._imageIdentifier;
      set
      {
        if (value == this._imageIdentifier)
          return;
        this._imageIdentifier = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (ImageIdentifier));
      }
    }
  }
}
