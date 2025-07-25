// Decompiled with JetBrains decompiler
// Type: SandBox.View.CampaignMusicHandler
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using psai.net;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.View
{
  public class CampaignMusicHandler : IMusicHandler
  {
    private const float MinRestDurationInSeconds = 30f;
    private const float MaxRestDurationInSeconds = 120f;
    private float _restTimer;

    bool IMusicHandler.IsPausable => false;

    private CampaignMusicHandler()
    {
    }

    public static void Create()
    {
      MBMusicManager.Current.OnCampaignMusicHandlerInit((IMusicHandler) new CampaignMusicHandler());
    }

    void IMusicHandler.OnUpdated(float dt)
    {
      this.CheckMusicMode();
      this.TickCampaignMusic(dt);
    }

    private void CheckMusicMode()
    {
      if (MBMusicManager.Current.CurrentMode != MusicMode.Paused)
        return;
      MBMusicManager.Current.ActivateCampaignMode();
    }

    private void TickCampaignMusic(float dt)
    {
      bool flag = PsaiCore.Instance.GetPsaiInfo().psaiState == PsaiState.playing;
      if ((double) this._restTimer <= 0.0)
      {
        this._restTimer += dt;
        if ((double) this._restTimer <= 0.0)
          return;
        MBMusicManager.Current.StartThemeWithConstantIntensity(MBMusicManager.Current.GetCampaignMusicTheme(this.GetNearbyCulture(), (double) this.GetMoodOfMainParty() < (double) MusicParameters.CampaignDarkModeThreshold, this.IsPlayerInAnArmy()));
        Debug.Print("Campaign music play started.", color: Debug.DebugColor.Yellow, debugFilter: 64UL);
      }
      else
      {
        if (flag)
          return;
        MBMusicManager.Current.ForceStopThemeWithFadeOut();
        this._restTimer = (float) -(30.0 + (double) MBRandom.RandomFloat * 90.0);
        Debug.Print("Campaign music rest started.", color: Debug.DebugColor.Yellow, debugFilter: 64UL);
      }
    }

    private CultureCode GetNearbyCulture()
    {
      CultureObject cultureObject = (CultureObject) null;
      float num1 = float.MaxValue;
      foreach (Settlement settlement in (List<Settlement>) Campaign.Current.Settlements)
      {
        if (settlement.IsTown || settlement.IsVillage)
        {
          float num2 = settlement.Position2D.DistanceSquared(PartyBase.MainParty.Position2D);
          if (settlement.IsVillage)
            num2 *= 1.05f;
          if ((double) num1 > (double) num2)
          {
            cultureObject = settlement.Culture;
            num1 = num2;
          }
        }
      }
      return cultureObject.GetCultureCode();
    }

    private bool IsPlayerInAnArmy() => MobileParty.MainParty.Army != null;

    private float GetMoodOfMainParty()
    {
      return MathF.Clamp(MobileParty.MainParty.Morale / 100f, 0.0f, 1f);
    }
  }
}
