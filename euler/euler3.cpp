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
for(int i=2; i<sqrt(nr); i++)
	{
			if(nr%i==0) {c=0;break;}
			else {c=1;}
		
	}	
	return c;
}





int main()
{
	
	long long int number=600851475143;//13195;
	int k=0;
	int valid[1000];
	bool c;
	
	for(int i=sqrt(sqrt(number)); i<sqrt(number); i++)
	{
		
		c=primecheck(i);
		if(c==1)
		{
		 if((number%i)==0) {valid[k]=i; k++; cout<<setw(15)<<i; }	
		}
		//
	}
	
	cout<<"\n\n\n";
	/*for(int i=0; i<k; i++)
	{
		
		cout<<setw(5)<<valid[i];
		
	}*/
	cout<<" max val = "<< valid[k-1];


return 0;
}
