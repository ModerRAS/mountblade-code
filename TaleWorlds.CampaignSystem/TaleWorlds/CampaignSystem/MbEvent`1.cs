// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.MbEvent`1
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class MbEvent<T> : IMbEvent<T>, IMbEventBase
  {
    private MbEvent<T>.EventHandlerRec<T> _nonSerializedListenerList;

    public void AddNonSerializedListener(object owner, Action<T> action)
    {
      MbEvent<T>.EventHandlerRec<T> eventHandlerRec = new MbEvent<T>.EventHandlerRec<T>(owner, action);
      MbEvent<T>.EventHandlerRec<T> serializedListenerList = this._nonSerializedListenerList;
      this._nonSerializedListenerList = eventHandlerRec;
      eventHandlerRec.Next = serializedListenerList;
    }

    public void Invoke(T t) => this.InvokeList(this._nonSerializedListenerList, t);

    private void InvokeList(MbEvent<T>.EventHandlerRec<T> list, T t)
    {
      for (; list != null; list = list.Next)
        list.Action(t);
    }

    public void ClearListeners(object o)
    {
      this.ClearListenerOfList(ref this._nonSerializedListenerList, o);
    }

    private void ClearListenerOfList(ref MbEvent<T>.EventHandlerRec<T> list, object o)
    {
      MbEvent<T>.EventHandlerRec<T> eventHandlerRec1 = list;
      while (eventHandlerRec1 != null && eventHandlerRec1.Owner != o)
        eventHandlerRec1 = eventHandlerRec1.Next;
      if (eventHandlerRec1 == null)
        return;
      MbEvent<T>.EventHandlerRec<T> eventHandlerRec2 = list;
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

    internal class EventHandlerRec<TS>
    {
      public MbEvent<T>.EventHandlerRec<TS> Next;

      internal Action<TS> Action { get; private set; }

      internal object Owner { get; private set; }

      public EventHandlerRec(object owner, Action<TS> action)
      {
        this.Action = action;
        this.Owner = owner;
      }
    }
  }
}
