// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.BarterData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem
{
  public class BarterData
  {
    public readonly Hero OffererHero;
    public readonly Hero OtherHero;
    public readonly PartyBase OffererParty;
    public readonly PartyBase OtherParty;
    private List<Barterable> _barterables;
    private List<BarterGroup> _barterGroups;
    public readonly BarterManager.BarterContextInitializer ContextInitializer;
    public readonly int PersuasionCostReduction;

    public IFaction OffererMapFaction
    {
      get => this.OffererHero?.MapFaction ?? this.OffererParty.MapFaction;
    }

    public IFaction OtherMapFaction => this.OtherHero?.MapFaction ?? this.OtherParty.MapFaction;

    public bool IsAiBarter { get; }

    public BarterData(
      Hero offerer,
      Hero other,
      PartyBase offererParty,
      PartyBase otherParty,
      BarterManager.BarterContextInitializer contextInitializer = null,
      int persuasionCostReduction = 0,
      bool isAiBarter = false)
    {
      this.OffererParty = offererParty;
      this.OtherParty = otherParty;
      this.OffererHero = offerer;
      this.OtherHero = other;
      this.ContextInitializer = contextInitializer;
      this.PersuasionCostReduction = persuasionCostReduction;
      this._barterables = new List<Barterable>(16);
      this._barterGroups = Campaign.Current.Models.DiplomacyModel.GetBarterGroups().ToList<BarterGroup>();
      this.IsAiBarter = isAiBarter;
    }

    public void AddBarterable<T>(Barterable barterable, bool isContextDependent = false)
    {
      foreach (BarterGroup barterGroup in this._barterGroups)
      {
        if (barterGroup is T)
        {
          barterable.Initialize(barterGroup, isContextDependent);
          this._barterables.Add(barterable);
          break;
        }
      }
    }

    public void AddBarterGroup(BarterGroup barterGroup) => this._barterGroups.Add(barterGroup);

    public List<BarterGroup> GetBarterGroups() => this._barterGroups;

    public List<Barterable> GetBarterables() => this._barterables;

    public BarterGroup GetBarterGroup<T>()
    {
      IEnumerable<T> source = this._barterGroups.OfType<T>();
      return source.IsEmpty<T>() ? (BarterGroup) null : (object) source.First<T>() as BarterGroup;
    }

    public List<Barterable> GetOfferedBarterables()
    {
      return this.GetBarterables().Where<Barterable>((Func<Barterable, bool>) (barterable => barterable.IsOffered)).ToList<Barterable>();
    }
  }
}
