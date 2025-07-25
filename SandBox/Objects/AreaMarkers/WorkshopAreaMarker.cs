// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.AreaMarkers.WorkshopAreaMarker
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Engine;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace SandBox.Objects.AreaMarkers
{
  public class WorkshopAreaMarker : AreaMarker
  {
    public override string Tag => this.GetWorkshop()?.Tag;

    public Workshop GetWorkshop()
    {
      Workshop workshop = (Workshop) null;
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (settlement != null && settlement.IsTown && settlement.Town.Workshops.Length > this.AreaIndex && this.AreaIndex > 0)
        workshop = settlement.Town.Workshops[this.AreaIndex];
      return workshop;
    }

    protected override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      if (!MBEditor.HelpersEnabled() || !this.CheckToggle)
        return;
      float distanceSquared = this.AreaRadius * this.AreaRadius;
      List<GameEntity> entities = new List<GameEntity>();
      this.Scene.GetEntities(ref entities);
      foreach (GameEntity gameEntity in entities)
        gameEntity.HasTag("shop_prop");
      foreach (UsableMachine usableMachine in entities.FindAllWithType<UsableMachine>().Where<UsableMachine>((Func<UsableMachine, bool>) (x => (double) x.GameEntity.GlobalPosition.DistanceSquared(this.GameEntity.GlobalPosition) <= (double) distanceSquared)).ToList<UsableMachine>())
        ;
    }

    public WorkshopType GetWorkshopType() => this.GetWorkshop()?.WorkshopType;

    public override TextObject GetName() => this.GetWorkshop()?.Name;
  }
}
