// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeObjects.StoryModeBannerEffects
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.Core;

#nullable disable
namespace StoryMode.StoryModeObjects
{
  public class StoryModeBannerEffects
  {
    private const string NotImplementedText = "{=!}Not Implemented.";
    private BannerEffect _dragonBannerEffect;

    public static BannerEffect DragonBannerEffect
    {
      get => StoryModeManager.Current.StoryModeBannerEffects._dragonBannerEffect;
    }

    public StoryModeBannerEffects() => this.RegisterAll();

    private void RegisterAll()
    {
      this._dragonBannerEffect = this.Create("dragon_banner_effect");
      this.InitializeAll();
    }

    private BannerEffect Create(string stringId)
    {
      return Game.Current.ObjectManager.RegisterPresumedObject<BannerEffect>(new BannerEffect(stringId));
    }

    private void InitializeAll()
    {
      this._dragonBannerEffect.Initialize("{=!}Not Implemented.", "{=!}Not Implemented.", 0.0f, 0.0f, 0.0f, BannerEffect.EffectIncrementType.Invalid);
    }
  }
}
