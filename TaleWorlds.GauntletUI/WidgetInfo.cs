// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.WidgetInfo
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class WidgetInfo
  {
    private static Dictionary<Type, WidgetInfo> _widgetInfos;

    public string Name { get; private set; }

    public Type Type { get; private set; }

    public bool GotCustomUpdate { get; private set; }

    public bool GotCustomLateUpdate { get; private set; }

    public bool GotCustomParallelUpdate { get; private set; }

    public bool GotUpdateBrushes { get; private set; }

    static WidgetInfo() => WidgetInfo.Reload();

    public static void Reload()
    {
      WidgetInfo._widgetInfos = new Dictionary<Type, WidgetInfo>();
      foreach (Type collectWidgetType in WidgetInfo.CollectWidgetTypes())
        WidgetInfo._widgetInfos.Add(collectWidgetType, new WidgetInfo(collectWidgetType));
      TextureWidget.RecollectProviderTypes();
    }

    public static WidgetInfo GetWidgetInfo(Type type) => WidgetInfo._widgetInfos[type];

    public WidgetInfo(Type type)
    {
      this.Name = type.Name;
      this.Type = type;
      this.GotCustomUpdate = this.IsMethodOverridden("OnUpdate");
      this.GotCustomLateUpdate = this.IsMethodOverridden("OnLateUpdate");
      this.GotCustomParallelUpdate = this.IsMethodOverridden("OnParallelUpdate");
      this.GotUpdateBrushes = this.IsMethodOverridden("UpdateBrushes");
    }

    private static bool CheckAssemblyReferencesThis(Assembly assembly)
    {
      Assembly assembly1 = typeof (Widget).Assembly;
      foreach (AssemblyName referencedAssembly in assembly.GetReferencedAssemblies())
      {
        if (referencedAssembly.Name == assembly1.GetName().Name)
          return true;
      }
      return false;
    }

    public static List<Type> CollectWidgetTypes()
    {
      List<Type> typeList = new List<Type>();
      Assembly assembly1 = typeof (Widget).Assembly;
      foreach (Assembly assembly2 in AppDomain.CurrentDomain.GetAssemblies())
      {
        if (WidgetInfo.CheckAssemblyReferencesThis(assembly2) || assembly2 == assembly1)
        {
          foreach (Type c in assembly2.GetTypesSafe())
          {
            if (typeof (Widget).IsAssignableFrom(c))
              typeList.Add(c);
          }
        }
      }
      return typeList;
    }

    private bool IsMethodOverridden(string methodName)
    {
      MethodInfo method = this.Type.GetMethod(methodName, BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
      bool flag;
      if (method == (MethodInfo) null)
      {
        flag = false;
      }
      else
      {
        Type type1 = this.Type;
        for (Type type2 = this.Type; type2 != (Type) null; type2 = type2.BaseType)
        {
          if (type2.GetMethod(methodName, BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic) != (MethodInfo) null)
            type1 = type2;
        }
        flag = method.DeclaringType != type1;
      }
      return flag;
    }
  }
}
