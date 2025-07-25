// Decompiled with JetBrains decompiler
// Type: SandBox.View.SandBoxViewCreator
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.View.Map;
using SandBox.View.Menu;
using SandBox.View.Missions;
using SandBox.View.Missions.Tournaments;
using System;
using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View
{
  public static class SandBoxViewCreator
  {
    private static Dictionary<System.Type, System.Type> _actualViewTypes = new Dictionary<System.Type, System.Type>();

    static SandBoxViewCreator()
    {
      Assembly[] viewAssemblies = SandBoxViewCreator.GetViewAssemblies();
      Assembly assembly1 = typeof (ViewCreatorModule).Assembly;
      foreach (Assembly assembly2 in viewAssemblies)
        SandBoxViewCreator.CheckOverridenViews(assembly2);
    }

    private static void CheckOverridenViews(Assembly assembly)
    {
      foreach (System.Type type in assembly.GetTypesSafe())
      {
        if (typeof (MapView).IsAssignableFrom(type) || typeof (MenuView).IsAssignableFrom(type) || typeof (MissionView).IsAssignableFrom(type) || typeof (ScreenBase).IsAssignableFrom(type))
        {
          object[] customAttributesSafe = type.GetCustomAttributesSafe(typeof (OverrideView), false);
          if (customAttributesSafe != null && customAttributesSafe.Length == 1 && customAttributesSafe[0] is OverrideView overrideView)
          {
            if (!SandBoxViewCreator._actualViewTypes.ContainsKey(overrideView.BaseType))
              SandBoxViewCreator._actualViewTypes.Add(overrideView.BaseType, type);
            else
              SandBoxViewCreator._actualViewTypes[overrideView.BaseType] = type;
          }
        }
      }
    }

    private static Assembly[] GetViewAssemblies()
    {
      List<Assembly> assemblyList = new List<Assembly>();
      Assembly assembly1 = typeof (ViewCreatorModule).Assembly;
      foreach (Assembly assembly2 in AppDomain.CurrentDomain.GetAssemblies())
      {
        foreach (object referencedAssembly in assembly2.GetReferencedAssemblies())
        {
          if (referencedAssembly.ToString() == assembly1.GetName().ToString())
          {
            assemblyList.Add(assembly2);
            break;
          }
        }
      }
      return assemblyList.ToArray();
    }

    public static ScreenBase CreateSaveLoadScreen(bool isSaving)
    {
      return ViewCreatorManager.CreateScreenView<SaveLoadScreen>((object) isSaving);
    }

    public static MissionView CreateMissionCraftingView() => (MissionView) null;

    public static MissionView CreateMissionNameMarkerUIHandler(Mission mission = null)
    {
      return ViewCreatorManager.CreateMissionView<MissionNameMarkerUIHandler>(mission != null, mission);
    }

    public static MissionView CreateMissionConversationView(Mission mission)
    {
      return ViewCreatorManager.CreateMissionView<MissionConversationView>(true, mission);
    }

    public static MissionView CreateMissionBarterView()
    {
      return ViewCreatorManager.CreateMissionView<BarterView>(false, (Mission) null);
    }

    public static MissionView CreateMissionTournamentView()
    {
      return ViewCreatorManager.CreateMissionView<MissionTournamentView>(false, (Mission) null);
    }

    public static MapView CreateMapView<T>(params object[] parameters) where T : MapView
    {
      System.Type type = typeof (T);
      if (SandBoxViewCreator._actualViewTypes.ContainsKey(typeof (T)))
        type = SandBoxViewCreator._actualViewTypes[typeof (T)];
      return Activator.CreateInstance(type, parameters) as MapView;
    }

    public static MenuView CreateMenuView<T>(params object[] parameters) where T : MenuView
    {
      System.Type type = typeof (T);
      if (SandBoxViewCreator._actualViewTypes.ContainsKey(typeof (T)))
        type = SandBoxViewCreator._actualViewTypes[typeof (T)];
      return Activator.CreateInstance(type, parameters) as MenuView;
    }

    public static MissionView CreateBoardGameView()
    {
      return ViewCreatorManager.CreateMissionView<BoardGameView>(false, (Mission) null);
    }

    public static MissionView CreateMissionAmbushDeploymentView()
    {
      return ViewCreatorManager.CreateMissionView<MissionAmbushDeploymentView>(false, (Mission) null);
    }

    public static MissionView CreateMissionArenaPracticeFightView()
    {
      return ViewCreatorManager.CreateMissionView<MissionArenaPracticeFightView>(false, (Mission) null);
    }
  }
}
