// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Missions.NameMarker.QuestMarkerVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Missions.NameMarker
{
  public class QuestMarkerVM : ViewModel
  {
    private int _questMarkerType;

    public SandBoxUIHelper.IssueQuestFlags IssueQuestFlag { get; }

    public QuestMarkerVM(SandBoxUIHelper.IssueQuestFlags issueQuestFlag)
    {
      this.QuestMarkerType = (int) issueQuestFlag;
      this.IssueQuestFlag = issueQuestFlag;
    }

    [DataSourceProperty]
    public int QuestMarkerType
    {
      get => this._questMarkerType;
      set
      {
        if (value == this._questMarkerType)
          return;
        this._questMarkerType = value;
        this.OnPropertyChangedWithValue(value, nameof (QuestMarkerType));
      }
    }
  }
}
