// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.SandboxSceneNotificationContextProvider
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.GauntletUI
{
  public class SandboxSceneNotificationContextProvider : ISceneNotificationContextProvider
  {
    public bool IsContextAllowed(
      SceneNotificationData.RelevantContextType relevantType)
    {
      return relevantType != SceneNotificationData.RelevantContextType.Map || GameStateManager.Current.ActiveState is MapState;
    }
  }
}
