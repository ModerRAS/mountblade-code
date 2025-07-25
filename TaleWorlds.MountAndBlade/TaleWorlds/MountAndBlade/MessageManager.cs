// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MessageManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Diagnostics;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MessageManager
  {
    public static void DisplayMessage(string message)
    {
      MBAPI.IMBMessageManager.DisplayMessage(message);
    }

    public static void DisplayMessage(string message, uint color)
    {
      MBAPI.IMBMessageManager.DisplayMessageWithColor(message, color);
    }

    [Conditional("DEBUG")]
    public static void DisplayDebugMessage(string message)
    {
      if (message.Length > 4 && message.Substring(0, 4).Equals("[DEBUG]"))
        message = message.Substring(4);
      MBAPI.IMBMessageManager.DisplayMessageWithColor("[DEBUG]: " + message, 4294936712U);
    }

    public static void DisplayMultilineMessage(string message, uint color)
    {
      if (message.Contains("\n"))
      {
        string str = message;
        char[] chArray = new char[1]{ '\n' };
        foreach (string message1 in str.Split(chArray))
          MBAPI.IMBMessageManager.DisplayMessageWithColor(message1, color);
      }
      else
        MBAPI.IMBMessageManager.DisplayMessageWithColor(message, color);
    }

    public static void EraseMessageLines() => MBAPI.IMBWindowManager.EraseMessageLines();

    public static void SetMessageManager(MessageManagerBase messageManager)
    {
      MBAPI.IMBMessageManager.SetMessageManager(messageManager);
    }
  }
}
