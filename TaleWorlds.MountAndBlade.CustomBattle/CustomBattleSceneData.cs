using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x02000011 RID: 17
	public struct CustomBattleSceneData
	{
		// Token: 0x1700003B RID: 59
		// (get) Token: 0x060000E9 RID: 233 RVA: 0x000081EA File Offset: 0x000063EA
		// (set) Token: 0x060000EA RID: 234 RVA: 0x000081F2 File Offset: 0x000063F2
		public string SceneID { get; private set; }

		// Token: 0x1700003C RID: 60
		// (get) Token: 0x060000EB RID: 235 RVA: 0x000081FB File Offset: 0x000063FB
		// (set) Token: 0x060000EC RID: 236 RVA: 0x00008203 File Offset: 0x00006403
		public TextObject Name { get; private set; }

		// Token: 0x1700003D RID: 61
		// (get) Token: 0x060000ED RID: 237 RVA: 0x0000820C File Offset: 0x0000640C
		// (set) Token: 0x060000EE RID: 238 RVA: 0x00008214 File Offset: 0x00006414
		public TerrainType Terrain { get; private set; }

		// Token: 0x1700003E RID: 62
		// (get) Token: 0x060000EF RID: 239 RVA: 0x0000821D File Offset: 0x0000641D
		// (set) Token: 0x060000F0 RID: 240 RVA: 0x00008225 File Offset: 0x00006425
		public List<TerrainType> TerrainTypes { get; private set; }

		// Token: 0x1700003F RID: 63
		// (get) Token: 0x060000F1 RID: 241 RVA: 0x0000822E File Offset: 0x0000642E
		// (set) Token: 0x060000F2 RID: 242 RVA: 0x00008236 File Offset: 0x00006436
		public ForestDensity ForestDensity { get; private set; }

		// Token: 0x17000040 RID: 64
		// (get) Token: 0x060000F3 RID: 243 RVA: 0x0000823F File Offset: 0x0000643F
		// (set) Token: 0x060000F4 RID: 244 RVA: 0x00008247 File Offset: 0x00006447
		public bool IsSiegeMap { get; private set; }

		// Token: 0x17000041 RID: 65
		// (get) Token: 0x060000F5 RID: 245 RVA: 0x00008250 File Offset: 0x00006450
		// (set) Token: 0x060000F6 RID: 246 RVA: 0x00008258 File Offset: 0x00006458
		public bool IsVillageMap { get; private set; }

		// Token: 0x17000042 RID: 66
		// (get) Token: 0x060000F7 RID: 247 RVA: 0x00008261 File Offset: 0x00006461
		// (set) Token: 0x060000F8 RID: 248 RVA: 0x00008269 File Offset: 0x00006469
		public bool IsLordsHallMap { get; private set; }

		// Token: 0x060000F9 RID: 249 RVA: 0x00008272 File Offset: 0x00006472
		public CustomBattleSceneData(string sceneID, TextObject name, TerrainType terrain, List<TerrainType> terrainTypes, ForestDensity forestDensity, bool isSiegeMap, bool isVillageMap, bool isLordsHallMap)
		{
			this.SceneID = sceneID;
			this.Name = name;
			this.Terrain = terrain;
			this.TerrainTypes = terrainTypes;
			this.ForestDensity = forestDensity;
			this.IsSiegeMap = isSiegeMap;
			this.IsVillageMap = isVillageMap;
			this.IsLordsHallMap = isLordsHallMap;
		}
	}
}
