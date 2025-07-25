// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SingleplayerBattleSceneData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public struct SingleplayerBattleSceneData
  {
    public string SceneID { get; private set; }

    public TerrainType Terrain { get; private set; }

    public List<TerrainType> TerrainTypes { get; private set; }

    public ForestDensity ForestDensity { get; private set; }

    public List<int> MapIndices { get; private set; }

    public SingleplayerBattleSceneData(
      string sceneID,
      TerrainType terrain,
      List<TerrainType> terrainTypes,
      ForestDensity forestDensity,
      List<int> mapIndices)
    {
      this.SceneID = sceneID;
      this.Terrain = terrain;
      this.TerrainTypes = terrainTypes;
      this.ForestDensity = forestDensity;
      this.MapIndices = mapIndices;
    }
  }
}
