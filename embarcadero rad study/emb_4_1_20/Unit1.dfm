object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 746
  ClientWidth = 619
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object MemoA: TMemo
    Left = 8
    Top = 8
    Width = 65
    Height = 233
    Lines.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5')
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object MemoB: TMemo
    Left = 79
    Top = 8
    Width = 65
    Height = 233
    Lines.Strings = (
      '6'
      '7'
      '8'
      '9'
      '10')
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object MemoC: TMemo
    Left = 150
    Top = 8
    Width = 65
    Height = 233
    Lines.Strings = (
      '11'
      '12'
      '13'
      '14'
      '15')
    ScrollBars = ssVertical
    TabOrder = 2
  end
  object Button1: TButton
    Left = 221
    Top = 24
    Width = 75
    Height = 201
    Caption = 'REZ!'
    TabOrder = 3
    OnClick = Button1Click
  end
  object MemoRez: TMemo
    Left = 302
    Top = 8
    Width = 83
    Height = 233
    Lines.Strings = (
      'MemoRez')
    ScrollBars = ssVertical
    TabOrder = 4
  end
  object Button2: TButton
    Left = 302
    Top = 247
    Width = 83
    Height = 25
    Caption = 'start'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 32
    Top = 296
    Width = 201
    Height = 105
    Caption = 'stop'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 584
    Top = 8
  end
  object Timer2: TTimer
    Enabled = False
    OnTimer = Timer2Timer
    Left = 296
    Top = 304
  end
  object Timer3: TTimer
    Enabled = False
    Interval = 2000
    OnTimer = Timer3Timer
    Left = 296
    Top = 360
  end
  object Timer4: TTimer
    Enabled = False
    Interval = 3000
    OnTimer = Timer4Timer
    Left = 296
    Top = 424
  end
end
