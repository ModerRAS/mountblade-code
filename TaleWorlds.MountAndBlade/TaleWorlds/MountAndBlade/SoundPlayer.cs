// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SoundPlayer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SoundPlayer : ScriptComponentBehavior
  {
    private bool Playing;
    private int SoundCode = -1;
    private SoundEvent SoundEvent;
    public bool AutoLoop;
    public bool AutoStart;
    public string SoundName;

    private void ValidateSoundEvent()
    {
      if (this.SoundEvent != null && this.SoundEvent.IsValid || this.SoundName.Length <= 0)
        return;
      if (this.SoundCode == -1)
        this.SoundCode = SoundManager.GetEventGlobalIndex(this.SoundName);
      this.SoundEvent = SoundEvent.CreateEvent(this.SoundCode, this.GameEntity.Scene);
    }

    public void UpdatePlaying()
    {
      this.Playing = this.SoundEvent != null && this.SoundEvent.IsValid && this.SoundEvent.IsPlaying();
    }

    public void PlaySound()
    {
      if (this.Playing || this.SoundEvent == null || !this.SoundEvent.IsValid)
        return;
      this.SoundEvent.SetPosition(this.GameEntity.GlobalPosition);
      this.SoundEvent.Play();
      this.Playing = true;
    }

    public void ResumeSound()
    {
      if (this.Playing || this.SoundEvent == null || !this.SoundEvent.IsValid || !this.SoundEvent.IsPaused())
        return;
      this.SoundEvent.Resume();
      this.Playing = true;
    }

    public void PauseSound()
    {
      if (!this.Playing || this.SoundEvent == null || !this.SoundEvent.IsValid)
        return;
      this.SoundEvent.Pause();
      this.Playing = false;
    }

    public void StopSound()
    {
      if (!this.Playing || this.SoundEvent == null || !this.SoundEvent.IsValid)
        return;
      this.SoundEvent.Stop();
      this.Playing = false;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      MBDebug.Print("SoundPlayer : OnInit called.", color: Debug.DebugColor.Yellow);
      this.ValidateSoundEvent();
      if (this.AutoStart)
        this.PlaySound();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      this.UpdatePlaying();
      if (this.Playing || !this.AutoLoop)
        return;
      this.ValidateSoundEvent();
      this.PlaySound();
    }

    protected internal override bool MovesEntity() => false;
  }
}
