object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 280
  ClientWidth = 629
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clMaroon
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 19
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 24
    Height = 19
    Caption = 'IP:'
  end
  object Label2: TLabel
    Left = 8
    Top = 49
    Width = 52
    Height = 19
    Caption = 'PORT:'
  end
  object Memo1: TMemo
    Left = 304
    Top = 8
    Width = 317
    Height = 264
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 66
    Top = 8
    Width = 232
    Height = 27
    Enabled = False
    ReadOnly = True
    TabOrder = 1
    Text = '127.0.0.1'
  end
  object Edit2: TEdit
    Left = 66
    Top = 41
    Width = 232
    Height = 27
    TabOrder = 2
    Text = '6969'
  end
  object Button1: TButton
    Left = 8
    Top = 74
    Width = 290
    Height = 47
    Caption = 'Creaza server'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 127
    Width = 290
    Height = 47
    Caption = 'Dezactiveaza server'
    Enabled = False
    TabOrder = 4
    OnClick = Button2Click
  end
  object Edit3: TEdit
    Left = 8
    Top = 196
    Width = 290
    Height = 27
    TabOrder = 5
    TextHint = 'Mesaj spre client'
  end
  object Button3: TButton
    Left = 8
    Top = 229
    Width = 290
    Height = 43
    Caption = 'Transmite mesaj'
    TabOrder = 6
    OnClick = Button3Click
  end
  object ServerSocket1: TServerSocket
    Active = False
    Port = 0
    ServerType = stNonBlocking
    OnClientRead = ServerSocket1ClientRead
    Left = 552
    Top = 16
  end
end
