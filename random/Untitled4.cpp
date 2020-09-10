#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;


class abc
{
	
public:
void calcabcshow(int a, int b, int c)
{
	if(a!=NULL&&b!=NULL&&c!=NULL)
	{
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
	cout<<" a+b-c="<<a+b-c<<endl; 
	}
	else cout<<" ERROR >>> ENTER a,b,c"<<endl;
}
public:
int a=NULL, b=NULL, c=NULL;
}A,B,C,CALC;

int main()
{

cout<<" enter a: "; cin>>A.a;
cout<<" enter b: "; cin>>B.b;
cout<<" enter c: "; cin>>C.c;
CALC.calcabcshow(A.a,B.b,C.c);

return 0;
}


