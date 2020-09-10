object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 690
  ClientWidth = 526
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 8
    Top = 24
    Width = 82
    Height = 649
    Caption = 'START'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Orientation = 900
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    OnClick = SpeedButton1Click
  end
  object Memo1: TMemo
    Left = 96
    Top = 24
    Width = 185
    Height = 649
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 287
    Top = 24
    Width = 185
    Height = 649
    ScrollBars = ssVertical
    TabOrder = 1
  end
end
