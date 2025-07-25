// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.Usables.SiegeMachineStonePile
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Objects.Siege;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects.Usables
{
  public class SiegeMachineStonePile : UsableMachine, ISpawnable
  {
    private bool _spawnedFromSpawner;

    protected internal override void OnInit() => base.OnInit();

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      if (!usableGameObject.GameEntity.HasTag(this.AmmoPickUpTag))
        return TextObject.Empty;
      TextObject forStandingPoint = new TextObject("{=jfcceEoE}{PILE_TYPE} Pile");
      forStandingPoint.SetTextVariable("PILE_TYPE", new TextObject("{=1CPdu9K0}Stone"));
      return forStandingPoint;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      if (!gameEntity.HasTag(this.AmmoPickUpTag))
        return string.Empty;
      TextObject textObject = new TextObject("{=bNYm3K6b}{KEY} Pick Up");
      textObject.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return textObject.ToString();
    }

    public void SetSpawnedFromSpawner() => this._spawnedFromSpawner = true;

    public override OrderType GetOrder(BattleSideEnum side) => OrderType.None;
  }
}
