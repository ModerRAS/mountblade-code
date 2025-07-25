// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MBExtensions
  {
    private static Vec2 GetGlobalOrganicDirectionAux(
      ColumnFormation columnFormation,
      int depthCount = -1)
    {
      IEnumerable<Agent> unitsAtVanguardFile = columnFormation.GetUnitsAtVanguardFile<Agent>();
      Vec2 zero = Vec2.Zero;
      int num = 0;
      Agent agent1 = (Agent) null;
      foreach (Agent agent2 in unitsAtVanguardFile)
      {
        if (agent1 != null)
        {
          Vec2 vec2 = (agent1.Position - agent2.Position).AsVec2.Normalized();
          zero += vec2;
          ++num;
        }
        agent1 = agent2;
        if (depthCount > 0)
        {
          if (num >= depthCount)
            break;
        }
      }
      return num == 0 ? Vec2.Invalid : zero * (1f / (float) num);
    }

    public static Vec2 GetGlobalOrganicDirection(this ColumnFormation columnFormation)
    {
      return MBExtensions.GetGlobalOrganicDirectionAux(columnFormation);
    }

    public static Vec2 GetGlobalHeadDirection(this ColumnFormation columnFormation)
    {
      return MBExtensions.GetGlobalOrganicDirectionAux(columnFormation, 3);
    }

    public static IEnumerable<T> FindAllWithType<T>(this IEnumerable<GameEntity> entities) where T : ScriptComponentBehavior
    {
      return entities.SelectMany<GameEntity, T>((Func<GameEntity, IEnumerable<T>>) (e => e.GetScriptComponents<T>()));
    }

    public static IEnumerable<T> FindAllWithType<T>(this IEnumerable<MissionObject> missionObjects) where T : MissionObject
    {
      return missionObjects.Where<MissionObject>((Func<MissionObject, bool>) (e => e != null && e is T)).Select<MissionObject, T>((Func<MissionObject, T>) (e => e as T));
    }

    public static List<GameEntity> FindAllWithCompatibleType(
      this IEnumerable<GameEntity> sceneProps,
      params System.Type[] types)
    {
      List<GameEntity> withCompatibleType = new List<GameEntity>();
      foreach (GameEntity sceneProp in sceneProps)
      {
        foreach (object scriptComponent in sceneProp.GetScriptComponents())
        {
          System.Type type1 = scriptComponent.GetType();
          foreach (System.Type type2 in types)
          {
            if (type2.IsAssignableFrom(type1))
              withCompatibleType.Add(sceneProp);
          }
        }
      }
      return withCompatibleType;
    }

    public static List<MissionObject> FindAllWithCompatibleType(
      this IEnumerable<MissionObject> missionObjects,
      params System.Type[] types)
    {
      List<MissionObject> withCompatibleType = new List<MissionObject>();
      foreach (MissionObject missionObject in missionObjects)
      {
        if (missionObject != null)
        {
          System.Type type1 = missionObject.GetType();
          foreach (System.Type type2 in types)
          {
            if (type2.IsAssignableFrom(type1))
              withCompatibleType.Add(missionObject);
          }
        }
      }
      return withCompatibleType;
    }

    private static void CollectObjectsAux<T>(GameEntity entity, MBList<T> list) where T : ScriptComponentBehavior
    {
      IEnumerable<T> scriptComponents = entity.GetScriptComponents<T>();
      list.AddRange(scriptComponents);
      foreach (GameEntity child in entity.GetChildren())
        MBExtensions.CollectObjectsAux<T>(child, list);
    }

    public static MBList<T> CollectObjects<T>(this GameEntity entity) where T : ScriptComponentBehavior
    {
      MBList<T> list = new MBList<T>();
      MBExtensions.CollectObjectsAux<T>(entity, list);
      return list;
    }

    public static List<T> CollectObjectsWithTag<T>(this GameEntity entity, string tag) where T : ScriptComponentBehavior
    {
      List<T> objList = new List<T>();
      foreach (GameEntity child in entity.GetChildren())
      {
        if (child.HasTag(tag))
        {
          IEnumerable<T> scriptComponents = child.GetScriptComponents<T>();
          objList.AddRange(scriptComponents);
        }
        if (child.ChildCount > 0)
          objList.AddRange((IEnumerable<T>) child.CollectObjectsWithTag<T>(tag));
      }
      return objList;
    }

    public static List<GameEntity> CollectChildrenEntitiesWithTag(
      this GameEntity entity,
      string tag)
    {
      List<GameEntity> gameEntityList = new List<GameEntity>();
      foreach (GameEntity child in entity.GetChildren())
      {
        if (child.HasTag(tag))
          gameEntityList.Add(child);
        if (child.ChildCount > 0)
          gameEntityList.AddRange((IEnumerable<GameEntity>) child.CollectChildrenEntitiesWithTag(tag));
      }
      return gameEntityList;
    }

    public static GameEntity GetFirstChildEntityWithTag(this GameEntity entity, string tag)
    {
      foreach (GameEntity child in entity.GetChildren())
      {
        if (child.HasTag(tag))
          return child;
      }
      return (GameEntity) null;
    }

    public static T GetFirstScriptInFamilyDescending<T>(this GameEntity entity) where T : ScriptComponentBehavior
    {
      T firstScriptOfType = entity.GetFirstScriptOfType<T>();
      if ((object) firstScriptOfType != null)
        return firstScriptOfType;
      foreach (GameEntity child in entity.GetChildren())
      {
        T familyDescending = child.GetFirstScriptInFamilyDescending<T>();
        if ((object) familyDescending != null)
          return familyDescending;
      }
      return default (T);
    }

    public static bool HasParentOfType(this GameEntity e, System.Type t)
    {
      do
      {
        e = e.Parent;
        if (e.GetScriptComponents().Any<ScriptComponentBehavior>((Func<ScriptComponentBehavior, bool>) (sc => sc.GetType() == t)))
          return true;
      }
      while ((NativeObject) e != (NativeObject) null);
      return false;
    }

    public static TSource ElementAtOrValue<TSource>(
      this IEnumerable<TSource> source,
      int index,
      TSource value)
    {
      if (source == null)
        throw new ArgumentNullException(nameof (source));
      if (index >= 0)
      {
        if (source is IList<TSource> sourceList)
        {
          if (index < sourceList.Count)
            return sourceList[index];
        }
        else
        {
          foreach (TSource source1 in source)
          {
            if (index == 0)
              return source1;
            --index;
          }
        }
      }
      return value;
    }

    public static bool IsOpponentOf(this BattleSideEnum s, BattleSideEnum side)
    {
      if (s == BattleSideEnum.Attacker && side == BattleSideEnum.Defender)
        return true;
      return s == BattleSideEnum.Defender && side == BattleSideEnum.Attacker;
    }
  }
}
