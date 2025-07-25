// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.VisualDefinition
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class VisualDefinition
  {
    public string Name { get; private set; }

    public float TransitionDuration { get; private set; }

    public float DelayOnBegin { get; private set; }

    public bool EaseIn { get; private set; }

    public Dictionary<string, VisualState> VisualStates { get; private set; }

    public VisualDefinition(
      string name,
      float transitionDuration,
      float delayOnBegin,
      bool easeIn)
    {
      this.Name = name;
      this.TransitionDuration = transitionDuration;
      this.DelayOnBegin = delayOnBegin;
      this.EaseIn = easeIn;
      this.VisualStates = new Dictionary<string, VisualState>();
    }

    public void AddVisualState(VisualState visualState)
    {
      this.VisualStates.Add(visualState.State, visualState);
    }

    public VisualState GetVisualState(string state)
    {
      return this.VisualStates.ContainsKey(state) ? this.VisualStates[state] : (VisualState) null;
    }
  }
}
