// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapConversationView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

#nullable disable
namespace SandBox.View.Map
{
  public class MapConversationView : MapView
  {
    public MapConversationMission ConversationMission;

    protected internal override void OnFinalize()
    {
      base.OnFinalize();
      this.ConversationMission.OnFinalize();
      this.ConversationMission = (MapConversationMission) null;
    }

    protected void CreateConversationMission()
    {
      this.ConversationMission = new MapConversationMission();
    }
  }
}
