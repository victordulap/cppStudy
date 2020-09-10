#include <iostream>
#include <iomanip>

using namespace std;

int d(int nr)
{
	int D = 0;
	for (int i = 1; i <= nr / 2; i++)
	{
		if (nr % i == 0)
		{
			D += i;
		}
	}

	return D;
}

int main()
{
	long sum = 0;
	int verify;
	for (int i = 1; i < 10000; i++)
	{
		verify = d(i);
		if (d(verify) == i && verify != i) 
		{
			sum += i;
			//sum += verify;
			cout << setw(5) << i << " | " << verify << endl;
		}
	}

	//sum /= 2; //because each number repeats twice
	cout << "\nsum = " << sum << endl;

	return 0;
}

//#include <iostream>
//#include <iomanip>
//#include <list>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	const int size = 10000;
//
//	int numere[size][2] = { 0 }; // [size]: max numbers / [2]: 0 - nr, 1 - sum
//
//	//loading in 2d array
//	for (int i = 0; i < size; i++)
//	{
//		numere[i][0] += i; // nr
//		for (int j = 1; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				numere[i][1] += j; // sum
//			}
//		}
//	}
//
//	/*for (int i = 0; i < size; i++)
//	{
//		cout << setw(5) << numere[i][0] << " | sum = " << numere[i][1] << endl;
//	}
//
//	cout << "\n\n\n";*/
//
//	list <int> finalNumbers;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (numere[i][1] < size)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				if (numere[i][1] == numere[j][0])
//				{
//					// check if number doesnt repeat
//					if (!(find(finalNumbers.begin(), finalNumbers.end(), numere[j][0]) != finalNumbers.end()))
//					{
//						finalNumbers.push_back(numere[i][0]);
//						finalNumbers.push_back(numere[j][0]);
//					}
//				}
//			}
//		}
//	}
//
//	unsigned long sum = 0;
//
//	finalNumbers.unique();
//
//	list <int>::iterator it;
//	for (it = finalNumbers.begin(); it != finalNumbers.end(); it++)
//	{
//		cout << setw(5) << *it << endl;
//	}
//
//	for (it = finalNumbers.begin(); it != finalNumbers.end(); it++)
//	{
//		sum += *it;
//	}
//
//	cout << " Final sum = " << sum << endl;
//
//	return 0;
//}