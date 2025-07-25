// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.SandBox.SpawnPointUnits
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

#nullable disable
namespace SandBox.View.Missions.SandBox
{
  public class SpawnPointUnits
  {
    public int CurrentCount;
    public int SpawnedAgentCount;

    public string SpName { get; private set; }

    public SpawnPointUnits.SceneType Place { get; private set; }

    public int MinCount { get; private set; }

    public int MaxCount { get; private set; }

    public string Type { get; private set; }

    public SpawnPointUnits(
      string sp_name,
      SpawnPointUnits.SceneType place,
      int minCount,
      int maxCount)
    {
      this.SpName = sp_name;
      this.Place = place;
      this.MinCount = minCount;
      this.MaxCount = maxCount;
      this.CurrentCount = 0;
      this.SpawnedAgentCount = 0;
      this.Type = "other";
    }

    public SpawnPointUnits(
      string sp_name,
      SpawnPointUnits.SceneType place,
      string type,
      int minCount,
      int maxCount)
    {
      this.SpName = sp_name;
      this.Place = place;
      this.Type = type;
      this.MinCount = minCount;
      this.MaxCount = maxCount;
      this.CurrentCount = 0;
      this.SpawnedAgentCount = 0;
    }

    public enum SceneType
    {
      Center,
      Tavern,
      VillageCenter,
      Arena,
      LordsHall,
      Castle,
      Dungeon,
      EmptyShop,
      All,
      NotDetermined,
    }
  }
}
