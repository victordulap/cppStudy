#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<conio.h>
#include<ctime>
#include<cmath>


using namespace std;

int square_check(int a, int b)
{
float x = sqrt( (float)(a+b) );
 
if (x == (int)x)
return 1;
 
else 
return 0;
 
}


int main()
{	
	srand(time(0));
	
	int a, b, aa, bb;
	int result=0;
	bool x=0;
	
	for(a=1; a<1000; a++)
	{
		if(x==1) {break;}
		
		for(b=2; b<1000; b++)
		{
			
			if(a<b)
			{
				aa=a*a;
				bb=b*b;
				
				if( square_check(aa,bb) == 1 )	
				{
					if( a+b+sqrt(aa+bb) == 1000 )
					{
					result = a*b*sqrt(aa+bb);
					cout<<"\n a = "<<a<<"   b = "<<b<<"   c = "<<sqrt(aa+bb)<<endl;
					x=1;
					break;
					}
				}
			}
			
		}
		
	}
	
	cout<<"result = "<<result;
	
	return 0;
}
