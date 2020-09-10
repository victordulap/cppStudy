//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USEFORM("Unit1.cpp", IWForm1); /* TIWAppForm: File Type */
USEFORM("ServerController.cpp", IWServerController); /* TIWServerControllerBase: File Type */
USEFORM("UserSessionUnit.cpp", IWUserSession); /* TIWUserSessionBase: File Type */
USEFORM("Unit2.cpp", IWForm2); /* TIWAppForm: File Type */
//---------------------------------------------------------------------------
#include <IWStart.hpp>
//---------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
           TIWStart* p = new TIWStart();
           #if /*CB2006*/ (__BORLANDC__ == 0x580) /*Update 1*/ || (__BORLANDC__ == 0x581 ) || /*CB2007*/ (__BORLANDC__ == 0x593)
           p->Execute(NULL, true);
           #else
           p->Execute(true);
           #endif
        }
        catch (Exception &exception)
        {

        }
        return 0;
}
//---------------------------------------------------------------------------
