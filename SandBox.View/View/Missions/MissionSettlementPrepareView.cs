// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionSettlementPrepareView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  [DefaultView]
  public class MissionSettlementPrepareView : MissionView
  {
    public override void AfterStart()
    {
      base.AfterStart();
      this.SetOwnerBanner();
    }

    private void SetOwnerBanner()
    {
      Campaign current = Campaign.Current;
      if ((current != null ? (current.GameMode == CampaignGameMode.Campaign ? 1 : 0) : 0) == 0 || Settlement.CurrentSettlement?.OwnerClan?.Banner == null || !((NativeObject) this.Mission.Scene != (NativeObject) null))
        return;
      bool flag = false;
      foreach (GameEntity gameEntity in this.Mission.Scene.FindEntitiesWithTag("bd_banner_b"))
      {
        Settlement.CurrentSettlement.OwnerClan.Banner.GetTableauTextureLarge((Action<Texture>) (tex =>
        {
          Material material = Mesh.GetFromResource("bd_banner_b").GetMaterial();
          uint materialShaderFlagMask = (uint) material.GetShader().GetMaterialShaderFlagMask("use_tableau_blending");
          material.SetShaderFlags(material.GetShaderFlags() | (ulong) materialShaderFlagMask);
          material.SetTexture(Material.MBTextureType.DiffuseMap2, tex);
        }));
        flag = true;
      }
      if (!flag)
        return;
      this.Mission.Scene.SetClothSimulationState(false);
    }
  }
}
