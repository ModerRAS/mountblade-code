// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.NameGenerator
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class NameGenerator
  {
    private readonly Dictionary<int, int> _nameCodeAndCount;
    private MBList<TextObject> _imperialNamesMale;
    private MBList<TextObject> _imperialNamesFemale;
    private MBList<TextObject> _preacherNames;
    private MBList<TextObject> _merchantNames;
    private MBList<TextObject> _artisanNames;
    private MBList<TextObject> _gangLeaderNames;

    public static NameGenerator Current => Campaign.Current.NameGenerator;

    public NameGenerator() => this._nameCodeAndCount = new Dictionary<int, int>();

    internal void Initialize()
    {
      this.InitializePersonNames();
      this.InitializeNameCodeAndCountDictionary();
    }

    private void InitializeNameCodeAndCountDictionary()
    {
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (!allAliveHero.FirstName.HasSameValue(allAliveHero.Name))
          this.AddName(allAliveHero.FirstName);
        this.AddName(allAliveHero.Name);
      }
      foreach (Hero deadOrDisabledHero in (List<Hero>) Hero.DeadOrDisabledHeroes)
      {
        if (!deadOrDisabledHero.FirstName.HasSameValue(deadOrDisabledHero.Name))
          this.AddName(deadOrDisabledHero.FirstName);
        this.AddName(deadOrDisabledHero.Name);
      }
    }

    public void GenerateHeroNameAndHeroFullName(
      Hero hero,
      out TextObject firstName,
      out TextObject fullName,
      bool useDeterministicValues = true)
    {
      firstName = this.GenerateHeroFirstName(hero);
      fullName = this.GenerateHeroFullName(hero, firstName, useDeterministicValues);
    }

    private TextObject GenerateHeroFullName(
      Hero hero,
      TextObject heroFirstName,
      bool useDeterministicValues = true)
    {
      TextObject heroFullName = heroFirstName;
      Clan clan = hero.Clan;
      uint deterministicIndex = 0;
      if (hero.IsNotable)
        deterministicIndex = (uint) hero.HomeSettlement.Notables.ToList<Hero>().IndexOf(hero);
      if (hero.IsWanderer)
        heroFullName = hero.Template.Name.CopyTextObject();
      else if (clan != null && (clan.IsMafia || clan.IsNomad || clan.IsUnderMercenaryService || clan.IsSect))
      {
        heroFullName = new TextObject("{=4z1t75be}{FIRSTNAME} of the {CLAN_NAME}");
        heroFullName.SetTextVariable("CLAN_NAME", hero.Clan.InformalName);
      }
      else if (hero.IsArtisan)
      {
        int index = this.SelectNameIndex(hero, (MBReadOnlyList<TextObject>) NameGenerator.Current._artisanNames, deterministicIndex, useDeterministicValues);
        this.AddName(this._artisanNames[index]);
        heroFullName = this._artisanNames[index].CopyTextObject();
      }
      else if (hero.IsGangLeader)
      {
        int index = this.SelectNameIndex(hero, (MBReadOnlyList<TextObject>) NameGenerator.Current._gangLeaderNames, deterministicIndex, useDeterministicValues);
        this.AddName(this._gangLeaderNames[index]);
        heroFullName = NameGenerator.Current._gangLeaderNames[index].CopyTextObject();
      }
      else if (hero.IsPreacher)
      {
        int index = this.SelectNameIndex(hero, (MBReadOnlyList<TextObject>) NameGenerator.Current._preacherNames, deterministicIndex, useDeterministicValues);
        this.AddName(this._preacherNames[index]);
        heroFullName = NameGenerator.Current._preacherNames[index].CopyTextObject();
      }
      else if (hero.IsMerchant)
      {
        if (hero.HomeSettlement != null && hero.HomeSettlement.IsTown)
        {
          if (hero.OwnedWorkshops.Count > 0)
          {
            heroFullName = GameTexts.FindText("str_merchant_name");
            TextObject variable = hero.OwnedWorkshops[0].WorkshopType.JobName.CopyTextObject();
            heroFullName.SetTextVariable("JOB_NAME", variable);
          }
          else
          {
            int index = this.SelectNameIndex(hero, (MBReadOnlyList<TextObject>) NameGenerator.Current._merchantNames, deterministicIndex, useDeterministicValues);
            this.AddName(this._merchantNames[index]);
            heroFullName = NameGenerator.Current._merchantNames[index].CopyTextObject();
          }
        }
      }
      else if (hero.IsRuralNotable || hero.IsHeadman)
      {
        heroFullName = new TextObject("{=YTAdoNHW}{FIRSTNAME} of {VILLAGE_NAME}");
        heroFullName.SetTextVariable("VILLAGE_NAME", hero.HomeSettlement.Name);
      }
      heroFullName.SetTextVariable("FEMALE", hero.IsFemale ? 1 : 0);
      heroFullName.SetTextVariable("IMPERIAL", hero.Culture.StringId == "empire" ? 1 : 0);
      heroFullName.SetTextVariable("COASTAL", hero.Culture.StringId == "empire" || hero.Culture.StringId == "vlandia" ? 1 : 0);
      heroFullName.SetTextVariable("NORTHERN", hero.Culture.StringId == "battania" || hero.Culture.StringId == "sturgia" ? 1 : 0);
      if (heroFullName != heroFirstName)
        heroFullName.SetTextVariable("FIRSTNAME", heroFirstName);
      else
        heroFullName.SetTextVariable("FIRSTNAME", heroFirstName.ToString());
      return heroFullName;
    }

    public TextObject GenerateHeroFirstName(Hero hero)
    {
      MBReadOnlyList<TextObject> nameListForCulture = this.GetNameListForCulture(hero.Culture, hero.IsFemale);
      int index = this.SelectNameIndex(hero, nameListForCulture, 0U, false);
      this.AddName(nameListForCulture[index]);
      return nameListForCulture[index].CopyTextObject();
    }

    public TextObject GenerateFirstNameForPlayer(CultureObject culture, bool isFemale)
    {
      MBReadOnlyList<TextObject> nameListForCulture = this.GetNameListForCulture(culture, isFemale);
      int index = MBRandom.NondeterministicRandomInt % nameListForCulture.Count;
      return nameListForCulture[index].CopyTextObject();
    }

    public TextObject GenerateClanName(CultureObject culture, Settlement clanOriginSettlement)
    {
      TextObject[] nameListForCulture = this.GetClanNameListForCulture(culture);
      Dictionary<TextObject, int> source = new Dictionary<TextObject, int>();
      foreach (TextObject textObject in nameListForCulture)
      {
        TextObject clanNameElement = textObject;
        if (!source.ContainsKey(clanNameElement))
        {
          int num = Clan.All.Count<Clan>((Func<Clan, bool>) (t => t.Name.Equals(clanNameElement))) * 3 + Clan.All.Count<Clan>((Func<Clan, bool>) (t => t.Name.HasSameValue(clanNameElement)));
          source.Add(clanNameElement, num);
        }
        else
          Debug.FailedAssert("Duplicate name in Clan Name list", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\NameGenerator.cs", nameof (GenerateClanName), 196);
      }
      int num1 = source.Values.Max() + 1;
      List<(TextObject, float)> weightList = new List<(TextObject, float)>();
      foreach (TextObject key in source.Keys)
        weightList.Add((key, (float) (num1 - source[key])));
      int chosenIndex;
      MBRandom.ChooseWeighted<TextObject>((IReadOnlyList<(TextObject, float)>) weightList, out chosenIndex);
      TextObject clanName = source.ElementAt<KeyValuePair<TextObject, int>>(chosenIndex).Key.CopyTextObject();
      if (culture.StringId.ToLower() == "vlandia")
        clanName.SetTextVariable("ORIGIN_SETTLEMENT", clanOriginSettlement.Name);
      return clanName;
    }

    private void InitializePersonNames()
    {
      MBList<TextObject> mbList1 = new MBList<TextObject>();
      mbList1.Add(new TextObject("{=aeLgc0cU}Acthon"));
      mbList1.Add(new TextObject("{=tWDyWroN}Amnon"));
      mbList1.Add(new TextObject("{=uTFjknE2}Andros"));
      mbList1.Add(new TextObject("{=QjJAbaoT}Apys"));
      mbList1.Add(new TextObject("{=zInIqBD0}Arenicos"));
      mbList1.Add(new TextObject("{=W1uwgvAQ}Arion"));
      mbList1.Add(new TextObject("{=5VzWRMTn}Artimendros"));
      mbList1.Add(new TextObject("{=rGuYLmez}Ascyron"));
      mbList1.Add(new TextObject("{=J1nh9YiN}Atilon"));
      mbList1.Add(new TextObject("{=NBAGX54b}Avigos"));
      mbList1.Add(new TextObject("{=9cDw6vPF}Cadomenos"));
      mbList1.Add(new TextObject("{=lD1sl2XC}Camnon"));
      mbList1.Add(new TextObject("{=LP7yYoGQ}Caribos"));
      mbList1.Add(new TextObject("{=VhbasI9J}Castor"));
      mbList1.Add(new TextObject("{=VG9ng2n2}Chandion"));
      mbList1.Add(new TextObject("{=aezwJGvY}Chenon"));
      mbList1.Add(new TextObject("{=acp2IcMs}Crotor"));
      mbList1.Add(new TextObject("{=XKxeaF0I}Dalidos"));
      mbList1.Add(new TextObject("{=pCBkH35Q}Danos"));
      mbList1.Add(new TextObject("{=2OJEyP0d}Dasys"));
      mbList1.Add(new TextObject("{=SoTUisL3}Deltisos"));
      mbList1.Add(new TextObject("{=HfuAdGQX}Destor"));
      mbList1.Add(new TextObject("{=lEHtUGed}Diocosos"));
      mbList1.Add(new TextObject("{=5EiKEdi5}Dorion"));
      mbList1.Add(new TextObject("{=yAZC6F7P}Ecsorios"));
      mbList1.Add(new TextObject("{=rUvnbDi2}Encurion"));
      mbList1.Add(new TextObject("{=KjzJjj5n}Eronys"));
      mbList1.Add(new TextObject("{=gYit4RTe}Euchor"));
      mbList1.Add(new TextObject("{=uW38UtSH}Eupitor"));
      mbList1.Add(new TextObject("{=WfAuSpJq}Eutos"));
      mbList1.Add(new TextObject("{=RyorjCXF}Galon"));
      mbList1.Add(new TextObject("{=ZFlIT1tH}Ganimynos"));
      mbList1.Add(new TextObject("{=f3hTGKIP}Garitops"));
      mbList1.Add(new TextObject("{=iDxygnVF}Gerotheon"));
      mbList1.Add(new TextObject("{=rFbAjSWM}Gorigos"));
      mbList1.Add(new TextObject("{=4lEEqyCg}Jacorios"));
      mbList1.Add(new TextObject("{=DwzrsJxS}Jamanys"));
      mbList1.Add(new TextObject("{=IU63oxWD}Jemynon"));
      mbList1.Add(new TextObject("{=t1OpnZph}Jeremos"));
      mbList1.Add(new TextObject("{=katzUyMI}Joron"));
      mbList1.Add(new TextObject("{=GWaJ7Ksq}Joculos"));
      mbList1.Add(new TextObject("{=BCy1KpvR}Lacalion"));
      mbList1.Add(new TextObject("{=6LMiTKZz}Lamenon"));
      mbList1.Add(new TextObject("{=F13aYbuk}Lavalios"));
      mbList1.Add(new TextObject("{=bHbR5Mgy}Losys"));
      mbList1.Add(new TextObject("{=CbxLZdVg}Lycos"));
      mbList1.Add(new TextObject("{=HCXHcBzT}Mattis"));
      mbList1.Add(new TextObject("{=X21PahQn}Menaclys"));
      mbList1.Add(new TextObject("{=tTuaiLS6}Meritor"));
      mbList1.Add(new TextObject("{=qqW5n5Ox}Milos"));
      mbList1.Add(new TextObject("{=5yFy4U4i}Morynon"));
      mbList1.Add(new TextObject("{=ud6rhXbn}Mostiros"));
      mbList1.Add(new TextObject("{=FF3dQKc1}Nethor"));
      mbList1.Add(new TextObject("{=u1lTJoPO}Nemos"));
      mbList1.Add(new TextObject("{=sDFb1PRI}Nortos"));
      mbList1.Add(new TextObject("{=QGIAbglw}Obron"));
      mbList1.Add(new TextObject("{=ZmQx4gT3}Olichor"));
      mbList1.Add(new TextObject("{=pq0w8kry}Orachos"));
      mbList1.Add(new TextObject("{=JFVseSa3}Oros"));
      mbList1.Add(new TextObject("{=7UkzXWTQ}Osarios"));
      mbList1.Add(new TextObject("{=cZIhxH9e}Pacarios"));
      mbList1.Add(new TextObject("{=9sokmYMZ}Padmos"));
      mbList1.Add(new TextObject("{=NXOOJs2X}Patrys"));
      mbList1.Add(new TextObject("{=plx8kkxa}Pelicos"));
      mbList1.Add(new TextObject("{=1cKxsHSh}Penton"));
      mbList1.Add(new TextObject("{=vgBRa2BE}Poraclys"));
      mbList1.Add(new TextObject("{=q186AQHt}Phadon"));
      mbList1.Add(new TextObject("{=LMWiJi6V}Phirentos"));
      mbList1.Add(new TextObject("{=XZxIpCQH}Phorys"));
      mbList1.Add(new TextObject("{=5eTb2xr7}Sanion"));
      mbList1.Add(new TextObject("{=Zm4a2xsf}Salusios"));
      mbList1.Add(new TextObject("{=egCbjHDT}Semnon"));
      mbList1.Add(new TextObject("{=GeJobcre}Sinor"));
      mbList1.Add(new TextObject("{=E4WhEvu7}Sotherys"));
      mbList1.Add(new TextObject("{=FClEZIkT}Sovos"));
      mbList1.Add(new TextObject("{=rVUhYuvE}Suterios"));
      mbList1.Add(new TextObject("{=Axe5FkET}Talison"));
      mbList1.Add(new TextObject("{=PR4IqkTW}Temeon"));
      mbList1.Add(new TextObject("{=9xyXdX4I}Tharos"));
      mbList1.Add(new TextObject("{=zfUhnG7y}Themestios"));
      mbList1.Add(new TextObject("{=P7iNhhPl}Turiados"));
      mbList1.Add(new TextObject("{=kfNW01y5}Tynops"));
      mbList1.Add(new TextObject("{=wbJzSg3X}Ulbesos"));
      mbList1.Add(new TextObject("{=SRncaw79}Urios"));
      mbList1.Add(new TextObject("{=pRbKbPK3}Vadrios"));
      mbList1.Add(new TextObject("{=TiJOjUi5}Valaos"));
      mbList1.Add(new TextObject("{=5nEh20ju}Vasylops"));
      mbList1.Add(new TextObject("{=bWb245zO}Voleos"));
      mbList1.Add(new TextObject("{=WTePYMNF}Zaraclys"));
      mbList1.Add(new TextObject("{=p0hcyZdp}Zenon"));
      mbList1.Add(new TextObject("{=3RBVn5yi}Zoros"));
      mbList1.Add(new TextObject("{=uCyAnus4}Zostios"));
      this._imperialNamesMale = mbList1;
      MBList<TextObject> mbList2 = new MBList<TextObject>();
      mbList2.Add(new TextObject("{=BNnLbOkN}Adinea"));
      mbList2.Add(new TextObject("{=EGatdCLg}Alena"));
      mbList2.Add(new TextObject("{=UPaP0B2L}Alchyla"));
      mbList2.Add(new TextObject("{=QyXwJXIV}Andrasa"));
      mbList2.Add(new TextObject("{=NM5f1Q6I}Ariada"));
      mbList2.Add(new TextObject("{=bmHAYBwX}Catila"));
      mbList2.Add(new TextObject("{=AdK4Ilzw}Chalia"));
      mbList2.Add(new TextObject("{=xVSOKf0p}Chara"));
      mbList2.Add(new TextObject("{=915frsPd}Corena"));
      mbList2.Add(new TextObject("{=BNuZ6nvd}Daniria"));
      mbList2.Add(new TextObject("{=YBGCXSEx}Debana"));
      mbList2.Add(new TextObject("{=Oy5dH7gZ}Elea"));
      mbList2.Add(new TextObject("{=rA3KybBX}Ethirea"));
      mbList2.Add(new TextObject("{=qiTtJyHE}Gala"));
      mbList2.Add(new TextObject("{=fGmpS0Dr}Gandarina"));
      mbList2.Add(new TextObject("{=a6qaFH7L}Herena"));
      mbList2.Add(new TextObject("{=LE9mRhSs}Hespedia"));
      mbList2.Add(new TextObject("{=RHXdqjQY}Ilina"));
      mbList2.Add(new TextObject("{=HSlPLC4m}Ira"));
      mbList2.Add(new TextObject("{=028iCb8B}Jythea"));
      mbList2.Add(new TextObject("{=6vtmYjTW}Jolanna"));
      mbList2.Add(new TextObject("{=Ew69yN84}Juthys"));
      mbList2.Add(new TextObject("{=Jif1C3X3}Laria"));
      mbList2.Add(new TextObject("{=2oy7atk6}Lundana"));
      mbList2.Add(new TextObject("{=dwFZFQ6V}Lysica"));
      mbList2.Add(new TextObject("{=2fYYfHUI}Martira"));
      mbList2.Add(new TextObject("{=Vxt0xTvV}Mavea"));
      mbList2.Add(new TextObject("{=lgvtLEDA}Melchea"));
      mbList2.Add(new TextObject("{=QvfUqzpF}Mina"));
      mbList2.Add(new TextObject("{=11KckWau}Mitara"));
      mbList2.Add(new TextObject("{=uLjRHv9p}Nadea"));
      mbList2.Add(new TextObject("{=FUT6eXfw}Phaea"));
      mbList2.Add(new TextObject("{=WrAMfIG1}Phenoria"));
      mbList2.Add(new TextObject("{=XMTD2clw}Rhoe"));
      mbList2.Add(new TextObject("{=0XEaaoah}Rosazia"));
      mbList2.Add(new TextObject("{=L9weGfoX}Salea"));
      mbList2.Add(new TextObject("{=nSoJkeBI}Sittacea"));
      mbList2.Add(new TextObject("{=V1QLbhRl}Sora"));
      mbList2.Add(new TextObject("{=b2aRoXsb}Tessa"));
      mbList2.Add(new TextObject("{=bQKbW8Tx}Thasyna"));
      mbList2.Add(new TextObject("{=CvVJyKYA}Thelea"));
      mbList2.Add(new TextObject("{=VzhbUL60}Vendelia"));
      mbList2.Add(new TextObject("{=a2ajWcI3}Viria"));
      mbList2.Add(new TextObject("{=wbLqHvjE}Zerosica"));
      mbList2.Add(new TextObject("{=zxZH2WbD}Zimena"));
      mbList2.Add(new TextObject("{=AccBcEIt}Zoana"));
      this._imperialNamesFemale = mbList2;
      MBList<TextObject> mbList3 = new MBList<TextObject>();
      mbList3.Add(new TextObject("{=UuypR3B4}{FIRSTNAME} of the Gourd"));
      mbList3.Add(new TextObject("{=T3x9hVg9}{FIRSTNAME} of the Chalice"));
      mbList3.Add(new TextObject("{=N6DvC4hN}{FIRSTNAME} of the Mirror"));
      mbList3.Add(new TextObject("{=QUFmBtbk}{FIRSTNAME} of the Sandal"));
      mbList3.Add(new TextObject("{=1gMfbcaO}{FIRSTNAME} of the Staff"));
      mbList3.Add(new TextObject("{=6M3mbAHQ}{FIRSTNAME} of the Rose"));
      mbList3.Add(new TextObject("{=YYYBGdh5}{FIRSTNAME} of the Lamp"));
      mbList3.Add(new TextObject("{=6qssnVgo}{FIRSTNAME} of the Pomegranate"));
      mbList3.Add(new TextObject("{=TOGBPjmO}{FIRSTNAME} of the Seal"));
      mbList3.Add(new TextObject("{=CQWKrd0a}{FIRSTNAME} of the Spinning-Wheel"));
      mbList3.Add(new TextObject("{=6ALN43LY}{FIRSTNAME} of the Bell"));
      mbList3.Add(new TextObject("{=TJKi43Hv}{FIRSTNAME} of the Scroll"));
      mbList3.Add(new TextObject("{=tzuN76ma}{FIRSTNAME} of the Axe"));
      mbList3.Add(new TextObject("{=fZXEqTIP}{FIRSTNAME} of the Plough"));
      mbList3.Add(new TextObject("{=TVRbkuhC}{FIRSTNAME} of the Trident"));
      mbList3.Add(new TextObject("{=SdK678BT}{FIRSTNAME} of the Cavern"));
      mbList3.Add(new TextObject("{=bu2rmgY1}{FIRSTNAME} of the Willow-Tree"));
      mbList3.Add(new TextObject("{=uyTmrmCW}{FIRSTNAME} of the Reeds"));
      mbList3.Add(new TextObject("{=YYyoYwH2}{FIRSTNAME} of the Pasture"));
      mbList3.Add(new TextObject("{=QskefraA}{FIRSTNAME} of the Ram"));
      mbList3.Add(new TextObject("{=TrGGbtS4}{FIRSTNAME} of the Dove"));
      mbList3.Add(new TextObject("{=glTzcivI}{FIRSTNAME} of the Spring"));
      mbList3.Add(new TextObject("{=fYe25aEt}{FIRSTNAME} of the Well"));
      mbList3.Add(new TextObject("{=TtaEimaV}{FIRSTNAME} of the Bridge"));
      mbList3.Add(new TextObject("{=TaouqUu7}{FIRSTNAME} of the Steps"));
      mbList3.Add(new TextObject("{=zrDWbEJR}{FIRSTNAME} of the Gate"));
      mbList3.Add(new TextObject("{=xdmhzukY}{FIRSTNAME} of the Hearth"));
      mbList3.Add(new TextObject("{=UBk50qwW}{FIRSTNAME} of the Mound"));
      mbList3.Add(new TextObject("{=4t5zOiVF}{FIRSTNAME} of the Pillar"));
      mbList3.Add(new TextObject("{=3raSG4Mi}{FIRSTNAME} of the Covenant"));
      mbList3.Add(new TextObject("{=bP3XdKK3}{FIRSTNAME} of the Dawn"));
      mbList3.Add(new TextObject("{=36ZmyM8V}{FIRSTNAME} of the Harvest"));
      mbList3.Add(new TextObject("{=G6BC8HXY}{FIRSTNAME} of the Leavening"));
      this._preacherNames = mbList3;
      MBList<TextObject> mbList4 = new MBList<TextObject>();
      mbList4.Add(new TextObject("{=KQ1js10G}{FIRSTNAME} the Appraiser"));
      mbList4.Add(new TextObject("{=4RWpqxwE}{FIRSTNAME} the Broker"));
      mbList4.Add(new TextObject("{=nunbdOY1}{FIRSTNAME} the Supplier"));
      mbList4.Add(new TextObject("{=3WYVggyD}{FIRSTNAME} the {?COASTAL}Mariner{?}Horsetrader{\\?}"));
      mbList4.Add(new TextObject("{=iCSVZj2e}{FIRSTNAME} the {?NORTHERN}Far-Farer{?}Caravanner{\\?}"));
      mbList4.Add(new TextObject("{=asePjBVy}{FIRSTNAME} the {?FEMALE}Freedwoman{?}Freedman{\\?}"));
      mbList4.Add(new TextObject("{=KiUVswtx}{FIRSTNAME} the Mercer"));
      mbList4.Add(new TextObject("{=wuMJobac}{FIRSTNAME} the Factor"));
      mbList4.Add(new TextObject("{=Jin8cj45}{FIRSTNAME} the Minter"));
      mbList4.Add(new TextObject("{=w290a2DV}{FIRSTNAME} the {?IMPERIAL}Sutler{?}Goodstrader{\\?}"));
      mbList4.Add(new TextObject("{=npuC7IBM}{FIRSTNAME} the Dyer"));
      mbList4.Add(new TextObject("{=tx7iJMnc}{FIRSTNAME} the Silkvendor"));
      mbList4.Add(new TextObject("{=BC4BC0ZC}{FIRSTNAME} the Spicetrader"));
      mbList4.Add(new TextObject("{=vp0FClX1}{FIRSTNAME} the Cargomaster"));
      mbList4.Add(new TextObject("{=8trsbRav}{FIRSTNAME} the {?FEMALE}Widow{?}Orphan{\\?}"));
      mbList4.Add(new TextObject("{=pbDr5JFs}{FIRSTNAME} the Steward"));
      mbList4.Add(new TextObject("{=AhiGlNRG}{FIRSTNAME} the {?NORTHERN}Furtrader{?}Incensetrader{\\?}"));
      this._merchantNames = mbList4;
      MBList<TextObject> mbList5 = new MBList<TextObject>();
      mbList5.Add(new TextObject("{=3TIbxe5d}{FIRSTNAME} the Brewer"));
      mbList5.Add(new TextObject("{=TX48zCzF}{FIRSTNAME} the Carpenter"));
      mbList5.Add(new TextObject("{=KDOFexQb}{FIRSTNAME} the Chandler"));
      mbList5.Add(new TextObject("{=Bsp30p3g}{FIRSTNAME} the Cooper"));
      mbList5.Add(new TextObject("{=npuC7IBM}{FIRSTNAME} the Dyer"));
      mbList5.Add(new TextObject("{=CpafrIbY}{FIRSTNAME} the Miller"));
      mbList5.Add(new TextObject("{=kiJxwqVh}{FIRSTNAME} the Wheeler"));
      mbList5.Add(new TextObject("{=tTFUSJoe}{FIRSTNAME} the Smith"));
      mbList5.Add(new TextObject("{=zE3sKAb2}{FIRSTNAME} the Turner"));
      mbList5.Add(new TextObject("{=gSmXyxue}{FIRSTNAME} the Tanner"));
      this._artisanNames = mbList5;
      MBList<TextObject> mbList6 = new MBList<TextObject>();
      mbList6.Add(new TextObject("{=5utDJYUv}{FIRSTNAME} the Knife"));
      mbList6.Add(new TextObject("{=TW4iKHCt}{FIRSTNAME} Foulbreath"));
      mbList6.Add(new TextObject("{=7h3wBoIt}Bloody {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=kJlOvZEm}Boss {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=Oq3OFXyC}Lucky {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=AZbJuZwF}{FIRSTNAME} Knucklebones"));
      mbList6.Add(new TextObject("{=yG0JIiaS}{FIRSTNAME} the Jackal"));
      mbList6.Add(new TextObject("{=aa1lM2MV}{FIRSTNAME} the Angel"));
      mbList6.Add(new TextObject("{=EUJlNTrf}Pretty {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=EnaT6Ma3}{FIRSTNAME} the Cat"));
      mbList6.Add(new TextObject("{=Bk62qb7O}Ironskull {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=rFESkhK0}{FIRSTNAME} the Slicer"));
      mbList6.Add(new TextObject("{=pL3s39hv}Clever {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=nNUZOwhb}Redeye {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=xudfzjgJ}Little {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=awCsv4UM}Tiny {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=u9LBrZnr}{FIRSTNAME} the Shark"));
      mbList6.Add(new TextObject("{=uBT9fuIi}Snake-eyes {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=UAXaL9ro}Leadfoot {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=DCF2JOiJ}Stonehead {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=A5Gw3GNn}{FIRSTNAME} the Malady"));
      mbList6.Add(new TextObject("{=aqp9ZtXb}{FIRSTNAME} the Wart"));
      mbList6.Add(new TextObject("{=FrLta5zf}{FIRSTNAME} the Fist"));
      mbList6.Add(new TextObject("{=L6N2YLa6}{FIRSTNAME} the Finger"));
      mbList6.Add(new TextObject("{=VtjMGTWH}{FIRSTNAME} the Scorpion"));
      mbList6.Add(new TextObject("{=3JOd0l1N}{FIRSTNAME} the Spider"));
      mbList6.Add(new TextObject("{=ynwbmuoG}{FIRSTNAME} the Viper"));
      mbList6.Add(new TextObject("{=K4MRSU6i}Sleepy {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=6jrl3Rbb}{FIRSTNAME} Fishsauce"));
      mbList6.Add(new TextObject("{=6gjSupBN}{FIRSTNAME} Mutton-pie"));
      mbList6.Add(new TextObject("{=y4vyNZxg}{FIRSTNAME} Sourwine"));
      mbList6.Add(new TextObject("{=qhe6SGa3}{FIRSTNAME} Stewbones"));
      mbList6.Add(new TextObject("{=c7cdMWA3}Buttermilk {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=bqXpBNvF}Cinnamon {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=lwLhrGWV}{FIRSTNAME} Flatcakes"));
      mbList6.Add(new TextObject("{=r9Tp4UGy}Honeytongue {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=MRJ06SU7}{FIRSTNAME} the Thorn"));
      mbList6.Add(new TextObject("{=6tBhhNaC}{FIRSTNAME} Rottentooth"));
      mbList6.Add(new TextObject("{=Z48lYHBl}{FIRSTNAME} the Lamb"));
      mbList6.Add(new TextObject("{=z8LbFyNA}Dogface {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=qezuzVuY}{FIRSTNAME} the Goat"));
      mbList6.Add(new TextObject("{=JiAmC0NZ}{FIRSTNAME} the Mule"));
      mbList6.Add(new TextObject("{=qmwv27To}{FIRSTNAME} the Mouse"));
      mbList6.Add(new TextObject("{=ajePb62s}Quicksilver {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=3NROvpcO}Slowhand {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=zo13Dkoh}Crushfinger {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=9Sa3bzlE}{FIRSTNAME} the Anvil"));
      mbList6.Add(new TextObject("{=FSa61zD4}{FIRSTNAME} the Hammer"));
      mbList6.Add(new TextObject("{=WzBo28iT}{FIRSTNAME} the Scythe"));
      mbList6.Add(new TextObject("{=MaK0r9as}{FIRSTNAME} the Cudgel"));
      mbList6.Add(new TextObject("{=gbAztaSq}{FIRSTNAME} the Gutting-Knife"));
      mbList6.Add(new TextObject("{=tI8aoxXC}{FIRSTNAME} the Needle"));
      mbList6.Add(new TextObject("{=4ATx01zS}{FIRSTNAME} the Rock"));
      mbList6.Add(new TextObject("{=1Tft1d4A}{FIRSTNAME} the Boulder"));
      mbList6.Add(new TextObject("{=3qjJzjZb}{FIRSTNAME} the Beetle"));
      mbList6.Add(new TextObject("{=0B6HlgnN}{FIRSTNAME} the Lizard"));
      mbList6.Add(new TextObject("{=2wixoeOF}Hairy {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=NTPVzs9z}Poxy {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=chiIHo4b}Mangy {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=aIaRIsw4}Scabby {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=ubZmYdMn}Rancid {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=xTtHdTsS}Poison {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=uO99raT7}Snotnose {FIRSTNAME}"));
      mbList6.Add(new TextObject("{=t968gMty}{FIRSTNAME} the {?FEMALE}Lady{?}Bastard{\\?}"));
      mbList6.Add(new TextObject("{=lkLNrscj}{FIRSTNAME} the {?FEMALE}Maid{?}Steward{\\?}"));
      mbList6.Add(new TextObject("{=ujDbk6Qa}{FIRSTNAME} the {?FEMALE}Widow{?}Widow-maker{\\?}"));
      mbList6.Add(new TextObject("{=fh1auwJW}{FIRSTNAME} the {?FEMALE}She-Wolf{?}Stallion{\\?}"));
      this._gangLeaderNames = mbList6;
    }

    public MBReadOnlyList<TextObject> GetNameListForCulture(CultureObject npcCulture, bool isFemale)
    {
      MBReadOnlyList<TextObject> nameListForCulture = isFemale ? (MBReadOnlyList<TextObject>) this._imperialNamesFemale : (MBReadOnlyList<TextObject>) this._imperialNamesMale;
      if (isFemale)
      {
        if (!npcCulture.FemaleNameList.IsEmpty<TextObject>())
          nameListForCulture = npcCulture.FemaleNameList;
      }
      else if (!npcCulture.MaleNameList.IsEmpty<TextObject>())
        nameListForCulture = npcCulture.MaleNameList;
      return nameListForCulture;
    }

    private TextObject[] GetClanNameListForCulture(CultureObject clanCulture)
    {
      TextObject[] nameListForCulture = (TextObject[]) null;
      if (!clanCulture.ClanNameList.IsEmpty<TextObject>())
        nameListForCulture = clanCulture.ClanNameList.ToArray();
      else
        Debug.FailedAssert("Missing culture in clan name generation", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\NameGenerator.cs", nameof (GetClanNameListForCulture), 810);
      return nameListForCulture;
    }

    public void AddName(TextObject name)
    {
      int nameCode = this.CreateNameCode(name);
      if (this._nameCodeAndCount == null)
        return;
      int num;
      if (this._nameCodeAndCount.TryGetValue(nameCode, out num))
        this._nameCodeAndCount[nameCode] = num + 1;
      else
        this._nameCodeAndCount.Add(nameCode, 1);
    }

    private int CreateNameCode(TextObject name) => name.GetValueHashCode();

    private int CalculateNameScore(Hero hero, TextObject name)
    {
      int nameScore = 5000;
      IEnumerable<Hero> heroes;
      if (hero != null)
      {
        if (hero.IsNotable)
        {
          if (hero.IsMerchant && hero.OwnedWorkshops.Count > 0)
          {
            List<Hero> heroList = new List<Hero>();
            foreach (Town allTown in (List<Town>) Town.AllTowns)
            {
              foreach (Workshop workshop in allTown.Workshops)
              {
                if (workshop.Owner != hero && workshop.WorkshopType == hero.OwnedWorkshops[0].WorkshopType)
                  heroList.Add(workshop.Owner);
              }
            }
            heroes = (IEnumerable<Hero>) heroList;
          }
          else
            heroes = (IEnumerable<Hero>) hero.BornSettlement.Notables;
        }
        else
          heroes = hero.Template == null || hero.Occupation != Occupation.Wanderer ? (hero.Clan == null || hero.Occupation != Occupation.Lord ? (IEnumerable<Hero>) new List<Hero>() : (IEnumerable<Hero>) hero.Clan.Lords) : Hero.AllAliveHeroes.WhereQ<Hero>((Func<Hero, bool>) (h => hero.Template.Equals((object) h.Template)));
      }
      else
        heroes = (IEnumerable<Hero>) new List<Hero>();
      foreach (Hero hero1 in heroes)
      {
        if (hero1 != null)
        {
          if (name.HasSameValue(hero1.Name))
            nameScore -= 500;
          if (name.HasSameValue(hero1.FirstName))
            nameScore -= 1000;
        }
      }
      int num;
      if (this._nameCodeAndCount.TryGetValue(this.CreateNameCode(name), out num))
        nameScore -= num;
      return nameScore;
    }

    private int SelectNameIndex(
      Hero hero,
      MBReadOnlyList<TextObject> nameList,
      uint deterministicIndex,
      bool useDeterministicValues)
    {
      int num1 = (useDeterministicValues ? hero.HomeSettlement.RandomIntWithSeed(deterministicIndex) : MBRandom.RandomInt()) % nameList.Count;
      int num2 = 0;
      int num3 = int.MinValue;
      for (int index1 = 0; index1 < nameList.Count; ++index1)
      {
        int index2 = (index1 + num1) % nameList.Count;
        TextObject name = nameList[index2];
        int nameScore = this.CalculateNameScore(hero, name);
        if (num3 < nameScore)
        {
          num3 = nameScore;
          num2 = index2;
        }
      }
      return num2;
    }
  }
}
