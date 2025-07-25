// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DuelZoneLandmark
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DuelZoneLandmark : ScriptComponentBehavior, IFocusable
  {
    public TroopType ZoneTroopType;

    public FocusableObjectType FocusableObjectType => FocusableObjectType.None;

    public void OnFocusGain(Agent userAgent)
    {
    }

    public void OnFocusLose(Agent userAgent)
    {
    }

    public TextObject GetInfoTextForBeingNotInteractable(Agent userAgent) => TextObject.Empty;

    public string GetDescriptionText(GameEntity gameEntity = null) => string.Empty;
  }
}
