// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CommunityClient
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library.Http;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CommunityClient
  {
    private IHttpDriver _httpDriver;

    public bool IsInGame { get; private set; }

    public ICommunityClientHandler Handler { get; set; }

    public CommunityClient() => this._httpDriver = HttpDriverManager.GetDefaultHttpDriver();

    public void QuitFromGame()
    {
      if (!this.IsInGame)
        return;
      this.IsInGame = false;
      this.Handler?.OnQuitFromGame();
    }
  }
}
