// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GameKeyTextExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class GameKeyTextExtensions
  {
    public static TextObject GetHotKeyGameText(
      this GameTextManager gameTextManager,
      string categoryName,
      string hotKeyId)
    {
      return gameTextManager.GetHotKeyGameTextFromKeyID(HotKeyManager.GetHotKeyId(categoryName, hotKeyId));
    }

    public static TextObject GetHotKeyGameText(
      this GameTextManager gameTextManager,
      string categoryName,
      int gameKeyId)
    {
      return gameTextManager.GetHotKeyGameTextFromKeyID(HotKeyManager.GetHotKeyId(categoryName, gameKeyId));
    }

    public static TextObject GetHotKeyGameTextFromKeyID(
      this GameTextManager gameTextManager,
      string keyId)
    {
      return gameTextManager.FindText("str_game_key_text", keyId.ToLower());
    }
  }
}
