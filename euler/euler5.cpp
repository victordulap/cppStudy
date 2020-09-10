#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>

using namespace std;


int div10( int nr )
{
	bool result=0;
	
		if( nr%10==0 && nr%8==0 && nr%9==0 && nr%7==0 ){result=1;} // 1 2 3 4 5 6 useless
		else result=0;
		
 return result;	
}


int div20( int nr )
{
	bool result=0;
	
		if( nr%11==0 && nr%13==0 && nr%14==0 && nr%16==0 && nr%17==0 && nr%18==0 && nr%19==0 && nr%20==0 ){result=1;} // example: if nr div by 18 than 9 have no sense
		else result=0;
		
 return result;	
}

int main()
{

    
     int i=1;
    while(div20(i)==0)
    {
	
	
	
	i++;	
	}
    

    cout<<" i="<<i<<endl;
    
    
    return 0;
}
