object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 673
  ClientWidth = 612
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clGray
  Font.Height = -21
  Font.Name = 'Roboto Cn'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 25
  object Memo1: TMemo
    Left = 0
    Top = 0
    Width = 612
    Height = 654
    Align = alClient
    PopupMenu = PopupMenu1
    ScrollBars = ssBoth
    TabOrder = 0
    WordWrap = False
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 654
    Width = 612
    Height = 19
    Panels = <
      item
        Alignment = taCenter
        Text = 'Victor'
        Width = 50
      end
      item
        Width = 50
      end>
  end
  object MainMenu1: TMainMenu
    Left = 400
    Top = 88
    object File1: TMenuItem
      Caption = 'File'
      object Open1: TMenuItem
        Caption = 'Open'
        ShortCut = 16463
        OnClick = Open1Click
      end
      object Save1: TMenuItem
        Caption = 'Save'
        OnClick = Save1Click
      end
    end
    object Edit1: TMenuItem
      Caption = 'Edit'
      object Font1: TMenuItem
        Caption = 'Font'
        OnClick = Font1Click
      end
      object BGcolor1: TMenuItem
        Caption = 'BG color'
        OnClick = BGcolor1Click
      end
      object WordWrap1: TMenuItem
        Caption = 'WordWrap'
        OnClick = WordWrap1Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'File txt|*.txt|File doc|*.doc|All|*.*'
    FilterIndex = 3
    Left = 24
    Top = 24
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'txt'
    FileName = 'Untitled'
    Filter = 'File txt|*.txt|File doc|*.doc|All|*.*'
    FilterIndex = 3
    Left = 24
    Top = 72
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 24
    Top = 120
  end
  object ColorDialog1: TColorDialog
    Left = 24
    Top = 168
  end
  object PopupMenu1: TPopupMenu
    Left = 256
    Top = 192
    object SelectAll1: TMenuItem
      AutoHotkeys = maManual
      Caption = 'Select All'
      ShortCut = 16449
      OnClick = SelectAll1Click
    end
  end
end
