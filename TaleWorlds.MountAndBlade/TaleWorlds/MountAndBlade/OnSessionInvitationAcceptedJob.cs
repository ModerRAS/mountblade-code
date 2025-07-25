// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.OnSessionInvitationAcceptedJob
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.PlatformService;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  internal class OnSessionInvitationAcceptedJob : Job
  {
    private readonly SessionInvitationType _sessionInvitationType;

    public OnSessionInvitationAcceptedJob(SessionInvitationType sessionInvitationType)
    {
      this._sessionInvitationType = sessionInvitationType;
    }

    public override void DoJob(float dt)
    {
      base.DoJob(dt);
      if (MBGameManager.Current != null)
        MBGameManager.Current.OnSessionInvitationAccepted(this._sessionInvitationType);
      else if (GameStateManager.Current != null && GameStateManager.Current.ActiveState != null)
        GameStateManager.Current.CleanStates();
      this.Finished = true;
    }
  }
}
