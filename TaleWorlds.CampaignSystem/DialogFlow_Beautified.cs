using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.Core;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem
{
    /// <summary>
    /// 对话流程构建器 - 提供流式API来创建和管理游戏中的对话流程
    /// </summary>
    /// <remarks>
    /// 这个类实现了一个流式接口(fluent interface)，允许开发者以链式调用的方式构建复杂的对话流程。
    /// 支持玩家和NPC的对话选项、条件判断、后续效果处理等功能。
    /// 
    /// 技术架构：
    /// - 采用建造者模式(Builder Pattern)来构建对话流程
    /// - 使用令牌(token)系统来管理对话状态和流程控制
    /// - 支持嵌套的选项上下文(DialogFlowContext)
    /// - 提供丰富的委托类型来处理条件判断和后续效果
    /// 
    /// 核心功能：
    /// - 对话行管理：添加玩家和NPC的对话行
    /// - 选项系统：创建可选择的对话选项
    /// - 条件判断：基于游戏状态决定对话是否显示
    /// - 后续效果：对话选择后的游戏状态变更
    /// - 变化支持：为对话行添加多种变化形式
    /// </remarks>
    public class DialogFlow
    {
        /// <summary>
        /// 对话流程构建器的私有构造函数
        /// </summary>
        /// <param name="startingToken">对话的起始令牌</param>
        /// <param name="priority">对话优先级，默认为100</param>
        /// <remarks>
        /// 私有构造函数确保只能通过CreateDialogFlow静态方法创建实例
        /// </remarks>
        private DialogFlow(string startingToken, int priority = 100)
        {
            this._currentToken = startingToken;
            this.Priority = priority;
        }

        /// <summary>
        /// 添加对话行的内部方法
        /// </summary>
        /// <param name="text">对话文本内容</param>
        /// <param name="byPlayer">是否为玩家对话</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <param name="isRepeatable">是否可重复</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// 这是添加对话行的核心方法，所有公开的对话行添加方法都基于此方法实现。
        /// 会自动创建新的输出令牌并更新当前令牌。
        /// </remarks>
        private DialogFlow Line(TextObject text, bool byPlayer, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null, bool isRepeatable = false)
        {
            string text2 = Campaign.Current.ConversationManager.CreateToken();
            this.AddLine(text, this._currentToken, text2, byPlayer, speakerDelegate, listenerDelegate, isRepeatable, false);
            this._currentToken = text2;
            return this;
        }

        /// <summary>
        /// 为最后添加的对话行添加变化形式
        /// </summary>
        /// <param name="text">变化文本内容</param>
        /// <param name="propertiesAndWeights">属性和权重数组</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// 允许为同一对话行添加多种变化形式，基于属性和权重进行选择。
        /// 参数格式：交替的属性名和权重值（如："tag1", 1, "tag2", 2）
        /// </remarks>
        public DialogFlow Variation(string text, params object[] propertiesAndWeights)
        {
            return this.Variation(new TextObject(text, null), propertiesAndWeights);
        }

        /// <summary>
        /// 为最后添加的对话行添加变化形式（TextObject版本）
        /// </summary>
        /// <param name="text">变化文本内容</param>
        /// <param name="propertiesAndWeights">属性和权重数组</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// TextObject版本支持更复杂的本地化文本处理
        /// </remarks>
        public DialogFlow Variation(TextObject text, params object[] propertiesAndWeights)
        {
            for (int i = 0; i < propertiesAndWeights.Length; i += 2)
            {
                string tagName = (string)propertiesAndWeights[i];
                int weight = Convert.ToInt32(propertiesAndWeights[i + 1]);
                List<GameTextManager.ChoiceTag> list = new List<GameTextManager.ChoiceTag>();
                list.Add(new GameTextManager.ChoiceTag(tagName, weight));
                this.Lines[this.Lines.Count - 1].AddVariation(text, list);
            }
            return this;
        }

        /// <summary>
        /// 添加NPC对话行（字符串版本）
        /// </summary>
        /// <param name="npcText">NPC对话文本</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// 简化的NPC对话行添加方法，使用字符串作为文本输入
        /// </remarks>
        public DialogFlow NpcLine(string npcText, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            return this.NpcLine(new TextObject(npcText, null), speakerDelegate, listenerDelegate);
        }

        /// <summary>
        /// 添加NPC对话行（TextObject版本）
        /// </summary>
        /// <param name="npcText">NPC对话文本</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// TextObject版本支持更复杂的本地化文本处理
        /// </remarks>
        public DialogFlow NpcLine(TextObject npcText, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            return this.Line(npcText, false, speakerDelegate, listenerDelegate, false);
        }

        /// <summary>
        /// 添加带变化的NPC对话行（字符串版本）
        /// </summary>
        /// <param name="npcText">NPC对话文本</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// 创建一个空的对话行并为其添加变化形式，适用于需要多种NPC回应的场景
        /// </remarks>
        public DialogFlow NpcLineWithVariation(string npcText, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            DialogFlow result = this.Line(TextObject.Empty, false, speakerDelegate, listenerDelegate, false);
            List<GameTextManager.ChoiceTag> list = new List<GameTextManager.ChoiceTag>();
            list.Add(new GameTextManager.ChoiceTag("DefaultTag", 1));
            this.Lines[this.Lines.Count - 1].AddVariation(new TextObject(npcText, null), list);
            return result;
        }

        /// <summary>
        /// 添加带变化的NPC对话行（TextObject版本）
        /// </summary>
        /// <param name="npcText">NPC对话文本</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow NpcLineWithVariation(TextObject npcText, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            DialogFlow result = this.Line(TextObject.Empty, false, speakerDelegate, listenerDelegate, false);
            List<GameTextManager.ChoiceTag> list = new List<GameTextManager.ChoiceTag>();
            list.Add(new GameTextManager.ChoiceTag("DefaultTag", 1));
            this.Lines[this.Lines.Count - 1].AddVariation(npcText, list);
            return result;
        }

        /// <summary>
        /// 添加玩家对话行（字符串版本）
        /// </summary>
        /// <param name="playerText">玩家对话文本</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow PlayerLine(string playerText, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            return this.Line(new TextObject(playerText, null), true, null, listenerDelegate, false);
        }

        /// <summary>
        /// 添加玩家对话行（TextObject版本）
        /// </summary>
        /// <param name="playerText">玩家对话文本</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow PlayerLine(TextObject playerText, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            return this.Line(playerText, true, null, listenerDelegate, false);
        }

        /// <summary>
        /// 开始选项组的内部方法
        /// </summary>
        /// <param name="byPlayer">是否为玩家选项</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// 创建新的对话流程上下文，支持嵌套的选项组结构
        /// </remarks>
        private DialogFlow BeginOptions(bool byPlayer)
        {
            this._curDialogFlowContext = new DialogFlowContext(this._currentToken, byPlayer, this._curDialogFlowContext);
            return this;
        }

        /// <summary>
        /// 开始玩家选项组
        /// </summary>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow BeginPlayerOptions()
        {
            return this.BeginOptions(true);
        }

        /// <summary>
        /// 开始NPC选项组
        /// </summary>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow BeginNpcOptions()
        {
            return this.BeginOptions(false);
        }

        /// <summary>
        /// 添加对话选项的内部方法
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="byPlayer">是否为玩家选项</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <param name="isRepeatable">是否可重复</param>
        /// <param name="isSpecialOption">是否为特殊选项</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        private DialogFlow Option(TextObject text, bool byPlayer, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null, bool isRepeatable = false, bool isSpecialOption = false)
        {
            string text2 = Campaign.Current.ConversationManager.CreateToken();
            this.AddLine(text, this._curDialogFlowContext.Token, text2, byPlayer, speakerDelegate, listenerDelegate, isRepeatable, isSpecialOption);
            this._currentToken = text2;
            return this;
        }

        /// <summary>
        /// 添加玩家选项（字符串版本）
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow PlayerOption(string text, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            return this.PlayerOption(new TextObject(text, null), listenerDelegate);
        }

        /// <summary>
        /// 添加玩家选项（TextObject版本）
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow PlayerOption(TextObject text, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            this.Option(text, true, null, listenerDelegate, false, false);
            return this;
        }

        /// <summary>
        /// 添加玩家特殊选项
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// 特殊选项通常用于UI中的特殊功能按钮
        /// </remarks>
        public DialogFlow PlayerSpecialOption(TextObject text, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            this.Option(text, true, null, listenerDelegate, false, true);
            return this;
        }

        /// <summary>
        /// 添加玩家可重复选项
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        /// <remarks>
        /// 可重复选项允许玩家多次选择同一选项
        /// </remarks>
        public DialogFlow PlayerRepeatableOption(TextObject text, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            this.Option(text, true, null, listenerDelegate, true, false);
            return this;
        }

        /// <summary>
        /// 添加NPC选项（字符串版本）
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="conditionDelegate">条件委托</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow NpcOption(string text, ConversationSentence.OnConditionDelegate conditionDelegate, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            this.Option(new TextObject(text, null), false, speakerDelegate, listenerDelegate, false, false);
            this._lastLine.ConditionDelegate = conditionDelegate;
            return this;
        }

        /// <summary>
        /// 添加NPC选项（TextObject版本）
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="conditionDelegate">条件委托</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow NpcOption(TextObject text, ConversationSentence.OnConditionDelegate conditionDelegate, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            this.Option(text, false, speakerDelegate, listenerDelegate, false, false);
            this._lastLine.ConditionDelegate = conditionDelegate;
            return this;
        }

        /// <summary>
        /// 添加带变化的NPC选项（字符串版本）
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="conditionDelegate">条件委托</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow NpcOptionWithVariation(string text, ConversationSentence.OnConditionDelegate conditionDelegate, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            this.NpcOptionWithVariation(new TextObject(text, null), conditionDelegate, speakerDelegate, listenerDelegate);
            return this;
        }

        /// <summary>
        /// 添加带变化的NPC选项（TextObject版本）
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <param name="conditionDelegate">条件委托</param>
        /// <param name="speakerDelegate">说话者委托（可选）</param>
        /// <param name="listenerDelegate">聆听者委托（可选）</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow NpcOptionWithVariation(TextObject text, ConversationSentence.OnConditionDelegate conditionDelegate, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            this.Option(TextObject.Empty, false, speakerDelegate, listenerDelegate, false, false);
            List<GameTextManager.ChoiceTag> list = new List<GameTextManager.ChoiceTag>();
            list.Add(new GameTextManager.ChoiceTag("DefaultTag", 1));
            this._lastLine.AddVariation(text, list);
            this._lastLine.ConditionDelegate = conditionDelegate;
            return this;
        }

        /// <summary>
        /// 结束选项组的内部方法
        /// </summary>
        /// <param name="byPlayer">是否为玩家选项</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        private DialogFlow EndOptions(bool byPlayer)
        {
            this._curDialogFlowContext = this._curDialogFlowContext.Parent;
            return this;
        }

        /// <summary>
        /// 结束玩家选项组
        /// </summary>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow EndPlayerOptions()
        {
            return this.EndOptions(true);
        }

        /// <summary>
        /// 结束NPC选项组
        /// </summary>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow EndNpcOptions()
        {
            return this.EndOptions(false);
        }

        /// <summary>
        /// 为最后添加的对话行设置条件
        /// </summary>
        /// <param name="conditionDelegate">条件委托</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow Condition(ConversationSentence.OnConditionDelegate conditionDelegate)
        {
            this._lastLine.ConditionDelegate = conditionDelegate;
            return this;
        }

        /// <summary>
        /// 为最后添加的对话行设置可点击条件
        /// </summary>
        /// <param name="clickableConditionDelegate">可点击条件委托</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow ClickableCondition(ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate)
        {
            this._lastLine.ClickableConditionDelegate = clickableConditionDelegate;
            return this;
        }

        /// <summary>
        /// 为最后添加的对话行设置后续效果
        /// </summary>
        /// <param name="consequenceDelegate">后续效果委托</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow Consequence(ConversationSentence.OnConsequenceDelegate consequenceDelegate)
        {
            this._lastLine.ConsequenceDelegate = consequenceDelegate;
            return this;
        }

        /// <summary>
        /// 创建对话流程的静态工厂方法
        /// </summary>
        /// <param name="inputToken">输入令牌，如果为null则自动创建</param>
        /// <param name="priority">对话优先级，默认为100</param>
        /// <returns>新的DialogFlow实例</returns>
        public static DialogFlow CreateDialogFlow(string inputToken = null, int priority = 100)
        {
            return new DialogFlow(inputToken ?? Campaign.Current.ConversationManager.CreateToken(), priority);
        }

        /// <summary>
        /// 添加对话行的内部方法
        /// </summary>
        /// <param name="text">对话文本</param>
        /// <param name="inputToken">输入令牌</param>
        /// <param name="outputToken">输出令牌</param>
        /// <param name="byPlayer">是否为玩家对话</param>
        /// <param name="speakerDelegate">说话者委托</param>
        /// <param name="listenerDelegate">聆听者委托</param>
        /// <param name="isRepeatable">是否可重复</param>
        /// <param name="isSpecialOption">是否为特殊选项</param>
        /// <returns>创建的对话行</returns>
        private DialogFlowLine AddLine(TextObject text, string inputToken, string outputToken, bool byPlayer, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate, bool isRepeatable, bool isSpecialOption = false)
        {
            DialogFlowLine dialogFlowLine = new DialogFlowLine();
            dialogFlowLine.Text = text;
            dialogFlowLine.InputToken = inputToken;
            dialogFlowLine.OutputToken = outputToken;
            dialogFlowLine.ByPlayer = byPlayer;
            dialogFlowLine.SpeakerDelegate = speakerDelegate;
            dialogFlowLine.ListenerDelegate = listenerDelegate;
            dialogFlowLine.IsRepeatable = isRepeatable;
            dialogFlowLine.IsSpecialOption = isSpecialOption;
            this.Lines.Add(dialogFlowLine);
            this._lastLine = dialogFlowLine;
            return dialogFlowLine;
        }

        /// <summary>
        /// 添加NPC默认选项
        /// </summary>
        /// <param name="text">选项文本</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow NpcDefaultOption(string text)
        {
            return this.NpcOption(text, null, null, null);
        }

        /// <summary>
        /// 跳转到指定的对话状态
        /// </summary>
        /// <param name="input">目标状态令牌</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow GotoDialogState(string input)
        {
            this._lastLine.OutputToken = input;
            this._currentToken = input;
            return this;
        }

        /// <summary>
        /// 获取最后添加对话行的输出令牌
        /// </summary>
        /// <param name="oState">输出状态令牌</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow GetOutputToken(out string oState)
        {
            oState = this._lastLine.OutputToken;
            return this;
        }

        /// <summary>
        /// 返回到指定的对话状态
        /// </summary>
        /// <param name="iState">目标状态令牌</param>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow GoBackToDialogState(string iState)
        {
            this._currentToken = iState;
            return this;
        }

        /// <summary>
        /// 关闭对话
        /// </summary>
        /// <returns>当前DialogFlow实例，支持链式调用</returns>
        public DialogFlow CloseDialog()
        {
            this.GotoDialogState("close_window");
            return this;
        }

        /// <summary>
        /// 添加对话行到对话管理器
        /// </summary>
        /// <param name="dialogLine">对话行</param>
        /// <returns>添加的对话行</returns>
        private ConversationSentence AddDialogLine(ConversationSentence dialogLine)
        {
            Campaign.Current.ConversationManager.AddDialogLine(dialogLine);
            return dialogLine;
        }

        /// <summary>
        /// 添加玩家对话行到对话管理器
        /// </summary>
        /// <param name="id">对话行ID</param>
        /// <param name="inputToken">输入令牌</param>
        /// <param name="outputToken">输出令牌</param>
        /// <param name="text">对话文本</param>
        /// <param name="conditionDelegate">条件委托</param>
        /// <param name="consequenceDelegate">后续效果委托</param>
        /// <param name="relatedObject">相关对象</param>
        /// <param name="priority">优先级</param>
        /// <param name="clickableConditionDelegate">可点击条件委托</param>
        /// <param name="persuasionOptionDelegate">说服选项委托</param>
        /// <param name="speakerDelegate">说话者委托</param>
        /// <param name="listenerDelegate">聆听者委托</param>
        /// <returns>创建的对话行</returns>
        public ConversationSentence AddPlayerLine(string id, string inputToken, string outputToken, string text, ConversationSentence.OnConditionDelegate conditionDelegate, ConversationSentence.OnConsequenceDelegate consequenceDelegate, object relatedObject, int priority = 100, ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate = null, ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            return this.AddDialogLine(new ConversationSentence(id, new TextObject(text, null), inputToken, outputToken, conditionDelegate, clickableConditionDelegate, consequenceDelegate, 1U, priority, 0, 0, relatedObject, false, speakerDelegate, listenerDelegate, persuasionOptionDelegate));
        }

        /// <summary>
        /// 添加通用对话行到对话管理器
        /// </summary>
        /// <param name="id">对话行ID</param>
        /// <param name="inputToken">输入令牌</param>
        /// <param name="outputToken">输出令牌</param>
        /// <param name="text">对话文本</param>
        /// <param name="conditionDelegate">条件委托</param>
        /// <param name="consequenceDelegate">后续效果委托</param>
        /// <param name="relatedObject">相关对象</param>
        /// <param name="priority">优先级</param>
        /// <param name="clickableConditionDelegate">可点击条件委托</param>
        /// <param name="speakerDelegate">说话者委托</param>
        /// <param name="listenerDelegate">聆听者委托</param>
        /// <returns>创建的对话行</returns>
        public ConversationSentence AddDialogLine(string id, string inputToken, string outputToken, string text, ConversationSentence.OnConditionDelegate conditionDelegate, ConversationSentence.OnConsequenceDelegate consequenceDelegate, object relatedObject, int priority = 100, ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null, ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null)
        {
            return this.AddDialogLine(new ConversationSentence(id, new TextObject(text, null), inputToken, outputToken, conditionDelegate, clickableConditionDelegate, consequenceDelegate, 0U, priority, 0, 0, relatedObject, false, speakerDelegate, listenerDelegate, null));
        }

        // 对话行集合
        internal readonly List<DialogFlowLine> Lines = new List<DialogFlowLine>();

        // 对话优先级
        internal readonly int Priority;

        // 当前对话令牌
        private string _currentToken;

        // 最后添加的对话行
        private DialogFlowLine _lastLine;

        // 当前对话流程上下文
        private DialogFlowContext _curDialogFlowContext;
    }
}