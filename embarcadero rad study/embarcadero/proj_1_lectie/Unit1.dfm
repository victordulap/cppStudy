object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 701
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
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 177
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TextHint = 'x'
  end
  object Edit2: TEdit
    Left = 8
    Top = 47
    Width = 177
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    TextHint = 'y'
  end
  object Panel1: TPanel
    Left = 191
    Top = 24
    Width = 90
    Height = 72
    Caption = 'Panel1'
    TabOrder = 2
    object RadioButton1: TRadioButton
      Left = 0
      Top = 0
      Width = 33
      Height = 17
      Caption = '+'
      TabOrder = 0
    end
    object RadioButton2: TRadioButton
      Left = 0
      Top = 23
      Width = 33
      Height = 17
      Caption = '/'
      TabOrder = 1
    end
    object RadioButton3: TRadioButton
      Left = 48
      Top = 0
      Width = 33
      Height = 17
      Caption = '-'
      TabOrder = 2
    end
    object RadioButton4: TRadioButton
      Left = 48
      Top = 23
      Width = 33
      Height = 17
      Caption = '*'
      TabOrder = 3
    end
  end
  object Button1: TButton
    Left = 8
    Top = 86
    Width = 177
    Height = 75
    Caption = 'REZ = '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
end
