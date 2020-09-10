

int menuADMIN11()
{
	cout<<"\n\n\t\t Managment user 1.1"<<endl;
	cout<<"\t\t    1. Insert user "<<endl;
	cout<<"\t\t    2. Show user "<<endl;
	cout<<"\t\t    3. Find user "<<endl;
	cout<<"\t\t    4. Edit user "<<endl;
	cout<<"\t\t       ESC. Exit "<<endl;
	
	switch(_getch())
	{
		
		case 27: NIVEL=1; return 0;
		case 49: return 111;
		case 50: return 112;
		case 51: NIVEL=13; return 0;
		case 52: NIVEL=114; return 0;
	}
}

int menuADMIN114()
{
	cout<<"\n\n\t\t subMENU 1.1.4"<<endl;
	cout<<"\t\t    1. Edit Login "<<endl;
	cout<<"\t\t    2. Edit Password "<<endl;
	cout<<"\t\t    3. Enable / Disable "<<endl;

	cout<<"\t\t       ESC. Exit "<<endl;
	
	switch(_getch())
	{
		
		case 27: NIVEL=1; return 0;
		case 49: return 114;
		case 50: return 124;
		case 51: return 134;
		
	}
}



int menuADMIN13()
{
	cout<<"\n\n\t\t subMENU 1.3"<<endl;
	cout<<"\t\t    1. Find by login "<<endl;
	cout<<"\t\t    2. Find by id "<<endl;
	cout<<"\t\t       ESC. Exit "<<endl;
	
	switch(_getch())
	{
		
		case 27: NIVEL=1; return 0;
		case 49: return 131;
		case 50: return 132;
		
	}
}






int menuADMIN14()
{
	cout<<"\n\n\t\t subMENU 1.4"<<endl;
	cout<<"\t\t    1. Find by name "<<endl;
	cout<<"\t\t    2. Find by family "<<endl;
	cout<<"\t\t    3. Find by age "<<endl;
	cout<<"\t\t    4. Find by idnp "<<endl;
	cout<<"\t\t    5. Find by grupa "<<endl;
	cout<<"\t\t       ESC. Exit "<<endl;
	
	switch(_getch())
	{
		
		case 27: NIVEL=1; return 0;
		case 49: return 141;
		case 50: return 142;
		case 51: return 143;
		case 52: return 144;
		case 53: return 145;
		
	}
}


int menuADMIN15()
{
	cout<<"\n\n\t\t 1.5 Edit student"<<endl;
	cout<<"\t\t    1. Edit name "<<endl;
	cout<<"\t\t    2. Edit family "<<endl;
	cout<<"\t\t    3. Edit age "<<endl;
	cout<<"\t\t    4. Edit grupa "<<endl;
	cout<<"\t\t    5. Edit media "<<endl;
	cout<<"\t\t       ESC. Exit "<<endl;
	
	switch(_getch())
	{
		
		case 27: NIVEL=1; return 0;
		case 49: return 151;
		case 50: return 152;
		case 51: return 153;
		case 52: return 154;
		case 53: return 155;
	}
}



int menuADMIN()
{
	cout<<"\n\n\t\t MENU base, (admin)"<<endl;
	cout<<"\t\t    1. Management user "<<endl;
	cout<<"\t\t    2. Insert student "<<endl;
	cout<<"\t\t    3. Show student "<<endl;
	cout<<"\t\t    4. Find student "<<endl;
	cout<<"\t\t    5. Edit student "<<endl;
	cout<<"\t\t    6. STATISTICS "<<endl;
//	cout<<" nrstud="<<nrstud;
	cout<<"\t\t       ESC. logout "<<endl;
	
	switch(_getch())
	{
		
		case 27: return 777; break;
		case 49: NIVEL=11; return 0; break;
		case 50: return 12; break;
		case 51: return 13; return 0; break;
		case 52: NIVEL=14; return 0; break;
		case 53: NIVEL=15; return 0; break;
		case 54: return 16; break;
	}
}

int managementMENUadmin()
{
	switch(NIVEL)
	{
		case 1: return menuADMIN(); break;
		case 11: return menuADMIN11(); break;
		case 14: return menuADMIN14(); break;
		case 15: return menuADMIN15(); break;
		case 13: return menuADMIN13(); break;
		case 114: menuADMIN114();
	}
}
