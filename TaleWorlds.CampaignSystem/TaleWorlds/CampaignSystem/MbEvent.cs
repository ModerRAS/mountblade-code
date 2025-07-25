// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.MbEvent
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class MbEvent : IMbEvent
  {
    private MbEvent.EventHandlerRec _nonSerializedListenerList;

    public void AddNonSerializedListener(object owner, Action action)
    {
      MbEvent.EventHandlerRec eventHandlerRec = new MbEvent.EventHandlerRec(owner, action);
      MbEvent.EventHandlerRec serializedListenerList = this._nonSerializedListenerList;
      this._nonSerializedListenerList = eventHandlerRec;
      eventHandlerRec.Next = serializedListenerList;
    }

    public void Invoke() => this.InvokeList(this._nonSerializedListenerList);

    private void InvokeList(MbEvent.EventHandlerRec list)
    {
      for (; list != null; list = list.Next)
        list.Action();
    }

    public void ClearListeners(object o)
    {
      this.ClearListenerOfList(ref this._nonSerializedListenerList, o);
    }

    private void ClearListenerOfList(ref MbEvent.EventHandlerRec list, object o)
    {
      MbEvent.EventHandlerRec eventHandlerRec1 = list;
      while (eventHandlerRec1 != null && eventHandlerRec1.Owner != o)
        eventHandlerRec1 = eventHandlerRec1.Next;
      if (eventHandlerRec1 == null)
        return;
      MbEvent.EventHandlerRec eventHandlerRec2 = list;
      if (eventHandlerRec2 == eventHandlerRec1)
      {
        list = eventHandlerRec2.Next;
      }
      else
      {
        while (eventHandlerRec2 != null)
        {
          if (eventHandlerRec2.Next == eventHandlerRec1)
            eventHandlerRec2.Next = eventHandlerRec1.Next;
          else
            eventHandlerRec2 = eventHandlerRec2.Next;
        }
      }
    }

    internal class EventHandlerRec
    {
      public MbEvent.EventHandlerRec Next;

      internal Action Action { get; private set; }

      internal object Owner { get; private set; }

      public EventHandlerRec(object owner, Action action)
      {
        this.Action = action;
        this.Owner = owner;
      }
    }
  }
}
