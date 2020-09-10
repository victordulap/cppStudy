object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 730
  ClientWidth = 613
  Color = clBtnFace
  TransparentColor = True
  TransparentColorValue = clNavy
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 199
    Width = 189
    Height = 25
    Caption = 'Choose 2 operations'
    Color = clSkyBlue
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 262
    Top = 32
    Width = 179
    Height = 25
    Caption = 'rez 1 operation:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 262
    Top = 146
    Width = 179
    Height = 25
    Caption = '='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 262
    Top = 123
    Width = 148
    Height = 25
    Caption = 'rez 2 operation:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 262
    Top = 63
    Width = 179
    Height = 25
    Caption = '='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 215
    Top = 199
    Width = 79
    Height = 25
    Caption = '<--------'
    Color = clSkyBlue
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Visible = False
  end
  object Label7: TLabel
    Left = 8
    Top = 230
    Width = 66
    Height = 23
    Caption = 'Enter x!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object Label8: TLabel
    Left = 88
    Top = 230
    Width = 66
    Height = 23
    Caption = 'Enter y!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 121
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    TextHint = 'x'
  end
  object Edit2: TEdit
    Left = 8
    Top = 47
    Width = 121
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    TextHint = 'y'
  end
  object Panel1: TPanel
    Left = 8
    Top = 86
    Width = 121
    Height = 107
    Color = clFuchsia
    ParentBackground = False
    TabOrder = 2
    object CheckBox1: TCheckBox
      Left = 39
      Top = 8
      Width = 33
      Height = 17
      Caption = '+'
      Color = clBlue
      ParentColor = False
      TabOrder = 0
      OnClick = CheckBox1Click
    end
    object CheckBox2: TCheckBox
      Left = 39
      Top = 31
      Width = 33
      Height = 17
      Caption = '-'
      Color = clBlue
      ParentColor = False
      TabOrder = 1
    end
    object CheckBox3: TCheckBox
      Left = 39
      Top = 54
      Width = 33
      Height = 17
      Caption = '*'
      Color = clBlue
      ParentColor = False
      TabOrder = 2
    end
    object CheckBox4: TCheckBox
      Left = 39
      Top = 77
      Width = 33
      Height = 17
      Caption = '/'
      Color = clBlue
      ParentColor = False
      TabOrder = 3
    end
  end
  object Button1: TButton
    Left = 135
    Top = 8
    Width = 121
    Height = 185
    Caption = 'CALCULATE'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
end
