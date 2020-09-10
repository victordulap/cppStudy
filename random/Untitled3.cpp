#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<ctime>

using namespace std;

int main()
{srand(time(0));

FILE *f;

int M[100][100],n;

cout<<"Enter NxN =";
cin>>n;

cout<<endl;


int V[50];
//create
for(int i=0, r; i<n; i++)
{

r=rand()%6+3;
V[i]=r;

 for(int j=0; j<r; j++)
 {
 M[i][j]=rand()%10;

 }


}

//show
for(int i=0, r; i<n; i++)
{

 for(int j=0; j<V[i]; j++)
 {
 cout<<setw(3)<<M[i][j];
 }

cout<<"\n"<<endl;
}



f=fopen("E:\\Codes C++\\test\\test.txt","w+");
fprintf(f,"%d\n",n);
   	

//save in file
for(int i=0; i<n; i++)
{

 for(int j=0; j<V[i]; j++)
 {
    fprintf(f,"%d %c",M[i][j],' ');
   	fprintf(stdout,"%d %c",M[i][j],' ');
 }
  fprintf(f,"\n");
   	fprintf(stdout,"\n");
}

cout<<endl;


fclose(f);





f=fopen("E:\\Codes C++\\test\\testsuma.txt","w+");

int s=0;

for(int i=0, r=0; i<n; i++)
{
s=0;
for(int j=0; j<V[i]; j++)
{
s+=M[i][j];



}
fprintf(f,"%d",s);
fprintf(stdout,"%d",s);

fprintf(f,"\n");
fprintf(stdout,"\n");
}



return 0;
}
