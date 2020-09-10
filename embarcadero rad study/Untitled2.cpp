#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{srand(time(0));

char password[]="step";
char pass[255];


int i=0, C=0, sec=0;

cout<<"\n\n\n\t"<<'['<<C<<"] Enter password: ";

while(1)
{

pass[i]=_getch();

if((int)pass[i]==8)
{
	
	if(i>0){cout<<"\b \b"; i--;}
	
}

else if((int)pass[i]==13)
{

	pass[i]=0;
	
	if(strcmp(password,pass)==0)
	{
		cout<<"\t["<<C<<']'<<"\n\n\t Password CORRECT!"<<endl;	
		break;
	}
	else
	{
		cout<<"\n\n\t["<<C<<"] :: ERROR :: Password INCORRECT!"<<endl; 
		system("pause");
		C++;
		i=0;
		system("cls");
		if(C%3==0&&C<=18)
		{
			for(int i=9; i>=sec; i--)
			{
				cout<<"\n\n\n\n\n\t\t\t\t\t\t0"<<i;
				Sleep(3);
				system("cls");
			
			}
				sec-=10;
		}
		else if(C==21)
		{
		return 0;	
		}
		cout<<"\n\n\n\t"<<'['<<C<<"] Enter password: ";
	}
	
}
}
return 0;
}



