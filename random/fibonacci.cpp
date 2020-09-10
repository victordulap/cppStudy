#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "enter n: ";
	cin >> n;
	
	int nr1=0, nr2=1, temp;
	for(int i=0; i<n; i++)
	{
		temp = nr1;
		nr1 = nr2;
		nr2 += temp;
		cout << " " << nr1;
	}
	
	return 0;
}
