#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<conio.h>
#include<ctime>

using namespace std;

int main()

{srand(time(0));


int suma=0;


for(int i=0; i<1000; i++)
{
	if(i%3==0 || i%5==0) { suma+=i; }
}

cout<<"suma = "<<suma<<endl;
return 0;
}
