// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.KingdomCreationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class KingdomCreationModel : GameModel
  {
    public abstract int MinimumClanTierToCreateKingdom { get; }

    public abstract int MinimumNumberOfSettlementsOwnedToCreateKingdom { get; }

    public abstract int MinimumTroopCountToCreateKingdom { get; }

    public abstract int MaximumNumberOfInitialPolicies { get; }

    public abstract bool IsPlayerKingdomCreationPossible(out List<TextObject> explanations);

    public abstract bool IsPlayerKingdomAbdicationPossible(out List<TextObject> explanations);

    public abstract IEnumerable<CultureObject> GetAvailablePlayerKingdomCultures();
  }
}
