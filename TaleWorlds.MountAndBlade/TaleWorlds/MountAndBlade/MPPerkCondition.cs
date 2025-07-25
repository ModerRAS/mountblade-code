// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MPPerkCondition
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
  public abstract class MPPerkCondition
  {
    protected static Dictionary<string, System.Type> Registered = new Dictionary<string, System.Type>();

    static MPPerkCondition()
    {
      foreach (System.Type type in PerkAssemblyCollection.GetPerkAssemblyTypes().Where<System.Type>((Func<System.Type, bool>) (t => t.IsClass && !t.IsAbstract && t.IsSubclassOf(typeof (MPPerkCondition)))))
      {
        string key = (string) type.GetField("StringType", BindingFlags.Static | BindingFlags.NonPublic)?.GetValue((object) null);
        MPPerkCondition.Registered.Add(key, type);
      }
    }

    public virtual MPPerkCondition.PerkEventFlags EventFlags => MPPerkCondition.PerkEventFlags.None;

    public virtual bool IsPeerCondition => false;

    public abstract bool Check(MissionPeer peer);

    public abstract bool Check(Agent agent);

    protected virtual bool IsGameModesValid(List<string> gameModes) => true;

    protected abstract void Deserialize(XmlNode node);

    public static MPPerkCondition CreateFrom(List<string> gameModes, XmlNode node)
    {
      string key = node?.Attributes?["type"]?.Value;
      MPPerkCondition instance = (MPPerkCondition) Activator.CreateInstance(MPPerkCondition.Registered[key], BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic, (Binder) null, (object[]) null, CultureInfo.InvariantCulture);
      instance.Deserialize(node);
      return instance;
    }

    [Flags]
    public enum PerkEventFlags
    {
      None = 0,
      MoraleChange = 1,
      FlagCapture = 2,
      FlagRemoval = 4,
      HealthChange = 8,
      AliveBotCountChange = 16, // 0x00000010
      PeerControlledAgentChange = 32, // 0x00000020
      BannerPickUp = 64, // 0x00000040
      BannerDrop = 128, // 0x00000080
      SpawnEnd = 256, // 0x00000100
      MountHealthChange = 512, // 0x00000200
      MountChange = 1024, // 0x00000400
      AgentEventsMask = MountChange | MountHealthChange | PeerControlledAgentChange | HealthChange, // 0x00000628
    }
  }
}
