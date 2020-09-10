object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 211
  ClientWidth = 234
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBlack
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnResize = FormResize
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 23
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 234
    Height = 211
    Align = alClient
    Color = clBackground
    ParentBackground = False
    TabOrder = 0
    ExplicitLeft = 232
    ExplicitTop = 144
    ExplicitWidth = 185
    ExplicitHeight = 41
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 45
      Height = 19
      Caption = 'width:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object LW: TLabel
      Left = 59
      Top = 8
      Width = 45
      Height = 19
      Caption = 'width:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 8
      Top = 33
      Width = 50
      Height = 19
      Caption = 'height:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object LH: TLabel
      Left = 59
      Top = 33
      Width = 45
      Height = 19
      Caption = 'width:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Button1: TButton
      Left = 8
      Top = 160
      Width = 113
      Height = 41
      Caption = 'Change Font'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 127
      Top = 160
      Width = 98
      Height = 41
      Caption = 'Color...'
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 184
    Top = 16
  end
  object ColorDialog1: TColorDialog
    Left = 184
    Top = 72
  end
end
