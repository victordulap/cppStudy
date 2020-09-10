#include<iostream>

#include<conio.h>

#include<cstdlib>

#include<string.h>

#include<windows.h>

using namespace std;

int main()

{

/*

int a=10;

int b=20;

//* - val

//& - adresa

int *p;

cout<<" a="<<a<<" &a="<<&a<<endl;

p=&a;

cout<<" *p="<<*p<<" p="<<p<<endl;

p=&b;

cout<<" *p="<<*p<<" p="<<p<<endl;

*/



int a=rand()%10;

int b=rand()%10;

int c=rand()%10;

int *pa,*pb,*pc;

pa=&a;

pb=&b;

pc=&c;

cout<<" a="<<*pa<<" b="<<*pb<<" c="<<*pc<<endl;

cout<<" a+b-c="<<( *pa+*pb-*pc ) <<endl;



/*

int a,s,max=-11;

int b;

int c;

int n=rand()%10;

int *pa,*pb,*pc,*pn,*ps,*pmax;

pa=&a;

pb=&b;

pc=&c;

pn=&n;

ps=&s;

pmax=&max;

*ps=0;

cout<<" n="<<*pn<<endl;

cout<<"enter *pn=";cin>>*pn;

cout<<" n="<<*pn<<endl;

for(int i=0; i<*pn; i++)

{

*pa=rand()%10;

*pb=rand()%10;

*pc=rand()%10;

//*ps=*ps+(*pa+*pb-*pc);

*ps+=(*pa+*pb-*pc);

if( (*pa+*pb-*pc) > *pmax ) *pmax=(*pa+*pb-*pc);

if( (*pa+*pb-*pc) %2==0 ) (*pcp)++;

else *pci+=1;

cout<<" a="<<*pa<<" b="<<*pb<<" c="<<*pc<<endl;

cout<<" a+b-c="<<( *pa+*pb-*pc ) <<endl;

}

cout<<" suma="<<( *ps ) <<endl;

cout<<" max="<<( *pmax ) <<endl;
*/

/*

int V[100];

int *p;

//p=&V[0]; - error

p=V;

for(int i=0; i<10; i++)

{

*(p+i)=rand()%10;

cout<<" i="<<i<<" p+i="<<(p+i)<<" *(p+i)="<<*(p+i)<<endl;

}

cout<<endl;

cout<<" i="<<1<<" p+i="<<(p+1)<<" *(p+i)="<<*(p+1)<<endl;

cout<<" i="<<5<<" p+i="<<(p+5)<<" *(p+i)="<<*(p+5)<<endl;

cout<<" i="<<50<<" p+i="<<(p+50)<<" *(p+i)="<<*(p+50)<<endl;
*/

return 0;

}
