#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<ctime>

using namespace std;

#include "D:\\DulapVictor\\project\\structuri.cpp"


int main()
{
	strcat(User[0].login,"admin");
//	User[666].login="admin";
strcat(User[0].pass,"admin");
//	User[666].pass="admin";
	User[0].tip=1;
	User[0].stare=1;
	User[0].id=66666;
	
	FILE *firstadmin;
	
	firstadmin=fopen("D:\\DulapVictor\\project\\BD\\user.step","w+b");
	
	fwrite(User,sizeof(user),1,firstadmin);
	
	fclose(firstadmin);
	
return 0;
}
