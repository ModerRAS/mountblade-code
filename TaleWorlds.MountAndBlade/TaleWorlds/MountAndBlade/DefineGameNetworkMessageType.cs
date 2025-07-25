// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DefineGameNetworkMessageType
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [AttributeUsage(AttributeTargets.Class)]
  internal sealed class DefineGameNetworkMessageType : Attribute
  {
    public readonly GameNetworkMessageSendType SendType;

    public DefineGameNetworkMessageType(GameNetworkMessageSendType sendType)
    {
      this.SendType = sendType;
    }
  }
}
