// Decompiled with JetBrains decompiler
// Type: SandBox.View.Conversation.ConversationViewManager
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View.Screens;

#nullable disable
namespace SandBox.View.Conversation
{
  public class ConversationViewManager
  {
    private Dictionary<string, ConversationViewEventHandlerDelegate> _conditionEventHandlers;
    private Dictionary<string, ConversationViewEventHandlerDelegate> _consequenceEventHandlers;

    public static ConversationViewManager Instance => SandBoxViewSubModule.ConversationViewManager;

    public ConversationViewManager()
    {
      this.FillEventHandlers();
      Campaign.Current.ConversationManager.ConditionRunned += new Action<ConversationSentence>(this.OnCondition);
      Campaign.Current.ConversationManager.ConsequenceRunned += new Action<ConversationSentence>(this.OnConsequence);
    }

    private void FillEventHandlers()
    {
      this._conditionEventHandlers = new Dictionary<string, ConversationViewEventHandlerDelegate>();
      this._consequenceEventHandlers = new Dictionary<string, ConversationViewEventHandlerDelegate>();
      this.FillEventHandlersWith(typeof (ConversationViewEventHandlerDelegate).Assembly);
      foreach (Assembly viewAssembly in GameStateScreenManager.GetViewAssemblies())
        this.FillEventHandlersWith(viewAssembly);
    }

    private void FillEventHandlersWith(Assembly assembly)
    {
      foreach (Type type in assembly.GetTypesSafe())
      {
        foreach (MethodInfo method in type.GetMethods(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
        {
          object[] customAttributesSafe = method.GetCustomAttributesSafe(typeof (ConversationViewEventHandler), false);
          if (customAttributesSafe != null && customAttributesSafe.Length != 0)
          {
            foreach (ConversationViewEventHandler viewEventHandler in customAttributesSafe)
            {
              ConversationViewEventHandlerDelegate eventHandlerDelegate = Delegate.CreateDelegate(typeof (ConversationViewEventHandlerDelegate), method) as ConversationViewEventHandlerDelegate;
              if (viewEventHandler.Type == ConversationViewEventHandler.EventType.OnCondition)
              {
                if (!this._conditionEventHandlers.ContainsKey(viewEventHandler.Id))
                  this._conditionEventHandlers.Add(viewEventHandler.Id, eventHandlerDelegate);
                else
                  this._conditionEventHandlers[viewEventHandler.Id] = eventHandlerDelegate;
              }
              else if (viewEventHandler.Type == ConversationViewEventHandler.EventType.OnConsequence)
              {
                if (!this._consequenceEventHandlers.ContainsKey(viewEventHandler.Id))
                  this._consequenceEventHandlers.Add(viewEventHandler.Id, eventHandlerDelegate);
                else
                  this._consequenceEventHandlers[viewEventHandler.Id] = eventHandlerDelegate;
              }
            }
          }
        }
      }
    }

    private void OnConsequence(ConversationSentence sentence)
    {
      ConversationViewEventHandlerDelegate eventHandlerDelegate;
      if (!this._consequenceEventHandlers.TryGetValue(sentence.Id, out eventHandlerDelegate))
        return;
      eventHandlerDelegate();
    }

    private void OnCondition(ConversationSentence sentence)
    {
      ConversationViewEventHandlerDelegate eventHandlerDelegate;
      if (!this._conditionEventHandlers.TryGetValue(sentence.Id, out eventHandlerDelegate))
        return;
      eventHandlerDelegate();
    }
  }
}
