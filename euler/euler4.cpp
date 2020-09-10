#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>

using namespace std;

 int numbernr(int nr)
 {
 	int ok=0, r=0;
    while(nr!=0)
    {			
    		   r=nr%10;
               nr/=10;
    ok++;
    }
    return ok;
 }


 int checkpalindrome(int nr)
 {
 		int  r=0, fakenr=nr;
 		bool result=0;
    while(fakenr!=0)
    {			
    		   r*=10;
    		   r+=fakenr%10;
               fakenr/=10;
    
    }
    
    if(r==nr) result=1;
    
    return result;
 }


int main()
{
	int nr,maxnr=0;


	for(int i=100; i<1000; i++)
	{
		for(int j=100, tmp; j<1000; j++)
		{
			tmp=i*j;
			if(checkpalindrome(tmp)==1) {nr=tmp; cout<<setw(10)<<nr; if(nr>maxnr) maxnr=nr;}
		}
	}
    
   cout<<"\n\n\n\t\t\t"<<maxnr;
    
    return 0;
}
