#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <list>

using namespace std;

void replaceAll(string& str, const string& from, const string& to)
{
	if (from.empty())
		return;

	int start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
	}
}

int main()
{
	string path = "D:\\Codes C++\\Euler22\\names.txt";

	ifstream File;
	File.open(path); //open the input file

	stringstream strStream;
	strStream << File.rdbuf(); //read the file
	string names = strStream.str(); //str holds the content of the file

	replaceAll(names, "\"", "");

	//cout << names << endl;

	for (int i = 0; i < names.length(); i++)
	{
		cout << names[i];
	}

	list<string> name;
	list<char> temp;
	for (int i = 0, j = 0; i < names.length(); i++)
	{
		cout << i << endl;
		temp.push_back(names[i]);
		j++;
		if (names[i] == ',')
		{
			string temp2;
			list<char>::iterator it = temp.begin();
			for (it = temp.begin(); it != temp.end(); it++)
			{
				temp2[i] = *it;
			}
			name.push_back(temp2);
			temp.clear();
			j = 0;
		}

	}

	/*list <string> ::iterator it;
	for (it = name.begin(); it != name.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';*/

	return 0;
}