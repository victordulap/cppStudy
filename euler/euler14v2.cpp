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
	
	for(int i=1; i<n; i++)
	{
		chain = 1;
		nr = n-i;
		start = nr;
		cout<<"\n start nr = "<<nr;
		while(nr!=1)
		{
			nr%2==0 ? (nr/=2) : (nr = 3*nr + 1);
			chain++;
			//cout<<" "<<nr;
		}
		if(chain>maxchain){ maxchain = chain; maxnr = start; }
		cout<<" -> chain = "<<chain<<endl;
		cout<<" maxchain = "<<maxchain<<" : maxnr = "<<maxnr<<endl;
		//system("pause");
	}
	/*
		 start nr = 1 -> chain = 1
		 maxchain = 525 : maxnr = 837799
		
		 --------------------------------
		 Process exited after 1113 seconds with return value 0
	*/
	return 0;
}
