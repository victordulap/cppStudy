//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#pragma package(smart_init)
flux2 *f2;
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall flux1::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall flux1::flux1(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall flux1::Execute()
{
	Form1->SpeedButton1->Enabled = false;
	//---- Place thread code here ----
	for(int i=0; i<1000; i++)
	{
		Form1->Memo1->Lines->Add(IntToStr(i));
		//if(Terminated) f2 = new flux2(false);
	}
	//if(Terminated)
	f2 = new flux2(false);
}
//---------------------------------------------------------------------------
