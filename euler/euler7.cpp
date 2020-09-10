#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>

using namespace std;

int primecheck(int nr)
{
	bool c;
for(int i=2; i<(nr/2)+2; i++)
	{		
			if(nr==2&&i==2) {c=1;} 
			else if(nr%i==0) {c=0;break;}
			else {c=1;}	

	}	
	
	return c;
}

int main()
{
	/*
	long int i=2;
	long j=0, nr;
	
 	while(j!=6)
 	{
 	if(primecheck(i)==1) {nr=i; j++; cout<<"["<<j<<"]"<<" nr="<<nr<<endl;}
 	i++;
	}
 	
 	cout<<"\n["<<j<<"]"<<" nr="<<nr<<endl;
	*/
	
	
	long int i=0;
	long j=0, nr;
	
 	while(j!=10001)
 	{
 	if(primecheck(i)==1) {nr=i; j++; if(j>9995) cout<<"["<<j<<"]"<<" nr="<<nr<<endl;}
 	i++;
	}
 	
 	cout<<"\n["<<j<<"]"<<" nr="<<nr<<endl;
    
    
    return 0;
}
