#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	
	string str = "759564174782183587102004824765190123750334880277730763679965042806167092414126568340807033414872334732371694295371446525439152975114701133287773177839681757917152381714914358502729486366046889536730731669874031046298272309709873933853600423";
	
	int y = 15;
	int **m = new int*[y];
	
	for(int i = 0; i < y; i++)
	{
		m[i] = new int[i+1];
	}
	
	
	int z = 0;
	// insert
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			m[i][j] = stoi(str.substr(z,2));
			z+=2;
		}
	}
	
	// print
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout<<" "<<m[i][j];
		}
		cout<<endl;	
	}
	
	int sum = m[0][0];
	int end = 0;
	int digit = 0;
	int index = 0;
	
	// verify for m[1][0]
	while(end != y)
	{
		digit = 0;
		
		if(end != 0)
		{	
			//while(k<2)
			//{
				if(m[end][index] < m[end][index + 1]) 
					{ cout << m[end][index] << " < " << m[end][index + 1]; index++; digit = m[end][index]; }
				else { cout << m[end][index] << " > " << m[end][index + 1]; digit = m[end][index]; }
				
			//	k++;
			//}
		}
		else digit = m[end][index];
		
		cout << " \ndigit: " << digit << ", index: " << index << endl;
		
		sum += digit;
		end++;
	}
	
	cout << "\nSuma = " << sum << endl;
	
	int sum2 = 0;
	// verify for m[1][1]
	sum = m[0][0];
	end = 0;
	digit = 0;
	index = 0;
	while(end != y)
	{
		digit = 0;
		
		if(end != 0)
		{	

			if(end == 1) index = 1;
			if(index != end)
			{
				if(m[end][index] < m[end][index + 1]) 
					{ cout << m[end][index] << " < " << m[end][index + 1]; index++; digit = m[end][index]; }
				else { cout << m[end][index] << " > " << m[end][index + 1]; digit = m[end][index]; }
			}
			else { digit = m[end][index]; }
		}
		else digit = m[end][index];
		
		cout << " \ndigit: " << digit << ", index: " << index << endl;
		
		sum2 += digit;
		end++;
	}
	
	cout << "\nSuma2 = " << sum2 << endl;
	
	return 0;
}

/* TEST FOR THE 4Y PYRAMID
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int msadasd[4][] =
	{
		{ 3 },
		{ 7, 4 },
		{ 2, 4 ,6 },
		{ 8, 5, 9, 3 }	
	};
	
	string str = "3742468593";
	
	int y = 4;
	int **m = new int*[y];
	
	for(int i = 0; i < y; i++)
	{
		m[i] = new int[i+1];
	}
	
	
	int z = 0;
	// insert
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			m[i][j] = str[z]-48;
			z++;
		}
	}
	
	// print
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout<<" "<<m[i][j];
		}
		cout<<endl;	
	}
	
	int sum = m[0][0];
	int end = 0;
	int digit = 0;
	
	while(end != y)
	{
		digit = 0;
		
		for(int i = 0; i < end; i++)
		{
			if(digit < m[end][i]) digit = m[end][i];
		}
		
		sum += digit;
		end++;
	}
	
	cout << "\nSuma = " << sum << endl;
	
	return 0;
}*/
