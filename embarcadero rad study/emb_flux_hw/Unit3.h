//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class flux2 : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall flux2(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
