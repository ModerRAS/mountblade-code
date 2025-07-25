// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.AreaMarkers.CommonAreaMarker
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects.Usables;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace SandBox.Objects.AreaMarkers
{
  public class CommonAreaMarker : AreaMarker
  {
    public string Type = "";

    public List<MatrixFrame> HiddenSpawnFrames { get; private set; }

    public override string Tag => this.GetAlley()?.Tag;

    protected override void OnInit() => this.HiddenSpawnFrames = new List<MatrixFrame>();

    public override List<UsableMachine> GetUsableMachinesInRange(string excludeTag = null)
    {
      List<UsableMachine> usableMachinesInRange = base.GetUsableMachinesInRange();
      for (int index = usableMachinesInRange.Count - 1; index >= 0; --index)
      {
        UsableMachine usableMachine = usableMachinesInRange[index];
        string[] tags = usableMachine.GameEntity.Tags;
        if (usableMachine.GameEntity.HasScriptOfType<Passage>() || !((IEnumerable<string>) tags).Contains<string>("npc_common") && !((IEnumerable<string>) tags).Contains<string>("npc_common_limited") && !((IEnumerable<string>) tags).Contains<string>("sp_guard") && !((IEnumerable<string>) tags).Contains<string>("sp_guard_unarmed") && !((IEnumerable<string>) tags).Contains<string>("sp_notable"))
          usableMachinesInRange.RemoveAt(index);
      }
      List<GameEntity> list = Mission.Current.Scene.FindEntitiesWithTag("sp_common_hidden").ToList<GameEntity>();
      GameEntity gameEntity = (GameEntity) null;
      float num1 = float.MaxValue;
      float num2 = this.AreaRadius * this.AreaRadius;
      for (int index = list.Count - 1; index >= 0; --index)
      {
        float num3 = list[index].GlobalPosition.DistanceSquared(this.GameEntity.GlobalPosition);
        if ((double) num3 < (double) num1)
        {
          gameEntity = list[index];
          num1 = num3;
        }
        if ((double) num3 < (double) num2)
          this.HiddenSpawnFrames.Add(list[index].GetGlobalFrame());
      }
      if (this.HiddenSpawnFrames.IsEmpty<MatrixFrame>() && (NativeObject) gameEntity != (NativeObject) null)
        this.HiddenSpawnFrames.Add(gameEntity.GetGlobalFrame());
      return usableMachinesInRange;
    }

    public Alley GetAlley()
    {
      Alley alley = (Alley) null;
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (settlement != null && settlement?.Alleys != null && this.AreaIndex > 0 && this.AreaIndex <= settlement.Alleys.Count)
        alley = settlement.Alleys[this.AreaIndex - 1];
      return alley;
    }

    public override TextObject GetName() => this.GetAlley()?.Name;
  }
}
