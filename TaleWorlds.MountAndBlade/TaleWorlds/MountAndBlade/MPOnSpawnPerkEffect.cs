// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MPOnSpawnPerkEffect
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Reflection;
using System.Xml;
using TaleWorlds.MountAndBlade.Network.Gameplay.Perks;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MPOnSpawnPerkEffect : MPOnSpawnPerkEffectBase
  {
    protected static Dictionary<string, System.Type> Registered = new Dictionary<string, System.Type>();

    static MPOnSpawnPerkEffect()
    {
      foreach (System.Type type in PerkAssemblyCollection.GetPerkAssemblyTypes().Where<System.Type>((Func<System.Type, bool>) (t => t.IsClass && !t.IsAbstract && t.IsSubclassOf(typeof (MPOnSpawnPerkEffect)))))
      {
        string key = (string) type.GetField("StringType", BindingFlags.Static | BindingFlags.NonPublic)?.GetValue((object) null);
        MPOnSpawnPerkEffect.Registered.Add(key, type);
      }
    }

    public static MPOnSpawnPerkEffect CreateFrom(XmlNode node)
    {
      string key = node?.Attributes?["type"]?.Value;
      MPOnSpawnPerkEffect instance = (MPOnSpawnPerkEffect) Activator.CreateInstance(MPOnSpawnPerkEffect.Registered[key], BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic, (Binder) null, (object[]) null, CultureInfo.InvariantCulture);
      instance.Deserialize(node);
      return instance;
    }
  }
}
