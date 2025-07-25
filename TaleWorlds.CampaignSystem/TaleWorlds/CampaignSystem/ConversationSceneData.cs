// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ConversationSceneData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public struct ConversationSceneData
  {
    public string SceneID { get; private set; }

    public TerrainType Terrain { get; private set; }

    public List<TerrainType> TerrainTypes { get; private set; }

    public ForestDensity ForestDensity { get; private set; }

    public ConversationSceneData(
      string sceneID,
      TerrainType terrain,
      List<TerrainType> terrainTypes,
      ForestDensity forestDensity)
    {
      this.SceneID = sceneID;
      this.Terrain = terrain;
      this.TerrainTypes = terrainTypes;
      this.ForestDensity = forestDensity;
    }
  }
}
