object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 742
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
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 303
    Width = 390
    Height = 25
    DataSource = DataSource1
    TabOrder = 0
  end
  object DBNavigator2: TDBNavigator
    Left = 8
    Top = 647
    Width = 390
    Height = 25
    DataSource = DataSource2
    Enabled = False
    TabOrder = 1
  end
  object DBEdit1: TDBEdit
    Left = 424
    Top = 8
    Width = 121
    Height = 21
    DataField = 'NUME'
    DataSource = DataSource1
    TabOrder = 2
  end
  object DBEdit2: TDBEdit
    Left = 424
    Top = 352
    Width = 121
    Height = 21
    DataField = 'NUME'
    DataSource = DataSource2
    TabOrder = 3
  end
  object RadioButton1: TRadioButton
    Left = 424
    Top = 392
    Width = 113
    Height = 17
    Caption = 'INSERT'
    Checked = True
    TabOrder = 4
    TabStop = True
  end
  object RadioButton2: TRadioButton
    Left = 424
    Top = 424
    Width = 113
    Height = 17
    Caption = 'EDIT'
    TabOrder = 5
  end
  object Button1: TButton
    Left = 424
    Top = 456
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 6
    OnClick = Button1Click
  end
  object DBGrid2: TDBGrid
    Left = 8
    Top = 352
    Width = 393
    Height = 289
    DataSource = DataSource2
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 7
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 393
    Height = 289
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 8
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'DataSource=CONNECTSQL'
      'DriverID=ODBC')
    Connected = True
    LoginPrompt = False
    Left = 24
    Top = 696
  end
  object FDTable1: TFDTable
    Active = True
    IndexFieldNames = 'RAION_ID'
    Connection = FDConnection1
    UpdateOptions.UpdateTableName = 'RAION'
    TableName = 'RAION'
    Left = 440
    Top = 64
  end
  object DataSource1: TDataSource
    DataSet = FDTable1
    Left = 496
    Top = 64
  end
  object FDTable2: TFDTable
    Active = True
    IndexFieldNames = 'RAION_ID'
    MasterSource = DataSource1
    MasterFields = 'RAION_ID'
    Connection = FDConnection1
    UpdateOptions.UpdateTableName = 'EGRAGINITA.dbo.LOCALITATE'
    TableName = 'EGRAGINITA.dbo.LOCALITATE'
    Left = 432
    Top = 632
    object FDTable2LOCALITATE_ID: TFDAutoIncField
      FieldName = 'LOCALITATE_ID'
      Origin = 'LOCALITATE_ID'
      ReadOnly = True
    end
    object FDTable2RAION_ID: TIntegerField
      FieldName = 'RAION_ID'
      Origin = 'RAION_ID'
    end
    object FDTable2NUME: TStringField
      FieldName = 'NUME'
      Origin = 'NUME'
      Size = 30
    end
  end
  object DataSource2: TDataSource
    DataSet = FDTable2
    Left = 504
    Top = 632
  end
  object Timer1: TTimer
    Interval = 10000
    OnTimer = Timer1Timer
    Left = 552
    Top = 168
  end
  object FDConnection2: TFDConnection
    Params.Strings = (
      'DataSource=CONNECTSQL'
      'DriverID=ODBC')
    LoginPrompt = False
    Left = 112
    Top = 696
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select top 1 1 from raion')
    Left = 496
    Top = 560
  end
end
