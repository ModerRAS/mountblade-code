// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.MbEvent`2
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class MbEvent<T1, T2> : IMbEvent<T1, T2>, IMbEventBase
  {
    private MbEvent<T1, T2>.EventHandlerRec<T1, T2> _nonSerializedListenerList;

    public void AddNonSerializedListener(object owner, Action<T1, T2> action)
    {
      MbEvent<T1, T2>.EventHandlerRec<T1, T2> eventHandlerRec = new MbEvent<T1, T2>.EventHandlerRec<T1, T2>(owner, action);
      MbEvent<T1, T2>.EventHandlerRec<T1, T2> serializedListenerList = this._nonSerializedListenerList;
      this._nonSerializedListenerList = eventHandlerRec;
      eventHandlerRec.Next = serializedListenerList;
    }

    internal void Invoke(T1 t1, T2 t2) => this.InvokeList(this._nonSerializedListenerList, t1, t2);

    private void InvokeList(MbEvent<T1, T2>.EventHandlerRec<T1, T2> list, T1 t1, T2 t2)
    {
      for (; list != null; list = list.Next)
        list.Action(t1, t2);
    }

    public void ClearListeners(object o)
    {
      this.ClearListenerOfList(ref this._nonSerializedListenerList, o);
    }

    private void ClearListenerOfList(ref MbEvent<T1, T2>.EventHandlerRec<T1, T2> list, object o)
    {
      MbEvent<T1, T2>.EventHandlerRec<T1, T2> eventHandlerRec1 = list;
      while (eventHandlerRec1 != null && eventHandlerRec1.Owner != o)
        eventHandlerRec1 = eventHandlerRec1.Next;
      if (eventHandlerRec1 == null)
        return;
      MbEvent<T1, T2>.EventHandlerRec<T1, T2> eventHandlerRec2 = list;
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

    internal class EventHandlerRec<TS, TQ>
    {
      public MbEvent<T1, T2>.EventHandlerRec<TS, TQ> Next;

      internal Action<TS, TQ> Action { get; private set; }

      internal object Owner { get; private set; }

      public EventHandlerRec(object owner, Action<TS, TQ> action)
      {
        this.Action = action;
        this.Owner = owner;
      }
    }
  }
}
