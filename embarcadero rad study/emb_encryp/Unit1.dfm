object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 525
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
  object Memo1: TMemo
    Left = 8
    Top = 48
    Width = 192
    Height = 313
    Lines.Strings = (
      'Text'
      '2')
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 206
    Top = 48
    Width = 192
    Height = 313
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object Memo3: TMemo
    Left = 404
    Top = 48
    Width = 192
    Height = 313
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
  object Button1: TButton
    Left = 8
    Top = 367
    Width = 192
    Height = 50
    Caption = 'encrypt'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 206
    Top = 367
    Width = 192
    Height = 50
    Caption = 'decrypt'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Memo4: TMemo
    Left = 15
    Top = 423
    Width = 185
    Height = 89
    TabOrder = 5
  end
  object Button3: TButton
    Left = 206
    Top = 487
    Width = 75
    Height = 25
    Caption = 'Button3'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 8
    Top = 8
    Width = 192
    Height = 34
    Caption = 'Button3'
    TabOrder = 7
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 206
    Top = 8
    Width = 192
    Height = 34
    Caption = 'Button3'
    TabOrder = 8
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 404
    Top = 8
    Width = 192
    Height = 34
    Caption = 'Button3'
    TabOrder = 9
    OnClick = Button6Click
  end
  object en: TIdEncoderXXE
    FillChar = '+'
    Left = 232
    Top = 432
  end
  object de: TIdDecoderXXE
    FillChar = '+'
    Left = 304
    Top = 432
  end
end
