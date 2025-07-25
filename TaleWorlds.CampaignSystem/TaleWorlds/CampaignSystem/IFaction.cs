// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.IFaction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  [SaveableInterface(22001)]
  public interface IFaction
  {
    TextObject Name { get; }

    string StringId { get; }

    MBGUID Id { get; }

    TextObject InformalName { get; }

    string EncyclopediaLink { get; }

    TextObject EncyclopediaLinkWithName { get; }

    TextObject EncyclopediaText { get; }

    CultureObject Culture { get; }

    Vec2 InitialPosition { get; }

    uint LabelColor { get; }

    uint Color { get; }

    uint Color2 { get; }

    uint AlternativeColor { get; }

    uint AlternativeColor2 { get; }

    CharacterObject BasicTroop { get; }

    Hero Leader { get; }

    Banner Banner { get; }

    MBReadOnlyList<Settlement> Settlements { get; }

    MBReadOnlyList<Town> Fiefs { get; }

    MBReadOnlyList<Hero> Lords { get; }

    MBReadOnlyList<Hero> Heroes { get; }

    MBReadOnlyList<WarPartyComponent> WarPartyComponents { get; }

    bool IsBanditFaction { get; }

    bool IsMinorFaction { get; }

    bool IsKingdomFaction { get; }

    bool IsRebelClan { get; }

    bool IsClan { get; }

    bool IsOutlaw { get; }

    bool IsMapFaction { get; }

    IFaction MapFaction { get; }

    float TotalStrength { get; }

    Settlement FactionMidSettlement { get; }

    float DistanceToClosestNonAllyFortification { get; }

    bool IsAtWarWith(IFaction other);

    StanceLink GetStanceWith(IFaction other);

    IEnumerable<StanceLink> Stances { get; }

    int TributeWallet { get; set; }

    float MainHeroCrimeRating { get; set; }

    float DailyCrimeRatingChange { get; }

    float Aggressiveness { get; }

    bool IsEliminated { get; }

    ExplainedNumber DailyCrimeRatingChangeExplained { get; }

    CampaignTime NotAttackableByPlayerUntilTime { get; set; }
  }
}
