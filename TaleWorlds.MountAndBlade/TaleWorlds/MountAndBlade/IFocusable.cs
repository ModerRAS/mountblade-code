// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IFocusable
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IFocusable
  {
    void OnFocusGain(Agent userAgent);

    void OnFocusLose(Agent userAgent);

    FocusableObjectType FocusableObjectType { get; }

    TextObject GetInfoTextForBeingNotInteractable(Agent userAgent);

    string GetDescriptionText(GameEntity gameEntity = null);
  }
}
