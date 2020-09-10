//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
	if(i<255){ Form2->AlphaBlendValue = i; i+=10; }
	else
	{
		Timer1->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
	i = 0;

	Form2->AlphaBlend = true;
	Form2->AlphaBlendValue = 255;

	Form1->AlphaBlend = true;
	Form1->AlphaBlendValue = 0;

	Timer2->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer2Timer(TObject *Sender)
{
	if(i<255){ Form2->AlphaBlendValue = 255 - i; i+=10; }
	else
	{
        Form2->Close();
		Form1->i = 0;
		Timer2->Enabled = false;
		Form1->Timer2->Enabled = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
    ReleaseCapture();
	Perform(WM_SYSCOMMAND, 0xF012, 0); // tot asta pt a controla cu mouse
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{
    Application->Minimize();
}
//---------------------------------------------------------------------------
