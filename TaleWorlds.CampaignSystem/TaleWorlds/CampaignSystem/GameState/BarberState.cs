// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.BarberState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class BarberState : TaleWorlds.Core.GameState
  {
    public BasicCharacterObject Character;

    public override bool IsMenuState => true;

    public IFaceGeneratorCustomFilter Filter { get; private set; }

    public BarberState()
    {
    }

    public BarberState(BasicCharacterObject character, IFaceGeneratorCustomFilter filter)
    {
      this.Character = character;
      this.Filter = filter;
    }
  }
}
