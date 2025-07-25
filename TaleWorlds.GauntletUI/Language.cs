// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Language
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using System.Xml;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class Language : ILanguage
  {
    private readonly Dictionary<string, Font> _fontMap = new Dictionary<string, Font>();

    public char[] ForbiddenStartOfLineCharacters { get; private set; }

    public char[] ForbiddenEndOfLineCharacters { get; private set; }

    public string LanguageID { get; private set; }

    public string DefaultFontName { get; private set; }

    public bool DoesFontRequireSpaceForNewline { get; private set; } = true;

    public Font DefaultFont { get; private set; }

    public char LineSeperatorChar { get; private set; }

    public bool FontMapHasKey(string keyFontName) => this._fontMap.ContainsKey(keyFontName);

    public Font GetMappedFont(string keyFontName) => this._fontMap[keyFontName];

    private Language()
    {
    }

    public static Language CreateFrom(XmlNode languageNode, FontFactory fontFactory)
    {
      Language from = new Language()
      {
        LanguageID = languageNode.Attributes["id"].InnerText
      };
      from.DefaultFontName = languageNode.Attributes["DefaultFont"]?.InnerText ?? "Galahad";
      Language language = from;
      XmlAttribute attribute = languageNode.Attributes["LineSeperatorChar"];
      int num = attribute != null ? (int) attribute.InnerText[0] : 45;
      language.LineSeperatorChar = (char) num;
      from.DefaultFont = fontFactory.GetFont(from.DefaultFontName);
      foreach (XmlNode childNode in languageNode.ChildNodes)
      {
        if (childNode.NodeType == XmlNodeType.Element)
        {
          if (childNode.Name == "Map")
          {
            string innerText1 = childNode.Attributes["From"].InnerText;
            string innerText2 = childNode.Attributes["To"].InnerText;
            from._fontMap.Add(innerText1, fontFactory.GetFont(innerText2));
          }
          else if (childNode.Name == "NewlineDoesntRequireSpace")
            from.DoesFontRequireSpaceForNewline = false;
          else if (childNode.Name == "ForbiddenStartOfLineCharacters")
            from.ForbiddenStartOfLineCharacters = childNode.Attributes["Characters"]?.InnerText.ToCharArray();
          else if (childNode.Name == "ForbiddenEndOfLineCharacters")
            from.ForbiddenEndOfLineCharacters = childNode.Attributes["Characters"]?.InnerText.ToCharArray();
        }
      }
      return from;
    }

    IEnumerable<char> ILanguage.GetForbiddenStartOfLineCharacters()
    {
      return (IEnumerable<char>) this.ForbiddenStartOfLineCharacters;
    }

    IEnumerable<char> ILanguage.GetForbiddenEndOfLineCharacters()
    {
      return (IEnumerable<char>) this.ForbiddenEndOfLineCharacters;
    }

    bool ILanguage.IsCharacterForbiddenAtStartOfLine(char character)
    {
      if (this.ForbiddenStartOfLineCharacters == null || this.ForbiddenStartOfLineCharacters.Length == 0)
        return false;
      for (int index = 0; index < this.ForbiddenStartOfLineCharacters.Length; ++index)
      {
        if ((int) this.ForbiddenStartOfLineCharacters[index] == (int) character)
          return true;
      }
      return false;
    }

    bool ILanguage.IsCharacterForbiddenAtEndOfLine(char character)
    {
      if (this.ForbiddenEndOfLineCharacters == null || this.ForbiddenEndOfLineCharacters.Length == 0)
        return false;
      for (int index = 0; index < this.ForbiddenEndOfLineCharacters.Length; ++index)
      {
        if ((int) this.ForbiddenEndOfLineCharacters[index] == (int) character)
          return true;
      }
      return false;
    }

    string ILanguage.GetLanguageID() => this.LanguageID;

    string ILanguage.GetDefaultFontName() => this.DefaultFontName;

    Font ILanguage.GetDefaultFont() => this.DefaultFont;

    char ILanguage.GetLineSeperatorChar() => this.LineSeperatorChar;

    bool ILanguage.DoesLanguageRequireSpaceForNewline() => this.DoesFontRequireSpaceForNewline;

    bool ILanguage.FontMapHasKey(string keyFontName) => this._fontMap.ContainsKey(keyFontName);

    Font ILanguage.GetMappedFont(string keyFontName) => this._fontMap[keyFontName];
  }
}
