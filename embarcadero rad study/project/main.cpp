#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<ctime>

using namespace std;

#include "D:\\DulapVictor\\project\\structuri.cpp"
#include "D:\\DulapVictor\\project\\sursa.cpp"
#include "D:\\DulapVictor\\project\\menuadmin.cpp"
#include "D:\\DulapVictor\\project\\menuuser.cpp"

int main()
{

	config();
	
	nruser=load(User,FNuser);
	nrstud=load(Stud,FNstud);
	nrstat=load(Stat,FNstat);
	
//	cout<<nrstud<<" <- nrsuer"<<endl;
//	system("pause");
	
	//cout<<" user="<<FNuser<<" stud="<<FNstud<<" stat="<<FNstat<<endl;
	//system("pause");
	
	//	if( (f=fopen(filename(),"w+"))==NULL ) {cout<<" error create file !"<<endl;}
	//	else { cout<<" ok create file! "<<endl;}
	
	//FRONT=login(); // <- logare cu pass	
	
	FRONT=1;
	
	while(1)
	{system("cls");
		switch(FRONT)
		{	
			case 0: BACK= menuUSER(); break;
			case 1: BACK=managementMENUadmin(); break;
		}
		
		switch(BACK)
		{
			case 777 : {save(User,FNuser,nruser); save(Stud,FNstud,nrstud); exit(0);} break;
			
			case 111 : insertuser(); 			 break;
			case 112 : showuser(nruser);
			
			case 16  : statistica();		   	 break;
			case 12  : insertstudent(); 		 break;
			
			case 22 : showuser(nruser); break;
			
			case 131 : finduserlogin(); break;
			case 132 : finduserid(); break;
			
			case 141 : findstudname(); break;
			case 142 : findstudfamily(); break;
			case 143 : findstudage(); break;
			case 144 : findstudidnp(); break;
			case 145 : findstudgrupa(); break;
			
			case 151 : editstudname(); break;
			case 152 : editstudfamily(); break;
			case 153 : editstudage(); break;
			case 154 : editstudgrupa(); break;
			case 155 : editstudmedia(); break;
			
			case 114 : edituserlogin(); break;
			case 124 : edituserpassword(); break;
			case 134 : edituserstare(); break;
			
			case 13  : showstudent(nrstud); break;
		//	case 666: {system("cls"); cout<<"\n\n\n\t\t Managment unavaible... \n\n\n"<<endl; system("pause");} break;
		}
		
	}
	
	
	
	
return 0;
}
