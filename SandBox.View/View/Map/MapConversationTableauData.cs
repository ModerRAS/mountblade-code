// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapConversationTableauData
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.View.Map
{
  public class MapConversationTableauData
  {
    public ConversationCharacterData PlayerCharacterData { get; private set; }

    public ConversationCharacterData ConversationPartnerData { get; private set; }

    public TerrainType ConversationTerrainType { get; private set; }

    public bool IsCurrentTerrainUnderSnow { get; private set; }

    public bool IsInside { get; private set; }

    public bool IsSnowing { get; private set; }

    public bool IsRaining { get; private set; }

    public float TimeOfDay { get; private set; }

    public Settlement Settlement { get; private set; }

    private MapConversationTableauData()
    {
    }

    public static MapConversationTableauData CreateFrom(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData,
      TerrainType terrainType,
      float timeOfDay,
      bool isCurrentTerrainUnderSnow,
      Settlement settlement,
      bool isInside,
      bool isRaining,
      bool isSnowing)
    {
      return new MapConversationTableauData()
      {
        PlayerCharacterData = playerCharacterData,
        ConversationPartnerData = conversationPartnerData,
        ConversationTerrainType = terrainType,
        TimeOfDay = timeOfDay,
        IsCurrentTerrainUnderSnow = isCurrentTerrainUnderSnow,
        Settlement = settlement,
        IsInside = isInside,
        IsRaining = isRaining,
        IsSnowing = isSnowing
      };
    }
  }
}
