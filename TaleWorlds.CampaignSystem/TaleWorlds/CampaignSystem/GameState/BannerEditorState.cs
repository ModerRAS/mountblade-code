// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.BannerEditorState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class BannerEditorState : TaleWorlds.Core.GameState
  {
    private IBannerEditorStateHandler _handler;

    public override bool IsMenuState => true;

    public IBannerEditorStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public Clan GetClan() => Clan.PlayerClan;

    public CharacterObject GetCharacter() => CharacterObject.PlayerCharacter;
  }
}
