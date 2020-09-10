#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>

using namespace std;



int main()
{
 	long sumnr=0;
 	long sumsqr=0;
 	 
 	for(int i=1; i<101; i++)
 	{
 	 sumnr+=i;
 	 
	 sumsqr+=(i*i);
	}
    
    cout<<" summa nr="<<sumnr<<endl;
    cout<<" sqr summa nr="<<(sumnr*sumnr)<<endl;

    cout<<" summa sqr="<<(sumsqr)<<endl;
    
    cout<<" difference (result) ="<<((sumnr*sumnr)-sumsqr)<<endl;
    
    return 0;
}
