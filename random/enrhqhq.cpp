#include <iostream>

using namespace std;

int main()
{
	int nr = 0;
	int sum = 0;
	
	do
	{
		cout<<" enter nr: ";
		cin>>nr;
		sum+=nr;
	}
	while(nr!=0);
	
	cout<<" sum = "<<sum;
	
	return 0;
}
