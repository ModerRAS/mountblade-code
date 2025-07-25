// Decompiled with JetBrains decompiler
// Type: Helpers.MiscHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System.Xml;
using TaleWorlds.Library;

#nullable disable
namespace Helpers
{
  public static class MiscHelper
  {
    public static XmlDocument LoadXmlFile(string path)
    {
      Debug.Print("opening " + path);
      XmlDocument xmlDocument = new XmlDocument();
      StreamReader streamReader = new StreamReader(path);
      xmlDocument.LoadXml(streamReader.ReadToEnd());
      streamReader.Close();
      return xmlDocument;
    }

    public static string GenerateCampaignId(int length)
    {
      using (MD5 md5 = MD5.Create())
      {
        byte[] bytes = Encoding.ASCII.GetBytes(DateTimeOffset.Now.ToUnixTimeMilliseconds().ToString());
        byte[] hash = md5.ComputeHash(bytes);
        MBStringBuilder mbStringBuilder = new MBStringBuilder();
        mbStringBuilder.Initialize(callerMemberName: nameof (GenerateCampaignId));
        for (int index = 0; index < hash.Length && mbStringBuilder.Length < length; ++index)
          mbStringBuilder.Append<string>(hash[index].ToString("x2"));
        return mbStringBuilder.ToStringAndRelease();
      }
    }
  }
}
