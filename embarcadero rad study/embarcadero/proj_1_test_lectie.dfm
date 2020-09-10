object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 737
  ClientWidth = 609
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PopupMenu = PopupMenu1
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 168
    Width = 73
    Height = 18
    Caption = 'text constatnt'
  end
  object Edit1: TEdit
    Left = 24
    Top = 248
    Width = 185
    Height = 17
    TabOrder = 0
    TextHint = 'enter text'
    OnClick = Edit1Click
    OnEnter = Edit1Enter
  end
  object Memo1: TMemo
    Left = 24
    Top = 271
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object Button1: TButton
    Left = 215
    Top = 248
    Width = 145
    Height = 112
    Caption = 'edit to memo'
    TabOrder = 2
    OnClick = Button1Click
  end
  object CheckBox1: TCheckBox
    Left = 24
    Top = 358
    Width = 121
    Height = 25
    Caption = 'CheckBox1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object CheckBox2: TCheckBox
    Left = 24
    Top = 389
    Width = 121
    Height = 29
    Caption = 'CheckBox2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object CheckBox3: TCheckBox
    Left = 24
    Top = 424
    Width = 121
    Height = 25
    Caption = 'CheckBox3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object RadioButton1: TRadioButton
    Left = 24
    Top = 455
    Width = 113
    Height = 17
    Caption = 'RadioButton1'
    TabOrder = 6
  end
  object RadioButton2: TRadioButton
    Left = 24
    Top = 478
    Width = 113
    Height = 17
    Caption = 'RadioButton2'
    TabOrder = 7
  end
  object RadioButton3: TRadioButton
    Left = 24
    Top = 501
    Width = 113
    Height = 17
    Caption = 'RadioButton3'
    TabOrder = 8
  end
  object Panel1: TPanel
    Left = 192
    Top = 8
    Width = 225
    Height = 65
    Caption = 'Panel1'
    TabOrder = 9
    object RadioButton4: TRadioButton
      Left = 0
      Top = 0
      Width = 113
      Height = 17
      Caption = 'RadioButton1'
      TabOrder = 0
    end
    object RadioButton5: TRadioButton
      Left = 0
      Top = 23
      Width = 113
      Height = 17
      Caption = 'RadioButton2'
      TabOrder = 1
    end
    object RadioButton6: TRadioButton
      Left = 0
      Top = 46
      Width = 113
      Height = 17
      Caption = 'RadioButton3'
      TabOrder = 2
    end
  end
  object Panel2: TPanel
    Left = 192
    Top = 79
    Width = 225
    Height = 65
    Caption = 'Panel1'
    TabOrder = 10
    object RadioButton7: TRadioButton
      Left = 0
      Top = 0
      Width = 113
      Height = 17
      Caption = 'RadioButton1'
      TabOrder = 0
    end
    object RadioButton8: TRadioButton
      Left = 0
      Top = 23
      Width = 113
      Height = 17
      Caption = 'RadioButton2'
      TabOrder = 1
    end
    object RadioButton9: TRadioButton
      Left = 0
      Top = 46
      Width = 113
      Height = 17
      Caption = 'RadioButton3'
      TabOrder = 2
    end
  end
  object ListBox1: TListBox
    Left = 215
    Top = 375
    Width = 121
    Height = 97
    ItemHeight = 13
    Items.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5'
      '6')
    TabOrder = 11
  end
  object ComboBox1: TComboBox
    Left = 360
    Top = 375
    Width = 145
    Height = 22
    Style = csOwnerDrawFixed
    TabOrder = 12
    Items.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5'
      '6')
  end
  object Panel3: TPanel
    Left = 600
    Top = 8
    Width = 593
    Height = 721
    Caption = 'Panel3'
    Color = clHotLight
    ParentBackground = False
    TabOrder = 13
    Visible = False
    object Edit2: TEdit
      Left = 16
      Top = 16
      Width = 121
      Height = 33
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      Text = 'Edit2'
    end
    object Button2: TButton
      Left = 176
      Top = 8
      Width = 27
      Height = 25
      Caption = 'x'
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object MainMenu1: TMainMenu
    Left = 74
    Top = 40
    object file2: TMenuItem
      Caption = 'file'
      object new1: TMenuItem
        Caption = 'new'
      end
      object open1: TMenuItem
        Caption = 'open'
        object a1: TMenuItem
          Caption = 'a'
          object x1: TMenuItem
            Caption = 'x'
            OnClick = x1Click
          end
          object y1: TMenuItem
            Caption = 'y'
          end
          object z1: TMenuItem
            Caption = 'z'
          end
        end
        object b1: TMenuItem
          Caption = 'b'
        end
        object c1: TMenuItem
          Caption = 'c'
        end
      end
      object exit1: TMenuItem
        Caption = 'exit'
        OnClick = exit1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
    end
    object help1: TMenuItem
      Caption = 'help'
      OnClick = help1Click
      object file1: TMenuItem
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 64
    Top = 96
    object copy1: TMenuItem
      Caption = 'copy'
    end
    object paste1: TMenuItem
      Caption = 'paste'
    end
    object cut1: TMenuItem
      Caption = 'cut'
    end
    object undo1: TMenuItem
      Caption = 'undo'
    end
  end
end
