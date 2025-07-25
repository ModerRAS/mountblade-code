// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MPPerkSelectionManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Xml;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.PlayerServices;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MPPerkSelectionManager
  {
    private static MPPerkSelectionManager _instance;
    public Action OnAfterResetPendingChanges;
    private Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>> _selections;
    private Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>> _pendingChanges;
    private PlatformFilePath _xmlPath;
    private PlayerId _playerIdOfSelectionsOwner;

    public static MPPerkSelectionManager Instance
    {
      get
      {
        return MPPerkSelectionManager._instance ?? (MPPerkSelectionManager._instance = new MPPerkSelectionManager());
      }
    }

    public static void FreeInstance()
    {
      if (MPPerkSelectionManager._instance == null)
        return;
      MPPerkSelectionManager._instance._selections?.Clear();
      MPPerkSelectionManager._instance._pendingChanges?.Clear();
      MPPerkSelectionManager._instance = (MPPerkSelectionManager) null;
    }

    public void InitializeForUser(string username, PlayerId playerId)
    {
      if (!(this._playerIdOfSelectionsOwner != playerId))
        return;
      this._selections?.Clear();
      this._playerIdOfSelectionsOwner = playerId;
      this._xmlPath = new PlatformFilePath(EngineFilePaths.ConfigsPath, "MPDefaultPerks_" + (object) playerId + ".xml");
      try
      {
        PlatformFilePath platformFilePath = new PlatformFilePath(EngineFilePaths.ConfigsPath, "MPDefaultPerks_" + username + ".xml");
        if (FileHelper.FileExists(platformFilePath))
        {
          FileHelper.CopyFile(platformFilePath, this._xmlPath);
          FileHelper.DeleteFile(platformFilePath);
        }
      }
      catch (Exception ex)
      {
      }
      this._selections = this.LoadSelectionsForUserFromXML() ?? new Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>();
    }

    public void ResetPendingChanges()
    {
      this._pendingChanges?.Clear();
      Action resetPendingChanges = this.OnAfterResetPendingChanges;
      if (resetPendingChanges == null)
        return;
      resetPendingChanges();
    }

    public void TryToApplyAndSavePendingChanges()
    {
      if (this._pendingChanges == null)
        return;
      foreach (KeyValuePair<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>> pendingChange in this._pendingChanges)
      {
        if (this._selections.ContainsKey(pendingChange.Key))
          this._selections.Remove(pendingChange.Key);
        this._selections.Add(pendingChange.Key, pendingChange.Value);
      }
      this._pendingChanges.Clear();
      List<KeyValuePair<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>> selections = new List<KeyValuePair<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>>();
      foreach (KeyValuePair<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>> selection in this._selections)
        selections.Add(new KeyValuePair<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>(selection.Key, selection.Value));
      ((ITask) AsyncTask.CreateWithDelegate(new ManagedDelegate()
      {
        Instance = (ManagedDelegate.DelegateDefinition) (() =>
        {
          lock (MPPerkSelectionManager.Instance)
            this.SaveAsXML(selections);
        })
      }, true)).Invoke();
    }

    public List<MPPerkSelectionManager.MPPerkSelection> GetSelectionsForHeroClass(
      MultiplayerClassDivisions.MPHeroClass currentHeroClass)
    {
      List<MPPerkSelectionManager.MPPerkSelection> selectionsForHeroClass = new List<MPPerkSelectionManager.MPPerkSelection>();
      if ((this._pendingChanges == null ? 0 : (this._pendingChanges.TryGetValue(currentHeroClass, out selectionsForHeroClass) ? 1 : 0)) == 0 && this._selections != null)
        this._selections.TryGetValue(currentHeroClass, out selectionsForHeroClass);
      return selectionsForHeroClass;
    }

    public void SetSelectionsForHeroClassTemporarily(
      MultiplayerClassDivisions.MPHeroClass currentHeroClass,
      List<MPPerkSelectionManager.MPPerkSelection> perkChoices)
    {
      if (this._pendingChanges == null)
        this._pendingChanges = new Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>();
      List<MPPerkSelectionManager.MPPerkSelection> mpPerkSelectionList;
      if (!this._pendingChanges.TryGetValue(currentHeroClass, out mpPerkSelectionList))
      {
        mpPerkSelectionList = new List<MPPerkSelectionManager.MPPerkSelection>();
        this._pendingChanges.Add(currentHeroClass, mpPerkSelectionList);
      }
      else
        mpPerkSelectionList.Clear();
      int count = perkChoices.Count;
      for (int index = 0; index < count; ++index)
        mpPerkSelectionList.Add(perkChoices[index]);
    }

    private Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>> LoadSelectionsForUserFromXML()
    {
      Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>> dictionary = (Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>) null;
      lock (MPPerkSelectionManager.Instance)
      {
        bool flag = FileHelper.FileExists(this._xmlPath);
        if (flag)
        {
          dictionary = new Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>();
          try
          {
            MBReadOnlyList<MultiplayerClassDivisions.MPHeroClass> mpHeroClasses = MultiplayerClassDivisions.GetMPHeroClasses();
            int count = mpHeroClasses.Count;
            XmlDocument document = new XmlDocument();
            document.Load(this._xmlPath);
            foreach (XmlNode childNode1 in document.DocumentElement.ChildNodes)
            {
              XmlAttribute attribute1 = childNode1.Attributes["id"];
              MultiplayerClassDivisions.MPHeroClass key = (MultiplayerClassDivisions.MPHeroClass) null;
              string str = attribute1.Value;
              for (int index = 0; index < count; ++index)
              {
                if (mpHeroClasses[index].StringId == str)
                {
                  key = mpHeroClasses[index];
                  break;
                }
              }
              if (key != null)
              {
                List<MPPerkSelectionManager.MPPerkSelection> mpPerkSelectionList = new List<MPPerkSelectionManager.MPPerkSelection>(2);
                foreach (XmlNode childNode2 in childNode1.ChildNodes)
                {
                  XmlAttribute attribute2 = childNode2.Attributes["index"];
                  XmlAttribute attribute3 = childNode2.Attributes["listIndex"];
                  if (attribute2 != null && attribute3 != null)
                  {
                    int int32_1 = Convert.ToInt32(attribute2.Value);
                    int int32_2 = Convert.ToInt32(attribute3.Value);
                    mpPerkSelectionList.Add(new MPPerkSelectionManager.MPPerkSelection(int32_1, int32_2));
                  }
                  else
                    flag = false;
                }
                dictionary.Add(key, mpPerkSelectionList);
              }
              else
                flag = false;
            }
          }
          catch
          {
            flag = false;
          }
        }
        if (!flag)
          dictionary = (Dictionary<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>) null;
      }
      return dictionary;
    }

    private bool SaveAsXML(
      List<KeyValuePair<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>>> selections)
    {
      bool flag = true;
      try
      {
        XmlDocument document = new XmlDocument();
        document.InsertBefore((XmlNode) document.CreateXmlDeclaration("1.0", "UTF-8", (string) null), (XmlNode) document.DocumentElement);
        XmlElement element1 = document.CreateElement("HeroClasses");
        document.AppendChild((XmlNode) element1);
        foreach (KeyValuePair<MultiplayerClassDivisions.MPHeroClass, List<MPPerkSelectionManager.MPPerkSelection>> selection in selections)
        {
          MultiplayerClassDivisions.MPHeroClass key = selection.Key;
          List<MPPerkSelectionManager.MPPerkSelection> mpPerkSelectionList = selection.Value;
          XmlElement element2 = document.CreateElement("HeroClass");
          element2.SetAttribute("id", key.StringId);
          element1.AppendChild((XmlNode) element2);
          foreach (MPPerkSelectionManager.MPPerkSelection mpPerkSelection in mpPerkSelectionList)
          {
            XmlElement element3 = document.CreateElement("PerkSelection");
            element3.SetAttribute("index", mpPerkSelection.Index.ToString());
            element3.SetAttribute("listIndex", mpPerkSelection.ListIndex.ToString());
            element2.AppendChild((XmlNode) element3);
          }
        }
        document.Save(this._xmlPath);
      }
      catch
      {
        flag = false;
      }
      return flag;
    }

    public struct MPPerkSelection
    {
      public readonly int Index;
      public readonly int ListIndex;

      public MPPerkSelection(int index, int listIndex)
      {
        this.Index = index;
        this.ListIndex = listIndex;
      }
    }
  }
}
