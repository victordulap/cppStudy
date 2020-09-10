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
 
 
 int M[100][100];
 short x,n,x1,y;
 n=5;
 y=0;
 
 for(int i=0;i<n;i++)
 x=rand()%5;
 M[100][y]=x;
 {
      for(int j=0;j<x;j++)
  	  {
      M[i][j]=rand()%10;
      } 
      y++;
 } 
 
 y=0;
  for(int i=0;i<n;i++)
  x=rand()%10;
  {
      for(int j=0;j<M[100][y];j++)
      {
      cout<<setw(2)<<M[i][j];
      } 
      y++;
      cout<<endl;
  } 
 
 
 
return 0;
}
