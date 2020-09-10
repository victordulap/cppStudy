object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 244
  ClientWidth = 625
  Color = clBtnFace
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
    Top = 8
    Width = 16
    Height = 29
    Caption = 'A'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 43
    Width = 16
    Height = 29
    Caption = 'B'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 78
    Width = 16
    Height = 29
    Caption = 'C'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 144
    Width = 19
    Height = 29
    Caption = 'N'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object aMin: TSpinEdit
    Left = 40
    Top = 8
    Width = 73
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    MaxValue = 100
    MinValue = 1
    ParentFont = False
    TabOrder = 0
    Value = 1
  end
  object aMax: TSpinEdit
    Left = 119
    Top = 8
    Width = 73
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    MaxValue = 100
    MinValue = 2
    ParentFont = False
    TabOrder = 1
    Value = 2
    OnChange = aMaxChange
  end
  object bMin: TSpinEdit
    Left = 40
    Top = 43
    Width = 73
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    MaxValue = 100
    MinValue = 1
    ParentFont = False
    TabOrder = 2
    Value = 1
  end
  object bMax: TSpinEdit
    Left = 119
    Top = 43
    Width = 73
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    MaxValue = 100
    MinValue = 2
    ParentFont = False
    TabOrder = 3
    Value = 2
    OnChange = bMaxChange
  end
  object cMin: TSpinEdit
    Left = 40
    Top = 78
    Width = 73
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    MaxValue = 100
    MinValue = 1
    ParentFont = False
    TabOrder = 4
    Value = 1
  end
  object cMax: TSpinEdit
    Left = 119
    Top = 78
    Width = 73
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    MaxValue = 100
    MinValue = 2
    ParentFont = False
    TabOrder = 5
    Value = 2
    OnChange = cMaxChange
  end
  object Button1: TButton
    Left = 8
    Top = 113
    Width = 184
    Height = 25
    Caption = 'CALCULATE'
    TabOrder = 6
    OnClick = Button1Click
  end
  object ListBox1: TListBox
    Left = 198
    Top = 8
    Width = 419
    Height = 226
    ItemHeight = 13
    PopupMenu = PopupMenu1
    TabOrder = 7
  end
  object SpinEdit1: TSpinEdit
    Left = 40
    Top = 144
    Width = 152
    Height = 55
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    MaxValue = 100
    MinValue = 1
    ParentFont = False
    TabOrder = 8
    Value = 1
  end
  object Edit2: TEdit
    Left = 8
    Top = 205
    Width = 129
    Height = 21
    TabOrder = 9
    TextHint = 'edit'
  end
  object Button2: TButton
    Left = 143
    Top = 205
    Width = 49
    Height = 21
    Caption = 'Confirm'
    Enabled = False
    TabOrder = 10
    OnClick = Button2Click
  end
  object Panel1: TPanel
    Left = 384
    Top = 8
    Width = 233
    Height = 226
    Caption = 'Panel1'
    TabOrder = 11
    Visible = False
    object Label5: TLabel
      Left = 2
      Top = 0
      Width = 24
      Height = 29
      Caption = 'A'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 2
      Top = 30
      Width = 16
      Height = 29
      Caption = 'B'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 2
      Top = 60
      Width = 16
      Height = 29
      Caption = 'C'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -24
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object SpinEdit2: TSpinEdit
      Left = 32
      Top = 0
      Width = 73
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      MaxValue = 100
      MinValue = 1
      ParentFont = False
      TabOrder = 0
      Value = 1
    end
    object SpinEdit3: TSpinEdit
      Left = 32
      Top = 30
      Width = 73
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      MaxValue = 100
      MinValue = 1
      ParentFont = False
      TabOrder = 1
      Value = 1
    end
    object SpinEdit4: TSpinEdit
      Left = 32
      Top = 60
      Width = 73
      Height = 29
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      MaxValue = 100
      MinValue = 1
      ParentFont = False
      TabOrder = 2
      Value = 1
    end
    object Button3: TButton
      Left = 0
      Top = 101
      Width = 233
      Height = 117
      Caption = 'add'
      TabOrder = 3
      OnClick = Button3Click
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 272
    Top = 104
    object Insert1: TMenuItem
      Caption = 'Insert'
      OnClick = Insert1Click
    end
    object Edit1: TMenuItem
      Caption = 'Edit'
      OnClick = Edit1Click
    end
    object Delete1: TMenuItem
      Caption = 'Delete'
      OnClick = Delete1Click
    end
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 328
    Top = 104
  end
end
