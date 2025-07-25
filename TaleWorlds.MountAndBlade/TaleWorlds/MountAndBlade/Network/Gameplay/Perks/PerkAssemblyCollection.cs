// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Network.Gameplay.Perks.PerkAssemblyCollection
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Network.Gameplay.Perks
{
  internal static class PerkAssemblyCollection
  {
    public static List<System.Type> GetPerkAssemblyTypes()
    {
      List<System.Type> perkAssemblyTypes = new List<System.Type>();
      Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
      List<Assembly> assemblyList = new List<Assembly>();
      foreach (Assembly assembly in assemblies)
      {
        try
        {
          if (PerkAssemblyCollection.CheckAssemblyForPerks(assembly))
            assemblyList.Add(assembly);
        }
        catch
        {
        }
      }
      foreach (Assembly assembly in assemblyList)
      {
        try
        {
          List<System.Type> typesSafe = assembly.GetTypesSafe();
          perkAssemblyTypes.AddRange((IEnumerable<System.Type>) typesSafe);
        }
        catch
        {
        }
      }
      return perkAssemblyTypes;
    }

    private static bool CheckAssemblyForPerks(Assembly assembly)
    {
      Assembly assembly1 = Assembly.GetAssembly(typeof (MPPerkObject));
      if (assembly == assembly1)
        return true;
      foreach (AssemblyName referencedAssembly in assembly.GetReferencedAssemblies())
      {
        if (referencedAssembly.FullName == assembly1.FullName)
          return true;
      }
      return false;
    }
  }
}
