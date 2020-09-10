#include <iostream>
#include <string>
#include <stdint.h>
#include <stdlib.h>

using namespace std;
/*
unsigned long long int factorial(int nr)
{
	unsigned long long int r = 1;
	for(int i=1; i<=nr; i++)
	{
		r = r * i;
	}
	
	return r;
}*/


unsigned long long int factorial(unsigned long long int nr)
{
	unsigned long long int r = 1;
	for(int i=1; i<=nr; i++)
	{
		r = r * (i*0.1);
	}
	
	return r;
}

int main()
{
	//string rs = to_string( (factorial(2+2)) / ( factorial(20)*factorial(20) ) );
	//cout<<" paths = "<<rs;
	
	//unsigned __int64 rs = (factorial(20+20)) / ( factorial(20)*factorial(20) );
	//string str = to_string(rs);
	//cout<<" paths = "<<str;
	
	/*string str1 = to_string( (factorial(20+20)) );
	string str2 = to_string( factorial(20)*factorial(20) );
	//string str3 = to_string()
	
	cout.precision(50);
	cout<<str1<<endl;
	cout<<str2<<endl;;*/
	
	string rs =  to_string( (factorial(20+20)) / ( factorial(20)*factorial(20) ) );
	
	
	//string rs = to_string( (factorial(2+2)) / ( factorial(20)*factorial(20) ) );
	cout<<" paths = "<<rs;
	
	/*for(int i=1; i<50; i++)
	{
		cout<<i<<" -> "<<factorial(i)<<endl;
		//system("pause");
	}*/
	
	return 0;
}
