// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CustomBattleCombatant
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CustomBattleCombatant : IBattleCombatant
  {
    private List<BasicCharacterObject> _characters;
    private BasicCharacterObject _general;

    public TextObject Name { get; private set; }

    public BattleSideEnum Side { get; set; }

    public BasicCharacterObject General => this._general;

    public BasicCultureObject BasicCulture { get; private set; }

    public Tuple<uint, uint> PrimaryColorPair
    {
      get => new Tuple<uint, uint>(this.Banner.GetPrimaryColor(), this.Banner.GetFirstIconColor());
    }

    public Tuple<uint, uint> AlternativeColorPair
    {
      get => new Tuple<uint, uint>(this.Banner.GetFirstIconColor(), this.Banner.GetPrimaryColor());
    }

    public Banner Banner { get; private set; }

    public int GetTacticsSkillAmount()
    {
      return this._characters.Count > 0 ? this._characters.Max<BasicCharacterObject>((Func<BasicCharacterObject, int>) (h => h.GetSkillValue(DefaultSkills.Tactics))) : 0;
    }

    public IEnumerable<BasicCharacterObject> Characters
    {
      get => (IEnumerable<BasicCharacterObject>) this._characters.AsReadOnly();
    }

    public int NumberOfAllMembers { get; private set; }

    public int NumberOfHealthyMembers => this._characters.Count;

    public CustomBattleCombatant(TextObject name, BasicCultureObject culture, Banner banner)
    {
      this.Name = name;
      this.BasicCulture = culture;
      this.Banner = banner;
      this._characters = new List<BasicCharacterObject>();
      this._general = (BasicCharacterObject) null;
    }

    public void AddCharacter(BasicCharacterObject characterObject, int number)
    {
      for (int index = 0; index < number; ++index)
        this._characters.Add(characterObject);
      this.NumberOfAllMembers += number;
    }

    public void SetGeneral(BasicCharacterObject generalCharacter)
    {
      this._general = generalCharacter;
    }

    public void KillCharacter(BasicCharacterObject character) => this._characters.Remove(character);
  }
}
