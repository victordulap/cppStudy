#include <iostream>

using namespace std; 

int main()
{
	unsigned long long int nr = 18;
	int chain = 1;
	int maxchain=0, maxnr=0;
	int n = 999500;//1000000;
	int start = 0;
	
	cout<<" "<<nr;
	
	for(int i=0; i<n; i++)
	{
		nr = n-i;
		start = nr;
		cout<<"\n start nr = "<<nr;
		while(nr!=1)
		{
			if(nr%2==0)
			{
				nr/=2;
			}
			else
			{
				nr = 3*nr + 1;
			}
			chain++;
			//cout<<" "<<nr;
		}
		if(chain>maxchain){ maxchain = chain; maxnr = start; }
		cout<<" -> chain = "<<chain<<endl;
		cout<<" maxchain = "<<maxchain<<" : maxnr = "<<maxnr<<endl;
		//system("pause");
	}
	

	
	return 0;
}
