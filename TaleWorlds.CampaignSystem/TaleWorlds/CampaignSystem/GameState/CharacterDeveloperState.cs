// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.CharacterDeveloperState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class CharacterDeveloperState : TaleWorlds.Core.GameState
  {
    private ICharacterDeveloperStateHandler _handler;

    public override bool IsMenuState => true;

    public Hero InitialSelectedHero { get; private set; }

    public CharacterDeveloperState()
    {
    }

    public CharacterDeveloperState(Hero initialSelectedHero)
    {
      this.InitialSelectedHero = initialSelectedHero;
    }

    public ICharacterDeveloperStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }
  }
}
