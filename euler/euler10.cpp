#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

int prime(int nr)
{bool ok=1;
	for(int i=2; i<(int)sqrt(nr)+b1/*(nr/2)+1*/; i++)
	{
		if(nr==2||nr==3) ok=1;
		else if (nr%i==0) {ok=0; break;}
	} 
	
	return ok;
}


int main()
{
	int nr=2;
	/*while(1)
	{
		cout<<" enter nr: "; cin>>nr;
		cout<<nr<<" prime= "<<prime(nr)<<endl;
	}*/
	
	unsigned long long int s=0;
	//long long int s=0;
	
	for(nr=2; nr<2000000; nr++)
	{
		if(prime(nr)==1) {s+=nr; /*if (nr>1900000) cout<<setw(10)<<nr;*/}	
	}
	cout<<"\n\n\t\t suma="<<s<<endl;
}
