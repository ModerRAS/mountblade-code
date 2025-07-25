// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.FloatInputTextWidget
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
  public class FloatInputTextWidget : EditableTextWidget
  {
    private float _floatText;
    private float _maxFloat = float.MaxValue;
    private float _minFloat = float.MinValue;

    public bool EnableClamp { get; set; }

    public FloatInputTextWidget(UIContext context)
      : base(context)
    {
      this.PropertyChanged += new Action<PropertyOwnerObject, string, object>(this.IntegerInputTextWidget_PropertyChanged);
    }

    private void IntegerInputTextWidget_PropertyChanged(
      PropertyOwnerObject arg1,
      string arg2,
      object arg3)
    {
      float result;
      if (!(arg2 == "RealText") || !((string) arg3 != this.FloatText.ToString()) || !float.TryParse((string) arg3, out result))
        return;
      this.FloatText = result;
    }

    public override void HandleInput(IReadOnlyList<int> lastKeysPressed)
    {
      int count = lastKeysPressed.Count;
      for (int index = 0; index < count; ++index)
      {
        int lastPressedKey = lastKeysPressed[index];
        char c = Convert.ToChar(lastPressedKey);
        if (char.IsDigit(c) || c == '.' && this.GetNumberOfSeperatorsInText(this.RealText) == 0)
        {
          if (lastPressedKey != 60 && lastPressedKey != 62 && float.TryParse(this.GetAppendResult(lastPressedKey), out float _))
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
      if (Input.IsKeyReleased(InputKey.Enter) || Input.IsKeyReleased(InputKey.NumpadEnter))
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
        this.TrySetStringAsFloat(this.RealText);
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
          this.TrySetStringAsFloat(this.RealText);
        }
        else
        {
          if (!Input.IsKeyPressed(InputKey.V))
            return;
          this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
          this.AppendText(new string(Regex.Replace(Input.GetClipboardText(), "[<>]+", " ").Where<char>((Func<char, bool>) (c => char.IsDigit(c))).ToArray<char>()));
          this.TrySetStringAsFloat(this.RealText);
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
      this.TrySetStringAsFloat(str1);
      if (!flag)
        return;
      this._editableText.SetCursorPosition(this.RealText.Length, true);
    }

    private bool TrySetStringAsFloat(string str)
    {
      float result;
      if (!float.TryParse(str, out result))
        return false;
      this.SetFloat(result);
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

    private void SetFloat(float newFloat)
    {
      if ((double) newFloat == (double) this.FloatText)
        return;
      if ((double) newFloat <= (double) this.MaxFloat && (double) newFloat >= (double) this.MinFloat)
      {
        this.FloatText = newFloat;
      }
      else
      {
        if (!this.EnableClamp)
          return;
        newFloat = (double) newFloat > (double) this.MaxFloat ? this.MaxFloat : this.MinFloat;
        this.FloatText = newFloat;
        float floatText = this.FloatText;
        if (floatText.ToString() != this.RealText)
        {
          floatText = this.FloatText;
          this.RealText = floatText.ToString("F2");
          floatText = this.FloatText;
          this.Text = floatText.ToString("F2");
        }
        this.ResetSelected();
      }
    }

    private int GetNumberOfSeperatorsInText(string realText)
    {
      return realText.Count<char>((Func<char, bool>) (c => char.IsPunctuation(c)));
    }

    private string GetAppendResult(int lastPressedKey)
    {
      if (this.MaxLength > -1 && this.Text.Length >= this.MaxLength)
        return this.RealText;
      string realText = this.RealText;
      if (this._editableText.SelectedTextBegin != this._editableText.SelectedTextEnd)
      {
        string str = this.RealText.Substring(0, this._editableText.SelectedTextBegin) + this.RealText.Substring(this._editableText.SelectedTextEnd, this.RealText.Length - this._editableText.SelectedTextEnd);
      }
      int cursorPosition = this._editableText.CursorPosition;
      char ch = Convert.ToChar(lastPressedKey);
      return this.RealText.Substring(0, cursorPosition) + ch.ToString() + this.RealText.Substring(cursorPosition, this.RealText.Length - cursorPosition);
    }

    public override void SetAllText(string text)
    {
      this.DeleteText(0, this.RealText.Length);
      string str = new string(Regex.Replace(text, "[<>]+", " ").Where<char>((Func<char, bool>) (c => char.IsDigit(c))).ToArray<char>());
      this.AppendText(str);
      this.TrySetStringAsFloat(str);
    }

    [Editor(false)]
    public float FloatText
    {
      get => this._floatText;
      set
      {
        if ((double) this._floatText == (double) value)
          return;
        this._floatText = value;
        this.OnPropertyChanged(value, nameof (FloatText));
        this.RealText = value.ToString();
        this.Text = value.ToString();
      }
    }

    [Editor(false)]
    public float MaxFloat
    {
      get => this._maxFloat;
      set
      {
        if ((double) this._maxFloat == (double) value)
          return;
        this._maxFloat = value;
      }
    }

    [Editor(false)]
    public float MinFloat
    {
      get => this._minFloat;
      set
      {
        if ((double) this._minFloat == (double) value)
          return;
        this._minFloat = value;
      }
    }
  }
}
