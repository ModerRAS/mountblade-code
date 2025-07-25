// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerGameTypes
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MultiplayerGameTypes
  {
    private static Dictionary<string, MultiplayerGameTypeInfo> _multiplayerGameTypeInfos;

    public static void Initialize()
    {
      MultiplayerGameTypes.CreateGameTypeInformations();
      MultiplayerGameTypes.LoadMultiplayerSceneInformations();
    }

    public static bool CheckGameTypeInfoExists(string gameType)
    {
      return MultiplayerGameTypes._multiplayerGameTypeInfos.ContainsKey(gameType);
    }

    public static MultiplayerGameTypeInfo GetGameTypeInfo(string gameType)
    {
      if (MultiplayerGameTypes._multiplayerGameTypeInfos.ContainsKey(gameType))
        return MultiplayerGameTypes._multiplayerGameTypeInfos[gameType];
      Debug.Print("Cannot find game type:" + gameType);
      return (MultiplayerGameTypeInfo) null;
    }

    private static void LoadMultiplayerSceneInformations()
    {
      XmlDocument xmlDocument = new XmlDocument();
      xmlDocument.Load(ModuleHelper.GetModuleFullPath("Native") + "ModuleData/Multiplayer/MultiplayerScenes.xml");
      foreach (XmlNode childNode1 in xmlDocument.ChildNodes)
      {
        if (childNode1.NodeType == XmlNodeType.Element && childNode1.Name == "MultiplayerScenes")
        {
          IEnumerator enumerator = childNode1.GetEnumerator();
          try
          {
            while (enumerator.MoveNext())
            {
              XmlNode current = (XmlNode) enumerator.Current;
              if (current.NodeType != XmlNodeType.Comment)
              {
                string innerText1 = current.Attributes["name"].InnerText;
                foreach (XmlNode childNode2 in current.ChildNodes)
                {
                  if (childNode2.NodeType != XmlNodeType.Comment)
                  {
                    string innerText2 = childNode2.Attributes["name"].InnerText;
                    if (MultiplayerGameTypes._multiplayerGameTypeInfos.ContainsKey(innerText2))
                      MultiplayerGameTypes._multiplayerGameTypeInfos[innerText2].Scenes.Add(innerText1);
                  }
                }
              }
            }
            break;
          }
          finally
          {
            if (enumerator is IDisposable disposable)
              disposable.Dispose();
          }
        }
      }
    }

    private static void CreateGameTypeInformations()
    {
      MultiplayerGameTypes._multiplayerGameTypeInfos = new Dictionary<string, MultiplayerGameTypeInfo>();
      foreach (MultiplayerGameTypeInfo multiplayerGameType in (List<MultiplayerGameTypeInfo>) Module.CurrentModule.GetMultiplayerGameTypes())
        MultiplayerGameTypes._multiplayerGameTypeInfos.Add(multiplayerGameType.GameType, multiplayerGameType);
    }
  }
}
