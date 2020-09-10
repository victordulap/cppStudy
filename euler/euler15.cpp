#include <iostream>

using namespace std;

int main()
{
	int maxr = 2, maxd = 2;
	int right = maxr, down = maxd;
	int route = 0;
	
	int r=0, d=0;
	while(right!=0 && down!=0)
	{
		/*if(r<maxr) r++;
		else if(d<maxd) d++;
		else route++;
		
		if(r==maxr-1) right--;
		if(d==maxd-1) down--;*/
		if(r<maxr) r++;
		if(r==maxr)
		{
			if(d<maxd) d++;
			if(d==maxd)
		}
	}
	
	cout<<" routes: "<<route<<endl;
	
	return 0;
}
