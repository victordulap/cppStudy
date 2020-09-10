//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
    Application->Minimize();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
	i = 0;

	Form1->AlphaBlend = true;
	Form1->AlphaBlendValue = 255;

	Form2->AlphaBlend = true;
	Form2->AlphaBlendValue = 0;

	Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	if(i<255){ Form1->AlphaBlendValue = 255 - i; i+=10; }
	else
	{
		Form2->Show();
		Form2->i = 0;
		Timer1->Enabled = false;
		Form2->Timer1->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	if(i<255){ Form1->AlphaBlendValue = i; i+=10; }
	else
	{
		Timer2->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	ReleaseCapture();
	Perform(WM_SYSCOMMAND, 0xF012, 0); // tot asta pt a controla cu mouse
}
//---------------------------------------------------------------------------

