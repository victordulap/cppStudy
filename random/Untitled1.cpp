//EulerProblem3
#include<iostream>
#include<math.h>

// using standard namespace
using namespace std;

// function definition
int prime (long int x)
{
  int a=0;
  for (int j=2;j<=x/2;j++)
     {
         if (x%j==0)
           {
             a=1;
             break;
           }
    }
   return (a);
}


int factor(long int a)
{
   long int x=1;
   for (int i=2;i<a/2;i++)
   {
     if (a%i==0 )
     {
         x=a/i;
         if (prime (x)==0)
         {
           break;
         }

     }
   }
   return x;
}
//End of Function

//Main function begins
int main ()
   {
       long int a;
       cout<<"Enter the number "<<endl;
       cin>>a;
       cout<<"The largest prime factor is "<<factor(a);
   }
//End Of Main
