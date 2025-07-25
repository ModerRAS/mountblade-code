// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Network.Gameplay.Perks.Conditions.BannerBearerCondition
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using System.Xml;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.Network.Gameplay.Perks.Conditions
{
  public class BannerBearerCondition : MPPerkCondition
  {
    protected static string StringType = "BannerBearer";

    public override MPPerkCondition.PerkEventFlags EventFlags
    {
      get
      {
        return MPPerkCondition.PerkEventFlags.AliveBotCountChange | MPPerkCondition.PerkEventFlags.BannerPickUp | MPPerkCondition.PerkEventFlags.BannerDrop | MPPerkCondition.PerkEventFlags.SpawnEnd;
      }
    }

    public override bool IsPeerCondition => true;

    protected BannerBearerCondition()
    {
    }

    protected override void Deserialize(XmlNode node)
    {
    }

    public override bool Check(MissionPeer peer)
    {
      Formation controlledFormation = peer?.ControlledFormation;
      if (controlledFormation != null && MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() > 0)
      {
        foreach (IFormationUnit allUnit in (List<IFormationUnit>) controlledFormation.Arrangement.GetAllUnits())
        {
          if (allUnit is Agent agent && agent.IsActive())
          {
            MissionWeapon missionWeapon = agent.Equipment[EquipmentIndex.ExtraWeaponSlot];
            if (!missionWeapon.IsEmpty && missionWeapon.Item.ItemType == ItemObject.ItemTypeEnum.Banner && new Banner(controlledFormation.BannerCode, peer.Team.Color, peer.Team.Color2).Serialize() == missionWeapon.Banner.Serialize())
              return true;
          }
        }
      }
      return false;
    }

    public override bool Check(Agent agent)
    {
      agent = agent == null || !agent.IsMount ? agent : agent.RiderAgent;
      return this.Check(agent?.MissionPeer ?? agent?.OwningAgentMissionPeer);
    }
  }
}
