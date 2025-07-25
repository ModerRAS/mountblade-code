// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.MbEvent`7
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class MbEvent<T1, T2, T3, T4, T5, T6, T7> : 
    IMbEvent<T1, T2, T3, T4, T5, T6, T7>,
    IMbEventBase
  {
    private MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7> _nonSerializedListenerList;

    public void AddNonSerializedListener(object owner, Action<T1, T2, T3, T4, T5, T6, T7> action)
    {
      MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7> eventHandlerRec = new MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7>(owner, action);
      MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7> serializedListenerList = this._nonSerializedListenerList;
      this._nonSerializedListenerList = eventHandlerRec;
      eventHandlerRec.Next = serializedListenerList;
    }

    internal void Invoke(T1 t1, T2 t2, T3 t3, T4 t4, T5 t5, T6 t6, T7 t7)
    {
      this.InvokeList(this._nonSerializedListenerList, t1, t2, t3, t4, t5, t6, t7);
    }

    private void InvokeList(
      MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7> list,
      T1 t1,
      T2 t2,
      T3 t3,
      T4 t4,
      T5 t5,
      T6 t6,
      T7 t7)
    {
      for (; list != null; list = list.Next)
        list.Action(t1, t2, t3, t4, t5, t6, t7);
    }

    public void ClearListeners(object o)
    {
      this.ClearListenerOfList(ref this._nonSerializedListenerList, o);
    }

    private void ClearListenerOfList(
      ref MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7> list,
      object o)
    {
      MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7> eventHandlerRec1 = list;
      while (eventHandlerRec1 != null && eventHandlerRec1.Owner != o)
        eventHandlerRec1 = eventHandlerRec1.Next;
      if (eventHandlerRec1 == null)
        return;
      MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<T1, T2, T3, T4, T5, T6, T7> eventHandlerRec2 = list;
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

    internal class EventHandlerRec<TA, TB, TC, TD, TE, TF, TG>
    {
      public MbEvent<T1, T2, T3, T4, T5, T6, T7>.EventHandlerRec<TA, TB, TC, TD, TE, TF, TG> Next;

      internal Action<TA, TB, TC, TD, TE, TF, TG> Action { get; private set; }

      internal object Owner { get; private set; }

      public EventHandlerRec(object owner, Action<TA, TB, TC, TD, TE, TF, TG> action)
      {
        this.Action = action;
        this.Owner = owner;
      }
    }
  }
}
