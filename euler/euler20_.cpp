#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream> // pt string stream
#include "D:\\vic\\bigint_cpp\\bigint_v2\\bigint.cpp"

using namespace std;

bigint factorial(int nr)
{
	bigint res = 1;

	for (int i = 1; i <= nr; i++)
	{
		res *= i;
	}

	return res;
}

int main()
{
	/*for (int i = 1; i <= 100; i++)
	{
		cout << i << " -> " << factorial(i) << endl;
	}*/

	//string nr = to_string(factorial(100));

	string nr;
	
	bigint x = factorial(100);
	
	
	// (start) conversia din bigint in string prin stringstream 
		//v1
	/*stringstream ss; 
	 
  	ss << x; 
  	
  	ss >> nr;*/
  	
  		//v2
  	nr = x.to_string();
  	// (end) conversia din bigint in string prin stringstream 
  	
  	cout << " nr = " << nr << endl;

	int sum = 0;
	for (int i = 0; i < nr.length(); i++)
	{
		sum += nr[i]-48;
	}

	cout << sum;

	return 0;
}
