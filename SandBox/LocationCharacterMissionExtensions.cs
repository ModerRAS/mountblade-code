// Decompiled with JetBrains decompiler
// Type: SandBox.LocationCharacterMissionExtensions
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public static class LocationCharacterMissionExtensions
  {
    public static AgentBuildData GetAgentBuildData(this LocationCharacter locationCharacter)
    {
      return new AgentBuildData(locationCharacter.AgentData);
    }
  }
}
