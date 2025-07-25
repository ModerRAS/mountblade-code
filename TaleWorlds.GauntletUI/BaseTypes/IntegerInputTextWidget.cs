// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.IntegerInputTextWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class IntegerInputTextWidget : EditableTextWidget
  {
    private int _intText = -1;
    private int _maxInt = int.MaxValue;
    private int _minInt = int.MinValue;

    public bool EnableClamp { get; set; }

    public IntegerInputTextWidget(UIContext context)
      : base(context)
    {
    }

    public override void HandleInput(IReadOnlyList<int> lastKeysPressed)
    {
      int count = lastKeysPressed.Count;
      for (int index = 0; index < count; ++index)
      {
        int lastPressedKey = lastKeysPressed[index];
        if (char.IsDigit(Convert.ToChar(lastPressedKey)))
        {
          if (lastPressedKey != 60 && lastPressedKey != 62)
            this.HandleInput(lastPressedKey);
          this._cursorDirection = EditableTextWidget.CursorMovementDirection.None;
          this._isSelection = false;
        }
      }
      int tickCount = Environment.TickCount;
      bool flag1 = false;
      bool flag2 = false;
      if (Input.IsKeyPressed(InputKey.Left))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Left;
        flag1 = true;
      }
      else if (Input.IsKeyPressed(InputKey.Right))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Right;
        flag1 = true;
      }
      else if (this._cursorDirection == EditableTextWidget.CursorMovementDirection.Left && !Input.IsKeyDown(InputKey.Left) || this._cursorDirection == EditableTextWidget.CursorMovementDirection.Right && !Input.IsKeyDown(InputKey.Right))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.None;
        if (!Input.IsKeyDown(InputKey.LeftShift))
          this._isSelection = false;
      }
      else if (Input.IsKeyReleased(InputKey.LeftShift))
        this._isSelection = false;
      else if (Input.IsKeyDown(InputKey.Home))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Left;
        flag2 = true;
      }
      else if (Input.IsKeyDown(InputKey.End))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Right;
        flag2 = true;
      }
      if (flag1 | flag2)
      {
        this._nextRepeatTime = tickCount + 500;
        if (Input.IsKeyDown(InputKey.LeftShift))
        {
          if (!this._editableText.IsAnySelected())
            this._editableText.BeginSelection();
          this._isSelection = true;
        }
      }
      if (this._cursorDirection != EditableTextWidget.CursorMovementDirection.None && (flag1 | flag2 || tickCount >= this._nextRepeatTime))
      {
        if (flag1)
        {
          int direction = (int) this._cursorDirection;
          if (Input.IsKeyDown(InputKey.LeftControl))
            direction = this.FindNextWordPosition(direction) - this._editableText.CursorPosition;
          this.MoveCursor(direction, this._isSelection);
          if (tickCount >= this._nextRepeatTime)
            this._nextRepeatTime = tickCount + 30;
        }
        else if (flag2)
        {
          this.MoveCursor(this._cursorDirection == EditableTextWidget.CursorMovementDirection.Left ? -this._editableText.CursorPosition : this._editableText.VisibleText.Length - this._editableText.CursorPosition, this._isSelection);
          if (tickCount >= this._nextRepeatTime)
            this._nextRepeatTime = tickCount + 30;
        }
      }
      bool flag3 = false;
      if (Input.IsKeyPressed(InputKey.BackSpace))
      {
        flag3 = true;
        this._keyboardAction = EditableTextWidget.KeyboardAction.BackSpace;
        this._nextRepeatTime = tickCount + 500;
      }
      else if (Input.IsKeyPressed(InputKey.Delete))
      {
        flag3 = true;
        this._keyboardAction = EditableTextWidget.KeyboardAction.Delete;
        this._nextRepeatTime = tickCount + 500;
      }
      if (this._keyboardAction == EditableTextWidget.KeyboardAction.BackSpace && !Input.IsKeyDown(InputKey.BackSpace) || this._keyboardAction == EditableTextWidget.KeyboardAction.Delete && !Input.IsKeyDown(InputKey.Delete))
        this._keyboardAction = EditableTextWidget.KeyboardAction.None;
      if (Input.IsKeyReleased(InputKey.Enter))
        this.EventFired("TextEntered");
      else if (this._keyboardAction == EditableTextWidget.KeyboardAction.BackSpace || this._keyboardAction == EditableTextWidget.KeyboardAction.Delete)
      {
        if (!flag3 && tickCount < this._nextRepeatTime)
          return;
        if (this._editableText.IsAnySelected())
          this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
        else if (Input.IsKeyDown(InputKey.LeftControl))
          this.DeleteText(this._editableText.CursorPosition + (this.FindNextWordPosition(-1) - this._editableText.CursorPosition), this._editableText.CursorPosition);
        else
          this.DeleteChar(this._keyboardAction == EditableTextWidget.KeyboardAction.Delete);
        this.TrySetStringAsInteger(this.RealText);
        if (tickCount < this._nextRepeatTime)
          return;
        this._nextRepeatTime = tickCount + 30;
      }
      else
      {
        if (!Input.IsKeyDown(InputKey.LeftControl))
          return;
        if (Input.IsKeyPressed(InputKey.A))
          this._editableText.SelectAll();
        else if (Input.IsKeyPressed(InputKey.C))
          this.CopyText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
        else if (Input.IsKeyPressed(InputKey.X))
        {
          this.CopyText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
          this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
          this.TrySetStringAsInteger(this.RealText);
        }
        else
        {
          if (!Input.IsKeyPressed(InputKey.V))
            return;
          this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
          this.AppendText(new string(Regex.Replace(Input.GetClipboardText(), "[<>]+", " ").Where<char>((Func<char, bool>) (c => char.IsDigit(c))).ToArray<char>()));
          this.TrySetStringAsInteger(this.RealText);
        }
      }
    }

    private void HandleInput(int lastPressedKey)
    {
      string str1 = (string) null;
      bool flag = false;
      if (this.MaxLength > -1 && this.Text.Length >= this.MaxLength)
        str1 = this.RealText;
      if (str1 == null)
      {
        string realText = this.RealText;
        if (this._editableText.SelectedTextBegin != this._editableText.SelectedTextEnd)
        {
          if (this._editableText.SelectedTextEnd > this.RealText.Length)
          {
            str1 = Convert.ToChar(lastPressedKey).ToString();
            flag = true;
          }
          else
          {
            string str2 = this.RealText.Substring(0, this._editableText.SelectedTextBegin) + this.RealText.Substring(this._editableText.SelectedTextEnd, this.RealText.Length - this._editableText.SelectedTextEnd);
            if (this._editableText.SelectedTextEnd - this._editableText.SelectedTextBegin >= this.RealText.Length)
            {
              this._editableText.SetCursorPosition(0, true);
              this._editableText.ResetSelected();
              flag = true;
            }
            else
              this._editableText.SetCursorPosition(this._editableText.SelectedTextBegin, true);
            int cursorPosition = this._editableText.CursorPosition;
            char ch = Convert.ToChar(lastPressedKey);
            str1 = str2.Substring(0, cursorPosition) + ch.ToString() + str2.Substring(cursorPosition, str2.Length - cursorPosition);
          }
          this._editableText.ResetSelected();
        }
        else
        {
          if (this._editableText.CursorPosition == this.RealText.Length)
            flag = true;
          int cursorPosition = this._editableText.CursorPosition;
          char ch = Convert.ToChar(lastPressedKey);
          str1 = realText.Substring(0, cursorPosition) + ch.ToString() + realText.Substring(cursorPosition, realText.Length - cursorPosition);
          if (!flag)
            this._editableText.SetCursor(cursorPosition + 1);
        }
      }
      this.TrySetStringAsInteger(str1);
      if (!flag)
        return;
      this._editableText.SetCursorPosition(this.RealText.Length, true);
    }

    private void SetInteger(int newInteger)
    {
      if (newInteger == this.IntText)
        return;
      if (!this.EnableClamp || newInteger <= this.MaxInt && newInteger >= this.MinInt)
      {
        this.IntText = newInteger;
      }
      else
      {
        if (!this.EnableClamp)
          return;
        newInteger = newInteger > this.MaxInt ? this.MaxInt : this.MinInt;
        this.IntText = newInteger;
        if (this.IntText.ToString() != this.RealText)
        {
          this.RealText = this.IntText.ToString();
          this.Text = this.IntText.ToString();
        }
        this.ResetSelected();
      }
    }

    private bool TrySetStringAsInteger(string str)
    {
      int result;
      if (!int.TryParse(str, out result))
        return false;
      this.SetInteger(result);
      if (this._editableText.SelectedTextEnd - this._editableText.SelectedTextBegin >= this.RealText.Length)
      {
        this._editableText.SetCursorPosition(0, true);
        this._editableText.ResetSelected();
      }
      else if (this._editableText.SelectedTextBegin != 0 || this._editableText.SelectedTextEnd != 0)
        this._editableText.SetCursorPosition(this._editableText.SelectedTextBegin, true);
      if (this._editableText.CursorPosition > this.RealText.Length)
        this._editableText.SetCursorPosition(this.RealText.Length, true);
      return true;
    }

    public override void SetAllText(string text)
    {
      this.DeleteText(0, this.RealText.Length);
      this.TrySetStringAsInteger(new string(Regex.Replace(text, "[<>]+", " ").Where<char>((Func<char, bool>) (c => char.IsDigit(c))).ToArray<char>()));
    }

    [Editor(false)]
    public int IntText
    {
      get => this._intText;
      set
      {
        if (this._intText == value)
          return;
        this._intText = value;
        this.OnPropertyChanged(value, nameof (IntText));
        this.RealText = value.ToString();
        this.Text = value.ToString();
      }
    }

    [Editor(false)]
    public int MaxInt
    {
      get => this._maxInt;
      set
      {
        if (this._maxInt == value)
          return;
        this._maxInt = value;
      }
    }

    [Editor(false)]
    public int MinInt
    {
      get => this._minInt;
      set
      {
        if (this._minInt == value)
          return;
        this._minInt = value;
      }
    }
  }
}
