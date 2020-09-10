//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "IniFiles.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TIniFile *Ini = new TIniFile(GetCurrentDir() + "\\launch.ini");
//---------------------------------------------------------------------------
//TFontStyles CheckStyle(TFontStyles *S)
//{
//	int x = S->ToInt();
//
//	switch(x)
//	{
//		case 0 : return S = 0;
//		case 1 : return S = 1;
//		case 2 : return S = 2;
//		case 3 : return S = 3;
//		case 4 : return S = 4;
//		case 5 : return S = 5;
//		case 6 : return S = 6;
//		case 7 : return S = 7;
//
//		default : return S = 0;
//	}
//}
void SaveFont(TFont *F)
{
	Ini->WriteString("Font","Name",F->Name);
	Ini->WriteInteger("Font","Size",F->Size);
	Ini->WriteInteger("Font","Color",F->Color);
	Ini->WriteInteger("Font","Style",F->Style.ToInt());
}

void LoadFont(TFont *F)
{
	F->Name = Ini->ReadString("Font","Name",Form1->Font->Name);
	F->Size = Ini->ReadInteger("Font","Size",Form1->Font->Size);
	F->Color = TColor(Ini->ReadInteger("Font","Color",Form1->Font->Color));
	F->Style = TFontStyles(int(Ini->ReadInteger("Font","Style",Form1->Font->Style.ToInt())));
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	Form1->Width = Ini->ReadInteger("Form","Width",250);
	Form1->Height = Ini->ReadInteger("Form","Height",250);
	Panel1->Color = TColor(Ini->ReadInteger("Form","Color",Panel1->Color));

	//Label1->Font = Ini->WriteString("Label","Font",Form1->Font);
	//Label3->Font = Ini->WriteString("Label","Font",Form1->Font);
	//LW->Font = Ini->WriteString("Label","Font",Form1->Font);
	//LH->Font = Ini->WriteString("Label","Font",Form1->Font);

	LoadFont(Label1->Font);
	LoadFont(Label3->Font);
	LoadFont(LW->Font);
	LoadFont(LH->Font);
	LW->Left = Label1->Width + 10;
	LH->Left = Label3->Width + 10;
	Label3->Top = Label1->Height + 5;
	LH->Top = Label1->Height + 5;

	Button1->Top = Ini->ReadInteger("Button1","Position",(Form1->Height - 90));
	Button2->Top = Button1->Top;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	Ini->WriteString("Form","Width",IntToStr(Form1->Width));
	Ini->WriteString("Form","Height",IntToStr(Form1->Height));
	Ini->WriteString("Form","Color",IntToStr(Panel1->Color));

	Ini->WriteString("Button1","Position",Button1->Top);
	Ini->WriteString("Button2","Position",Button2->Top);

//	Ini->WriteString("Font","Name",Label1->Font->Name);
//	Ini->WriteString("Font","Size",Label1->Font->Size);
//	Ini->WriteString("Font","Style",Label1->Font->Style.ToInt());
//	Ini->WriteString("Font","Color",Label1->Font->Color);
	SaveFont(Label1->Font);

	//Ini->WriteString("Font","Font",Label1->Font->ToString()); nu lucreaza

	//Ini->WriteInteger("Form","Width",Form1->Width);  nu lucreaza
	//Ini->WriteInteger("Form","Width",Form1->Height); nu lucreaza
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
	LW->Caption = IntToStr(Form1->Width);
	LH->Caption = IntToStr(Form1->Height);

	Button1->Top = Form1->Height - 90;
	Button2->Top = Button1->Top;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	FontDialog1->Font = Label1->Font;
	if(FontDialog1->Execute())
	{
		Label1->Font = FontDialog1->Font;
		Label3->Font = FontDialog1->Font;
		LW->Font = FontDialog1->Font;
		LH->Font = FontDialog1->Font;

		LW->Left = Label1->Width + 10;
		LH->Left = Label3->Width + 10;
		Label3->Top = Label1->Height + 5;
		LH->Top = Label1->Height + 5;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	ColorDialog1->Color = Panel1->Color;
	if(ColorDialog1->Execute())
	{
		Panel1->Color = ColorDialog1->Color;
	}
}
//---------------------------------------------------------------------------
