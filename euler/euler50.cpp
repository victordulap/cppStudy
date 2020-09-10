#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int prime(int nr)
{
	bool r = 1;
	
	if(nr == 1 || nr == 2) r = 1;
	else
	{
		for(int i=2; i<sqrt(nr)+1; i++)
		{
			if(nr%i==0) r = 0;
		}
	}
	
	return r;
}

int main()
{
	int sum=0;
	int oldsum;
	int prsum;

		for(int i=2; i<1000000; i++)
		{
			if(prime(i)) 
			{
				//oldsum = sum;
				sum += i;
				if(prime(sum)) { prsum=sum; cout<<"\n sum = "<<prsum<<endl; }
				cout<<" "<<i; 
			}
			if(sum>10000000) break;
		}
	cout<<"\n sum = "<<prsum<<endl;
	
	return 0;
}
