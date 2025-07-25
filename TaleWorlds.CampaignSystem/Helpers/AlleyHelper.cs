using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

namespace Helpers
{
  public static class AlleyHelper
  {
    // 打开管理巷子的界面
    public static void OpenScreenForManagingAlley(
      TroopRoster leftMemberRoster, // 左侧队伍列表
      PartyPresentationDoneButtonDelegate onDoneButtonClicked, // 完成按钮点击后的回调函数
      TextObject leftText, // 界面左侧的文本
      PartyPresentationCancelButtonDelegate onCancelButtonClicked = null) // 取消按钮点击后的回调函数（可选）
    {
      // 调用PartyScreenManager的方法打开管理巷子的界面，传入相关参数
      PartyScreenManager.OpenScreenForManagingAlley(leftMemberRoster, new IsTroopTransferableDelegate(AlleyHelper.IsTroopTransferable), new PartyPresentationDoneButtonConditionDelegate(AlleyHelper.DoneButtonCondition), onDoneButtonClicked, leftText, onCancelButtonClicked);
    }

    // 判断完成按钮是否可以点击
    private static Tuple<bool, TextObject> DoneButtonCondition(
      TroopRoster leftMemberRoster, // 左侧队伍列表
      TroopRoster leftPrisonRoster, // 左侧囚犯列表
      TroopRoster rightMemberRoster, // 右侧队伍列表
      TroopRoster rightPrisonRoster, // 右侧囚犯列表
      int lefLimitNum, // 左侧队伍限制数量
      int rightLimitNum) // 右侧队伍限制数量
    {
      // 如果左侧队伍人数超过了玩家拥有的巷子最大部队数量
      if (leftMemberRoster.TotalRegulars > Campaign.Current.Models.AlleyModel.MaximumTroopCountInPlayerOwnedAlley)
      {
        // 显示提示信息，提示玩家不能转移超过最大限制的部队数量
        TextObject textObject = new TextObject("{=5Y4rnaDX}You can not transfer more than {UPPER_LIMIT} troops");
        textObject.SetTextVariable("UPPER_LIMIT", Campaign.Current.Models.AlleyModel.MaximumTroopCountInPlayerOwnedAlley);
        return new Tuple<bool, TextObject>(false, textObject);
      }
      // 如果左侧队伍人数满足了巷子的最小部队数量要求
      if (leftMemberRoster.TotalRegulars >= Campaign.Current.Models.AlleyModel.MinimumTroopCountInPlayerOwnedAlley)
        return new Tuple<bool, TextObject>(true, TextObject.Empty); // 完成按钮可以点击
      // 如果左侧队伍人数不足最小限制，显示提示信息
      TextObject textObject1 = new TextObject("{=v5HPLGXs}You can not transfer less than {LOWER_LIMIT} troops");
      textObject1.SetTextVariable("LOWER_LIMIT", Campaign.Current.Models.AlleyModel.MinimumTroopCountInPlayerOwnedAlley);
      return new Tuple<bool, TextObject>(false, textObject1); // 完成按钮不可点击
    }

    // 判断部队是否可以转移
    private static bool IsTroopTransferable(
      CharacterObject character, // 部队对象
      PartyScreenLogic.TroopType type, // 部队类型
      PartyScreenLogic.PartyRosterSide side, // 队伍的哪一侧
      PartyBase leftOwnerParty) // 左侧队伍的所有者
    {
      // 返回部队是否不是英雄且不是囚犯
      return !character.IsHero && type != PartyScreenLogic.TroopType.Prisoner;
    }

    // 为选择家族成员管理巷子创建多选弹窗
    public static void CreateMultiSelectionInquiryForSelectingClanMemberToAlley(
      Alley alley, // 巷子对象
      Action<List<InquiryElement>> affirmativeAction, // 确定操作
      Action<List<InquiryElement>> negativeAction) // 取消操作
    {
      List<InquiryElement> inquiryElements = new List<InquiryElement>(); // 创建用于存储选项的列表
      // 遍历获取可以管理巷子的家族成员及其可用性信息
      foreach ((Hero hero, DefaultAlleyModel.AlleyMemberAvailabilityDetail detail) in Campaign.Current.Models.AlleyModel.GetClanMembersAndAvailabilityDetailsForLeadingAnAlley(alley))
      {
        // 获取英雄不能参与的原因文本
        TextObject reasonTextForHero = Campaign.Current.Models.AlleyModel.GetDisabledReasonTextForHero(hero, alley, detail);
        // 添加一个查询选项，包括英雄信息、可用性以及原因
        inquiryElements.Add(new InquiryElement((object) hero.CharacterObject, hero.Name.ToString(), new ImageIdentifier(CharacterCode.CreateFrom((BasicCharacterObject) hero.CharacterObject)), detail == DefaultAlleyModel.AlleyMemberAvailabilityDetail.Available || detail == DefaultAlleyModel.AlleyMemberAvailabilityDetail.AvailableWithDelay, reasonTextForHero.ToString()));
      }
      // 显示多选查询弹窗，传入标题、描述、选项列表以及确定和取消操作
      MBInformationManager.ShowMultiSelectionInquiry(new MultiSelectionInquiryData(new TextObject("{=FLXzhZCo}Select companion").ToString(), new TextObject("{=QGlhXD4F}Select a companion to lead this alley.").ToString(), inquiryElements, true, 1, 1, GameTexts.FindText("str_done").ToString(), new TextObject("{=3CpNUnVl}Cancel").ToString(), affirmativeAction, negativeAction), true);
    }
  }
}
