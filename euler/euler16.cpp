#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string str;
	
	str = to_string(pow(2,1000));

	cout << str << endl;
	
	int i = 0;
	int sum = 0;
	do
	{
		sum += (str[i] - 48);
		i++;
	}while(str[i] != '.');
	
	cout<<" sum = "<<sum<<endl;
	
	return 0;
}
