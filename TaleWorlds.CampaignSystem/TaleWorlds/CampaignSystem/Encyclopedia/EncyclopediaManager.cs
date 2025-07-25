// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.EncyclopediaManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia
{
  public class EncyclopediaManager
  {
    private Dictionary<Type, EncyclopediaPage> _pages;
    public const string HOME_ID = "Home";
    public const string LIST_PAGE_ID = "ListPage";
    public const string LAST_PAGE_ID = "LastPage";
    private Action<string, object> _executeLink;

    public IViewDataTracker ViewDataTracker { get; private set; }

    public void CreateEncyclopediaPages()
    {
      this._pages = new Dictionary<Type, EncyclopediaPage>();
      this.ViewDataTracker = Campaign.Current.GetCampaignBehavior<IViewDataTracker>();
      List<Type> typeList = new List<Type>();
      List<Assembly> assemblyList = new List<Assembly>();
      Assembly assembly1 = typeof (EncyclopediaModelBase).Assembly;
      assemblyList.Add(assembly1);
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
      foreach (Assembly assembly3 in assemblyList)
        typeList.AddRange((IEnumerable<Type>) assembly3.GetTypesSafe());
      foreach (Type type in typeList)
      {
        if (typeof (EncyclopediaPage).IsAssignableFrom(type))
        {
          foreach (object obj in type.GetCustomAttributesSafe(typeof (OverrideEncyclopediaModel), false))
          {
            if (obj is OverrideEncyclopediaModel encyclopediaModel)
            {
              EncyclopediaPage instance = Activator.CreateInstance(type) as EncyclopediaPage;
              foreach (Type pageTargetType in encyclopediaModel.PageTargetTypes)
                this._pages.Add(pageTargetType, instance);
            }
          }
        }
      }
      foreach (Type type in typeList)
      {
        if (typeof (EncyclopediaPage).IsAssignableFrom(type))
        {
          foreach (object obj in type.GetCustomAttributesSafe(typeof (EncyclopediaModel), false))
          {
            if (obj is EncyclopediaModel encyclopediaModel)
            {
              EncyclopediaPage instance = Activator.CreateInstance(type) as EncyclopediaPage;
              foreach (Type pageTargetType in encyclopediaModel.PageTargetTypes)
              {
                if (!this._pages.ContainsKey(pageTargetType))
                  this._pages.Add(pageTargetType, instance);
              }
            }
          }
        }
      }
    }

    public IEnumerable<EncyclopediaPage> GetEncyclopediaPages()
    {
      return this._pages.Values.Distinct<EncyclopediaPage>();
    }

    public EncyclopediaPage GetPageOf(Type type) => this._pages[type];

    public string GetIdentifier(Type type) => this._pages[type].GetIdentifier(type);

    public void GoToLink(string pageType, string stringID)
    {
      if (this._executeLink == null || string.IsNullOrEmpty(pageType))
        return;
      if ((pageType == "Home" ? 1 : (pageType == "LastPage" ? 1 : 0)) != 0)
        this._executeLink(pageType, (object) null);
      else if (pageType == "ListPage")
      {
        EncyclopediaPage encyclopediaPage = Campaign.Current.EncyclopediaManager.GetEncyclopediaPages().FirstOrDefault<EncyclopediaPage>((Func<EncyclopediaPage, bool>) (e => e.HasIdentifier(stringID)));
        this._executeLink(pageType, (object) encyclopediaPage);
      }
      else
      {
        EncyclopediaPage encyclopediaPage = Campaign.Current.EncyclopediaManager.GetEncyclopediaPages().FirstOrDefault<EncyclopediaPage>((Func<EncyclopediaPage, bool>) (e => e.HasIdentifier(pageType)));
        MBObjectBase o = encyclopediaPage.GetObject(pageType, stringID);
        if (encyclopediaPage == null || !encyclopediaPage.IsValidEncyclopediaItem((object) o))
          return;
        this._executeLink(pageType, (object) o);
      }
    }

    public void GoToLink(string link)
    {
      string[] strArray = link.ToString().Split('-');
      this.GoToLink(strArray[0], strArray[1]);
    }

    public void SetLinkCallback(Action<string, object> ExecuteLink)
    {
      this._executeLink = ExecuteLink;
    }
  }
}
