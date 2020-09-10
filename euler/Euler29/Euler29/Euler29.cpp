#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{
	list<string> nrs;

	for (int a = 2; a <= 100; a++)
	{
		for (int b = 2; b <= 100; b++)
		{
			nrs.push_back(to_string(pow(a, b)));
		}
	}

	//list<string>::iterator it;
	nrs.sort();
	nrs.erase(unique(nrs.begin(), nrs.end()), nrs.end());

	cout << nrs.size();
}