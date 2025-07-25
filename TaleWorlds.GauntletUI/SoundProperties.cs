// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.SoundProperties
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class SoundProperties
  {
    private Dictionary<string, AudioProperty> _stateSounds;
    private Dictionary<string, AudioProperty> _eventSounds;

    public IEnumerable<KeyValuePair<string, AudioProperty>> RegisteredStateSounds
    {
      get
      {
        foreach (KeyValuePair<string, AudioProperty> stateSound in this._stateSounds)
          yield return stateSound;
      }
    }

    public IEnumerable<KeyValuePair<string, AudioProperty>> RegisteredEventSounds
    {
      get
      {
        foreach (KeyValuePair<string, AudioProperty> eventSound in this._eventSounds)
          yield return eventSound;
      }
    }

    public SoundProperties()
    {
      this._stateSounds = new Dictionary<string, AudioProperty>();
      this._eventSounds = new Dictionary<string, AudioProperty>();
    }

    public void AddStateSound(string state, AudioProperty audioProperty)
    {
      this._stateSounds.Add(state, audioProperty);
    }

    public void AddEventSound(string state, AudioProperty audioProperty)
    {
      if (this._eventSounds.ContainsKey(state))
        this._eventSounds[state] = audioProperty;
      else
        this._eventSounds.Add(state, audioProperty);
    }

    public void FillFrom(SoundProperties soundProperties)
    {
      this._stateSounds = new Dictionary<string, AudioProperty>();
      this._eventSounds = new Dictionary<string, AudioProperty>();
      foreach (KeyValuePair<string, AudioProperty> stateSound in soundProperties._stateSounds)
      {
        string key = stateSound.Key;
        AudioProperty audioProperty1 = stateSound.Value;
        AudioProperty audioProperty2 = new AudioProperty();
        audioProperty2.FillFrom(audioProperty1);
        this._stateSounds.Add(key, audioProperty2);
      }
      foreach (KeyValuePair<string, AudioProperty> eventSound in soundProperties._eventSounds)
      {
        string key = eventSound.Key;
        AudioProperty audioProperty3 = eventSound.Value;
        AudioProperty audioProperty4 = new AudioProperty();
        audioProperty4.FillFrom(audioProperty3);
        this._eventSounds.Add(key, audioProperty4);
      }
    }

    public AudioProperty GetEventAudioProperty(string eventName)
    {
      return this._eventSounds.ContainsKey(eventName) ? this._eventSounds[eventName] : (AudioProperty) null;
    }

    public AudioProperty GetStateAudioProperty(string stateName)
    {
      return this._stateSounds.ContainsKey(stateName) ? this._stateSounds[stateName] : (AudioProperty) null;
    }
  }
}
