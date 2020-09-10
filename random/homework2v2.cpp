#include<iostream>
using namespace std;
int main()
{
	
	double a=4,b=2,c=9;
	double R1=a+b-c;
	double R2=(b/c)/a+(a/c);	
	double R3=R1/R2;
	double R4=R3+(a/b)-c;
	
	cout<<"\n  a=4\n  b=2\n  c=9\n"<<endl;
	cout<<"	/             \\\n	|             |\n	|   (a+b-c)   |\n	| ----------- |+(a:b)-c="<<R4<<endl;
	cout<<"	|   /b\\       |\n	|   |-|:a+a:c |\n	|   \\c/       |\n	\\             /"<<endl;
	cout<<"\n\n  Result = "<<R4<<endl;

	return 0;
	
}
