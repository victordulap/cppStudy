#include<iostream>

using namespace std;

bool check_digit(int nr, int digit)
{
	int digittocheck;
	
	while(nr!=0)
	{
		digittocheck = nr%10;
		nr = nr/10;
		
		if(digittocheck == digit)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int nr = 0;
	int digit = 0;
	
	cout<<" enter nr: "; cin>>nr;
	cout<<" enter digit: "; cin>>digit;
	
	if(nr<0) nr = nr * -1;
	
	//if( check_digit(nr, digit) == false ) cout<<" number "<<nr<<" contains digit "<< digit;
	//else cout<<" number "<<nr<<" doesn't contain digit "<< digit;
	
	for(int i=1; i<=nr; i++)
	{
		if( check_digit(i, digit) == true ) cout<<" "<<i;
	}	
	
	return 0;
}
