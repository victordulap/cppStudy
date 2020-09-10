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
	int days = 1; // incepem cu 1 pentru ca 1 cade marti si trebuie ziua - 1 (dupa cum am inteles)

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

//lucrator
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	enum Months
//	{
//		January, February, March, April,
//		May, June, July, August,
//		September, October, November, December
//	};
//
//	int n_sundays = 0;
//	int year = 1900;
//	int days = 0;
//
//	while (year < 1901)
//	{
//		for (int i = 0; i < 12; i++)
//		{
//			if (i == January || i == March || i == May || i == July || i == August || i == October || i == December)
//			{
//				days += 31;
//			}
//			else if (i == February)
//			{
//				if (year % 100 != 0 && year % 4 == 0)
//				{
//					//cout << "leap year" << endl;
//					days += 29;
//				}
//				else if (year % 100 == 0)
//				{
//					if (year % 400 == 0)
//					{
//						//cout << "leap year" << endl;
//						days += 29;
//					}
//					else
//					{
//						days += 28;
//					}
//				}
//				else
//				{
//					days += 28;
//				}
//			}
//			else
//			{
//				days += 30;
//			}
//
//			if ((days + 1) % 7 == 0)
//			{
//				n_sundays++;
//				cout << i + 1 << ". dayyyys: " << days << endl;
//				cout << "n_sundays = " << n_sundays << endl;
//			}
//			cout << i + 1 << ". days: " << days << endl;
//		}
//
//		//n_sundays += CalcSundays(year);
//
//		//cout << year << " / sundays: " << CalcSundays(year) << " | total: " << n_sundays << endl;
//
//		year++;
//	}
//
//	cout << "sundays: " << n_sundays << endl;
//
//	return 0;
//}

