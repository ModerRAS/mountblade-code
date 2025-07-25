// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Missions.NameMarker.MissionNameMarkerToggleEvent
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.Library.EventSystem;

#nullable disable
namespace SandBox.ViewModelCollection.Missions.NameMarker
{
  public class MissionNameMarkerToggleEvent : EventBase
  {
    public bool NewState { get; private set; }

    public MissionNameMarkerToggleEvent(bool newState) => this.NewState = newState;
  }
}
