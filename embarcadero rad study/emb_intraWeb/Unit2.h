//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <IWAppForm.hpp>
#include <IWBaseControl.hpp>
#include <IWBaseHTMLControl.hpp>
#include <IWCompButton.hpp>
#include <IWControl.hpp>
#include <IWVCLBaseControl.hpp>

//---------------------------------------------------------------------------
class TIWForm2: public TIWAppForm
{
__published:	// IDE-managed Components
	TIWButton *IWButton1;
	void __fastcall IWButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TIWForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
#endif
