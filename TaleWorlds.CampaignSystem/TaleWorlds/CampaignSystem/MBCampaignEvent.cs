// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.MBCampaignEvent
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class MBCampaignEvent
  {
    public string description;
    protected List<MBCampaignEvent.CampaignEventDelegate> handlers = new List<MBCampaignEvent.CampaignEventDelegate>();
    [CachedData]
    protected CampaignTime NextTriggerTime;

    public CampaignTime TriggerPeriod { get; private set; }

    public CampaignTime InitialWait { get; private set; }

    public bool isEventDeleted { get; set; }

    public MBCampaignEvent(string eventName) => this.description = eventName;

    public MBCampaignEvent(CampaignTime triggerPeriod, CampaignTime initialWait)
    {
      this.TriggerPeriod = triggerPeriod;
      this.InitialWait = initialWait;
      this.NextTriggerTime = CampaignTime.Now + this.InitialWait;
      this.isEventDeleted = false;
    }

    public void AddHandler(
      MBCampaignEvent.CampaignEventDelegate gameEventDelegate)
    {
      this.handlers.Add(gameEventDelegate);
    }

    public void RunHandlers(params object[] delegateParams)
    {
      for (int index = 0; index < this.handlers.Count; ++index)
        this.handlers[index](this, delegateParams);
    }

    public void Unregister(object instance)
    {
      for (int index = 0; index < this.handlers.Count; ++index)
      {
        if (this.handlers[index].Target == instance)
        {
          this.handlers.RemoveAt(index);
          --index;
        }
      }
    }

    public void CheckUpdate()
    {
      while (this.NextTriggerTime.IsPast && !this.isEventDeleted)
      {
        this.RunHandlers((object) CampaignTime.Now);
        this.NextTriggerTime += this.TriggerPeriod;
      }
    }

    public void DeletePeriodicEvent() => this.isEventDeleted = true;

    public delegate void CampaignEventDelegate(
      MBCampaignEvent campaignEvent,
      params object[] delegateParams);
  }
}
