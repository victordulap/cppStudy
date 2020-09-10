object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 685
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object CheckBox1: TCheckBox
    Left = 8
    Top = 8
    Width = 97
    Height = 17
    Caption = '+'
    TabOrder = 0
    OnClick = CheckBox1Click
  end
  object CheckBox2: TCheckBox
    Left = 8
    Top = 40
    Width = 97
    Height = 17
    Caption = '-'
    TabOrder = 1
    OnClick = CheckBox2Click
  end
  object CheckBox3: TCheckBox
    Left = 8
    Top = 72
    Width = 97
    Height = 17
    Caption = '*'
    TabOrder = 2
    OnClick = CheckBox3Click
  end
  object CheckBox4: TCheckBox
    Left = 8
    Top = 104
    Width = 97
    Height = 17
    Caption = '/'
    TabOrder = 3
    OnClick = CheckBox4Click
  end
  object Edit1: TEdit
    Left = 8
    Top = 144
    Width = 121
    Height = 21
    TabOrder = 4
    TextHint = 'x'
  end
  object Edit2: TEdit
    Left = 8
    Top = 171
    Width = 121
    Height = 21
    TabOrder = 5
    TextHint = 'y'
  end
  object Edit3: TEdit
    Left = 8
    Top = 240
    Width = 121
    Height = 21
    TabOrder = 6
    TextHint = 'res1'
  end
  object Edit4: TEdit
    Left = 8
    Top = 267
    Width = 121
    Height = 21
    TabOrder = 7
    TextHint = 'res2'
  end
  object Button1: TButton
    Left = 8
    Top = 198
    Width = 121
    Height = 36
    Caption = 'Button1'
    TabOrder = 8
    OnClick = Button1Click
  end
  object Edit5: TEdit
    Left = 8
    Top = 304
    Width = 121
    Height = 21
    TabOrder = 9
    Text = 'Edit5'
  end
end
