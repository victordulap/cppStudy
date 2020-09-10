//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall step::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall step::step(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall step::Execute()
{
    step::FreeOnTerminate = true; // delete la sfarsit
	//---- Place thread code here ----
	for(int i=0; ;i+=1)
	{
		Form1->pb1->Position = i;

		if(i>=100) {i=0; Form1->pb1->Position=0;}
		Sleep(100);

		if(Terminated) {Form1->pb1->Position=0; break;}
	}
}
//---------------------------------------------------------------------------
