int menuUSER()
{
	cout<<"\n\n\t\t MENU baza (user)"<<endl;
	cout<<"\t\t    1. Search student "<<endl;
	cout<<"\t\t    2. Show students "<<endl;
	cout<<"\t\t    3. Edit students "<<endl;
	cout<<"\t\t    4. raport "<<endl;

	cout<<"\t\t       ESC. Exit "<<endl;
	
	switch(_getch())
	{
		
		case 27: return 777; break;
		
		case 49: NIVEL=11; return 0; break;
		case 50: return 22; break;
		case 51: NIVEL=13; return 0; break;
		case 52: NIVEL=14; return 0; break;

	}
}
