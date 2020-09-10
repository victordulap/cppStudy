#include<stdio.h>
#include <iostream>
#include<iomanip>

using namespace std;

int XMAX = 21; // cu unu mai mult x |
int YMAX = 21; // cu unu mai mult y ---

int main() {
	long long int matrix[XMAX][YMAX];
	int i,j;
	
	for(i=0;i<=XMAX-1;i++) 
	{
		matrix[XMAX-1][i]=1;
		matrix[i][YMAX-1]=1;
	}
	
	
	for(i=XMAX-2;i>=0;i--)
		for(j=YMAX-2;j>=0;j--)
			matrix[i][j]=matrix[i+1][j]+matrix[i][j+1];
	std::cout<<std::endl;
	printf("%lld\n",matrix[0][0]);
	
	/*for(int i = 0; i < XMAX; i++)
	{
		for(int j = 0; j < YMAX; j++)
		{
			std::cout<<setw(5)<<matrix[i][j];
		}
		std::cout<<std::endl;
	}*/
}
