// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.EducationState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class EducationState : TaleWorlds.Core.GameState
  {
    private IEducationStateHandler _handler;

    public override bool IsMenuState => true;

    public Hero Child { get; private set; }

    public IEducationStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public EducationState()
    {
      Debug.FailedAssert("Do not use EducationState with default constructor!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameState\\EducationState.cs", ".ctor", 22);
    }

    public EducationState(Hero child) => this.Child = child;
  }
}
