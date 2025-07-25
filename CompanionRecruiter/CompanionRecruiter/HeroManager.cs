// Decompiled with JetBrains decompiler
// Type: CompanionRecruiter.HeroManager
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using System;
using System.Collections.Generic;
using System.Linq;

#nullable enable
namespace CompanionRecruiter
{
  public static class HeroManager
  {
    public static Dictionary<string, List<CompanionStruct>> CompanionDictionary = new Dictionary<string, List<CompanionStruct>>();
    public const string Scout = "Scout";
    public const string Surgeon = "Surgeon";
    public const string Engineer = "Engineer";
    public const string Quartermaster = "Quartermaster";

    public static void AddCompanion(string clanId, string heroId, string roleId)
    {
      if (!HeroManager.CompanionDictionary.ContainsKey(clanId))
        HeroManager.CompanionDictionary[clanId] = new List<CompanionStruct>();
      HeroManager.CompanionDictionary[clanId].Add(new CompanionStruct(heroId, roleId));
    }

    public static bool HasRoleCompanion(string clanId, string roleId)
    {
      return HeroManager.CompanionDictionary.ContainsKey(clanId) && HeroManager.CompanionDictionary[clanId].Any<CompanionStruct>((Func<CompanionStruct, bool>) (c => c.RoleId.Equals(roleId)));
    }

    public static string GetRoleCompanionId(string clanId, string roleId)
    {
      return !HeroManager.CompanionDictionary.ContainsKey(clanId) ? "not hero" : HeroManager.CompanionDictionary[clanId].Find((Predicate<CompanionStruct>) (c => c.RoleId.Equals(roleId))).HeroId;
    }

    public static List<CompanionStruct> GetCompanions(string key)
    {
      List<CompanionStruct> companionStructList;
      return HeroManager.CompanionDictionary.TryGetValue(key, out companionStructList) ? companionStructList : new List<CompanionStruct>();
    }
  }
}
