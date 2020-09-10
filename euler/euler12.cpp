#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

int divider(long long nr)
{
	bool x=0;
	int k=0;
	bool ok=0;

	for(int i=1; i<=sqrt(nr); i++)
	{
		if(nr%i==0) k++;
	}
	x++;
	
	if(k>500) x=1;

	return x;
}

int main()
{
	long int n=1;
	long long nr;//=new long long;
	
	
	bool check=0;
	
	while(!check)
	{
		nr=0;
		for(long long i=1; i<=n; i++)
		{
			nr+=i;
		}
		//cout<<n<<". "<<nr<<"  []  ";
		n++;
	//	if(n%10==0)  cout<<"		"<<nr;
	//	cout<<setw(15)<<nr<<'-'<<divider(nr);
		if (divider(nr)>=500) {check=1;}
	}
	
	cout<<"\n nr = "<<nr<<endl;
//	cout<<divider(4);
	
	return 0;
}
