#include <iostream>

using namespace std;

int main()
{
	enum Months
	{
		January, February, March, April,
		May, June, July, August,
		September, October, November, December
	};

	int n_sundays = 0;
	int year = 1901;
	int days = 1;
	// days starts at 1 since 1 date of 1901 picks on tuesday, so its gonna be tuesday (2) - 1 = 1

	while (year < 2001)
	{
		cout << "year: " << year << endl;
		for (int i = 0; i < 12; i++)
		{
			if (i == January || i == March || i == May || i == July || i == August || i == October || i == December)
			{
				days += 31;
			}
			else if (i == February)
			{
				if (year % 100 != 0 && year % 4 == 0)
				{
					days += 29;
				}
				else if (year % 100 == 0)
				{
					if (year % 400 == 0)
					{
						days += 29;
					}
					else
					{
						days += 28;
					}
				}
				else
				{
					days += 28;
				}
			}
			else
			{
				days += 30;
			}

			if ((days + 1) % 7 == 0)
			{
				//it's gonna show that the next month starts at 1st in a day of sunday

				n_sundays++;
				cout << i + 1 << ". dayyyys: " << days << endl;
				cout << "n_sundays = " << n_sundays << endl;	
			}
			cout << i + 1 << ". days: " << days << endl;
		}

		cout << endl;

		year++;
	}

	cout << "sundays: " << n_sundays << endl;

	return 0;
}