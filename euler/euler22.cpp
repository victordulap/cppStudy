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

	list<string> name;

	string temp = "";
	for (int i = 0, j = 0; i < names.length(); i++)
	{
		if (names[i] == ",")
		{
			name.push_back(temp);
			temp = "";
			j = 0;
		}
		else
		{
			cout << i << endl;
			temp[j];
			j++;
		}
	}

	/*list <string> ::iterator it;
	for (it = name.begin(); it != name.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';*/

	return 0;
}
