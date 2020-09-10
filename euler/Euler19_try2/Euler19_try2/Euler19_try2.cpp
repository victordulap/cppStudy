#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*enum Months
	{
		January = 31, February = 28, FebLeap = 29, March = 31, April = 30,
		May = 31, June = 30, July = 31, August = 31,
		September = 30, October = 31, November = 30, December = 30
	};*/

	enum Months
	{
		January, February, March, April,
		May, June, July, August,
		September, October, November, December
	};

	int year = 1900;

	for (int i = 0; i <= Months::December; i++)
	{
		cout << (Months(i)) ;
	}
	year++;
}