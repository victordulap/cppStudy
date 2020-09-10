#include <iostream>
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
	long long int nr = 600851475143;
	
	for(int i=1; i<sqrt(nr); i++)
	{
		if(nr%i == 0 && prime(i))
		{
			cout<<" "<<i;
		}
	}
	
	return 0;
}
