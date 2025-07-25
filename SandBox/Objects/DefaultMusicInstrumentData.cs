// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.DefaultMusicInstrumentData
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Core;

#nullable disable
namespace SandBox.Objects
{
  public class DefaultMusicInstrumentData
  {
    public DefaultMusicInstrumentData()
    {
      InstrumentData instrumentData1 = Game.Current.ObjectManager.RegisterPresumedObject<InstrumentData>(new InstrumentData("cheerful"));
      instrumentData1.InitializeInstrumentData("act_musician_idle_sitting_cheerful", "act_musician_idle_stand_cheerful", true);
      instrumentData1.AfterInitialized();
      InstrumentData instrumentData2 = Game.Current.ObjectManager.RegisterPresumedObject<InstrumentData>(new InstrumentData("active"));
      instrumentData2.InitializeInstrumentData("act_musician_idle_sitting_active", "act_musician_idle_stand_active", true);
      instrumentData2.AfterInitialized();
      InstrumentData instrumentData3 = Game.Current.ObjectManager.RegisterPresumedObject<InstrumentData>(new InstrumentData("calm"));
      instrumentData3.InitializeInstrumentData("act_musician_idle_sitting_calm", "act_musician_idle_stand_calm", true);
      instrumentData3.AfterInitialized();
    }
  }
}
