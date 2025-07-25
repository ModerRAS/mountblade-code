// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encyclopedia.EncyclopediaPage
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encyclopedia
{
  public abstract class EncyclopediaPage
  {
    private readonly Type[] _identifierTypes;
    private readonly Dictionary<Type, string> _identifiers;
    private IEnumerable<EncyclopediaFilterGroup> _filters;
    private IEnumerable<EncyclopediaListItem> _items;
    private IEnumerable<EncyclopediaSortController> _sortControllers;

    protected abstract IEnumerable<EncyclopediaListItem> InitializeListItems();

    protected abstract IEnumerable<EncyclopediaFilterGroup> InitializeFilterItems();

    protected abstract IEnumerable<EncyclopediaSortController> InitializeSortControllers();

    public int HomePageOrderIndex { get; protected set; }

    public EncyclopediaPage Parent { get; }

    public EncyclopediaPage()
    {
      this._filters = this.InitializeFilterItems();
      this._items = this.InitializeListItems();
      this._sortControllers = (IEnumerable<EncyclopediaSortController>) new List<EncyclopediaSortController>()
      {
        new EncyclopediaSortController(new TextObject("{=koX9okuG}None"), (EncyclopediaListItemComparerBase) new EncyclopediaListItemNameComparer())
      };
      ((List<EncyclopediaSortController>) this._sortControllers).AddRange(this.InitializeSortControllers());
      foreach (object obj in this.GetType().GetCustomAttributesSafe(typeof (EncyclopediaModel), true))
      {
        if (obj is EncyclopediaModel)
        {
          this._identifierTypes = (obj as EncyclopediaModel).PageTargetTypes;
          break;
        }
      }
      this._identifiers = new Dictionary<Type, string>();
      foreach (Type identifierType in this._identifierTypes)
      {
        if (Game.Current.ObjectManager.HasType(identifierType))
        {
          this._identifiers.Add(identifierType, Game.Current.ObjectManager.FindRegisteredClassPrefix(identifierType));
        }
        else
        {
          string str = identifierType.Name.ToString();
          if (str == "Clan")
            str = "Faction";
          this._identifiers.Add(identifierType, str);
        }
      }
    }

    public bool HasIdentifierType(Type identifierType)
    {
      return ((IEnumerable<Type>) this._identifierTypes).Contains<Type>(identifierType);
    }

    internal bool HasIdentifier(string identifier) => this._identifiers.ContainsValue(identifier);

    public string GetIdentifier(Type identifierType)
    {
      return this._identifiers.ContainsKey(identifierType) ? this._identifiers[identifierType] : "";
    }

    public string[] GetIdentifierNames() => this._identifiers.Values.ToArray<string>();

    public bool IsFiltered(object o)
    {
      foreach (EncyclopediaFilterGroup filterItem in this.GetFilterItems())
      {
        if (!filterItem.Predicate(o))
          return true;
      }
      return false;
    }

    public virtual string GetViewFullyQualifiedName() => "";

    public virtual string GetStringID() => "";

    public virtual TextObject GetName() => TextObject.Empty;

    public virtual MBObjectBase GetObject(string typeName, string stringID)
    {
      return MBObjectManager.Instance.GetObject(typeName, stringID);
    }

    public virtual bool IsValidEncyclopediaItem(object o) => false;

    public virtual TextObject GetDescriptionText() => TextObject.Empty;

    public IEnumerable<EncyclopediaListItem> GetListItems() => this._items;

    public IEnumerable<EncyclopediaFilterGroup> GetFilterItems() => this._filters;

    public IEnumerable<EncyclopediaSortController> GetSortControllers() => this._sortControllers;
  }
}
