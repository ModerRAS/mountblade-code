// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.PartyVisualManager
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.View.Map
{
  public class PartyVisualManager : CampaignEntityVisualComponent
  {
    private readonly Dictionary<PartyBase, PartyVisual> _partiesAndVisuals = new Dictionary<PartyBase, PartyVisual>();
    private readonly List<PartyVisual> _visualsFlattened = new List<PartyVisual>();
    private int _dirtyPartyVisualCount;
    private PartyVisual[] _dirtyPartiesList = new PartyVisual[2500];
    private readonly List<PartyVisual> _fadingPartiesFlatten = new List<PartyVisual>();
    private readonly HashSet<PartyVisual> _fadingPartiesSet = new HashSet<PartyVisual>();

    public static PartyVisualManager Current
    {
      get => Campaign.Current.GetEntityComponent<PartyVisualManager>();
    }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
        this.AddNewPartyVisualForParty(mobileParty.Party);
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        this.AddNewPartyVisualForParty(settlement.Party);
      CampaignEvents.MobilePartyCreated.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnMobilePartyCreated));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      this._partiesAndVisuals[mobileParty.Party].OnPartyRemoved();
      this._visualsFlattened.Remove(this._partiesAndVisuals[mobileParty.Party]);
      this._partiesAndVisuals.Remove(mobileParty.Party);
    }

    private void OnMobilePartyCreated(MobileParty mobileParty)
    {
      this.AddNewPartyVisualForParty(mobileParty.Party);
    }

    private void AddNewPartyVisualForParty(PartyBase partyBase)
    {
      PartyVisual partyVisual = new PartyVisual(partyBase);
      partyVisual.OnStartup();
      this._partiesAndVisuals.Add(partyBase, partyVisual);
      this._visualsFlattened.Add(partyVisual);
    }

    public PartyVisual GetVisualOfParty(PartyBase partyBase) => this._partiesAndVisuals[partyBase];

    public void OnFinalized()
    {
      foreach (PartyVisual partyVisual in this._partiesAndVisuals.Values)
        partyVisual.ReleaseResources();
    }

    public override void OnTick(float realDt, float dt)
    {
      this._dirtyPartyVisualCount = -1;
      TWParallel.For(0, this._visualsFlattened.Count, (TWParallel.ParallelForAuxPredicate) ((startInclusive, endExclusive) =>
      {
        for (int index = startInclusive; index < endExclusive; ++index)
          this._visualsFlattened[index].Tick(dt, ref this._dirtyPartyVisualCount, ref this._dirtyPartiesList);
      }));
      for (int index = 0; index < this._dirtyPartyVisualCount + 1; ++index)
        this._dirtyPartiesList[index].ValidateIsDirty(realDt, dt);
      for (int index = this._fadingPartiesFlatten.Count - 1; index >= 0; --index)
        this._fadingPartiesFlatten[index].TickFadingState(realDt, dt);
    }

    internal void RegisterFadingVisual(PartyVisual visual)
    {
      if (this._fadingPartiesSet.Contains(visual))
        return;
      this._fadingPartiesFlatten.Add(visual);
      this._fadingPartiesSet.Add(visual);
    }

    internal void UnRegisterFadingVisual(PartyVisual visual)
    {
      if (!this._fadingPartiesSet.Contains(visual))
        return;
      this._fadingPartiesFlatten[this._fadingPartiesFlatten.IndexOf(visual)] = this._fadingPartiesFlatten[this._fadingPartiesFlatten.Count - 1];
      this._fadingPartiesFlatten.Remove(this._fadingPartiesFlatten[this._fadingPartiesFlatten.Count - 1]);
      this._fadingPartiesSet.Remove(visual);
    }
  }
}
