object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 545
  ClientWidth = 655
  Color = cl3DDkShadow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 512
    Top = 488
    Width = 135
    Height = 49
    Caption = 'Start'
    OnClick = SpeedButton1Click
  end
  object Label1: TLabel
    Left = 512
    Top = 464
    Width = 31
    Height = 13
    Caption = 'Label1'
  end
  object Edit1: TEdit
    Left = 600
    Top = 509
    Width = 47
    Height = 21
    TabOrder = 0
    OnKeyDown = Edit1KeyDown
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 616
    Top = 408
  end
end
