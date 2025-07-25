// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.IEducationLogic
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface IEducationLogic
  {
    void Finalize(Hero child, List<string> chosenOptions);

    void GetOptionProperties(
      Hero child,
      string optionKey,
      List<string> previousChoices,
      out TextObject optionTitle,
      out TextObject description,
      out TextObject effect,
      out (CharacterAttribute, int)[] attributes,
      out (SkillObject, int)[] skills,
      out (SkillObject, int)[] focusPoints,
      out EducationCampaignBehavior.EducationCharacterProperties[] characterProperties);

    void GetPageProperties(
      Hero child,
      List<string> previousChoices,
      out TextObject title,
      out TextObject description,
      out TextObject instruction,
      out EducationCampaignBehavior.EducationCharacterProperties[] defaultProperties,
      out string[] availableOptions);

    void GetStageProperties(Hero child, out int pageCount);

    bool IsValidEducationNotification(EducationMapNotification educationMapNotification);
  }
}
