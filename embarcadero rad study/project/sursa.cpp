

using namespace std;

int pass()
{	
bool acces=0;
char pass[20];
	int	i=0,C=0, SEC=10;
	

	cout<<"\n\n\n\t [0] Enter password::";


while(1)
{

pass[i]=_getch();

//backspace
if( int(pass[i])==8 )
{ if(i>0){ cout<<"\b \b"; i--; } }
//backspace

//enter
else if( int(pass[i])==13)
{ pass[i]=0;

for(int i=0; i<nruser; i++)
{
if(strcmp(User[i].pass,pass)==0)
{cout<<" Password correct, logging in..."<<endl; return acces;}	

else
	{ 	
	

	
	
		cout<<"\n\n\t["<<C<<"] :: ERROR :: Password INCORRECT!"<<endl; 
		system("pause");
		i=0;
		C++;
		if(C%3==0&&C<=18)
		{
			for(int i=1; i<=SEC; i++)
			{system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t0"<<i<<" seconds...";
				Sleep(200);
			}
				SEC+=10;
		}
		else if(C==21)
		{
		return 0;	
		}system("cls");
		cout<<"\n\n\n\t"<<'['<<C<<"] Enter Password: ";
	}
}




}
//enter

//character
else
{
cout<<pass[i];
	i++;
}
//character


}
		
return acces;	
}





int login()
{bool type=0;
	
	char login[20];
	int i=0,C=0, SEC=10;
	
	
	cout<<"\n\n\n\t[0] Enter Login: ";
	while(1)
{

login[i]=_getch();

//backspace
if( int(login[i])==8 )
{ if(i>0){ cout<<"\b \b"; i--; } }
//backspace

//enter
else if( int(login[i])==13)
{ login[i]=0;

for(int i=0; i<nruser; i++)
{
if(strcmp(User[i].login,login)==0)
{USERi=i; type=User[i].tip; cout<<" Login correct\n"<<endl; if(pass()) {return type;} }	

else
	{ 	
	

	
	
		cout<<"\n\n\t["<<C<<"] :: ERROR :: Login INCORRECT!"<<endl; 
		system("pause");
		i=0;
		C++;
		if(C%3==0&&C<=18)
		{
			for(int i=1; i<=SEC; i++)
			{system("cls");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t0"<<i<<" seconds...";
				Sleep(200);
			}
				SEC+=10;
		}
		else if(C==21)
		{
		return 0;	
		}system("cls");
		cout<<"\n\n\n\t"<<'['<<C<<"] Enter Login: ";
	}

}




}
//enter

//character
else
{
cout<<login[i];
	i++;
}
//character


}
	
	
	
			/*								//copypaste
	
char pass[255];

int i=0,C=0, SEC=10;

cout<<"\n\n\n\t [0] Enter password::";


while(1)
{
pass[i]=_getch();


if( int(pass[i])==8 )
{ if(i>0){ cout<<"\b \b"; i--; } }


else if( int(pass[i])==13)
{ pass[i]=0;

if(strcmp(password,pass)==0){ cout<<" Password OK"<<endl; break;}

else

{system("cls");
cout<<"\n\n\n\t ["<<C<<"] Password ERROR"<<endl; system("pause");
i=0;
C++;

if( C==3 )
 {

for(int i=0; i<SEC; i++)
{
system("cls");
cout<<" 00:00:0"<<i;
Sleep(200);
}

 }

system("cls");

cout<<"\n\n\n\t ["<<C<<"] Enter password::";

}

}


else
{
//cout<<pass[i];

cout<<'*';

i++;
}


}
						//copypaste	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//return type;
}


/*
int login()
{system("cls");
	
bool type;

char login[20];
char pass[20];	

int i=0,C=0, SEC=10;

cout<<"\n\n\n\t [0] Enter password::";

while(1)
{

pass[i]=_getch();

if( int(pass[i])==8 )
{ if(i>0){ cout<<"\b \b"; i--; } }

else if( int(pass[i])==13)
{ pass[i]=0;

for(int i=0; i<nruser; i++)
{
if(strcmp(User[i].pass,pass)==0) {USERi=i; type=User[i].tip; cout<<" Password correct, logging in..."<<endl; return type;}	

else
	{ 	
		cout<<"\n\n\t["<<C<<"] :: ERROR :: Password INCORRECT!"<<endl; 
		system("pause");
		C++;
		i=0;
		system("cls");
		if(C%3==0&&C<=18)
		{
			for(int i=1; i<=SEC; i++)
			{
				cout<<"\n\n\n\n\n\t\t\t\t\t\t0"<<i<<" seconds...";
				Sleep(896);
				system("cls");
			
			}
				SEC+=10;
		}
		else if(C==21)
		{
		return 0;	
		}
		cout<<"\n\n\n\t"<<'['<<C<<"] Enter password: ";
	}
}




}

else
{
cout<<'*';
	i++;
}

}

return type;	
}*/





void statistica()
{
	nrstat=1;
	
	stat=fopen("raport.txt","w+");
	fprintf(stat,"*********R_A_P_O_R_T*********\n");
	for(int i=0; i<nrstat; i++)
	{
		fprintf(stat,"%5s %s %d %d","iOn","STEP",777,0); // %5s == setw(5)
	}
	
	fclose(stat);
	
	system("raport.txt");
}




int autentificare()
{
	
	for(int i=0; i<nruser; i++)
	{
	//if( strcmp(User[i].pass, pass)==0 ) USERi=i;	
	}
	
//	return User[i].tip;
}




void statedit(int i)
{	
	//STAT[USERi].autentificari++;
}






char* filename()
{
	char *a=new char[255];
	char *b=new char[255];
	

	strcpy(b,"D:\\DulapVictor\\project\\createdfiles\\");
	
	
	cout<<" enter file name:"; cin>>a;
	
	strcat(b,a);
	strcat(b,".step");


	
	return b;
}





void config()
{
	if((f=fopen("D:\\DulapVictor\\project\\config.ini","r+"))==NULL) cout<<" ERROR ahahaha >:) "<<endl;
	
	fscanf(f,"%s",&FNuser);
	fscanf(f,"%s",&FNstud);
	fscanf(f,"%s",&FNstat);
	fclose(f);
}





template <typename T>
int load(T st[],char FN[])
{
	f=fopen(FN,"r+b");
	
	int N=fread(st,/*sizeof(T)*/sizeof(st[0]), 1000 ,f);
	
	fclose(f);
	
	return N;
}


template <typename T>
void save(T st[],char FN[],int nr)
{
	f=fopen(FN,"w+b");
	
	fwrite(st,sizeof(st[0]), nr ,f);
	
	fclose(f);

}




void editstudent(int x)
{
	
	switch(x)
	{
		case 1: {  } break;
		case 2: {  } break;
		case 3: {  } break;
	}
	 	
}










void insertuser()
{bool checker=0;
	nruser=load(User,FNuser);
	
	system("cls");
	
	do
	{checker=0;
	system("cls");
	cout<<" Enter login: "; cin>>User[nruser].login;
	
	for(int i=0; i<nruser; i++)
	{
		if( i!=nruser && (strcmp(User[nruser].login,User[i].login))==0 )
		 {checker=1; cout<<" login existing, change the login..."<<endl; system("pause");}
	
	}
	
	}while(checker==1);
	
	cout<<" Enter password: "; cin>>User[nruser].login;
	cout<<" Enter type: "; cin>>User[nruser].tip;
	User[nruser].stare=1;
	User[nruser].id=nruser;
	
	nruser++;
	save(User,FNuser,nruser);
}



void showuser(int n)
{
	system("cls");
	
	int a=0,b=5;

while(1)
 {
system("cls");

cout<<"Nr."<<" login "<<" type "<<" stare "<<" id "<<endl;
cout<<"-------------------------------"<<endl;

for(int i=a; i<b; i++)
{

cout<<setw(3)<<i+1<<left<<setw(10)<<User[i].login
<<setw(4)<<User[i].tip<<"  "
<<setw(4)<<User[i].stare<<"  "
<<setw(7)<<User[i].id<<endl;
cout<<"-------------------------------"<<endl;

}


char Key=_getch();

if( Key=='+' || Key=='=') { a+=5; b+=5; if( b>=n ){ a=n-5; b=n; } }
else if( Key=='-') { a-=5; b-=5; if( a<0 ){ a=0; b=5; } }
else if( (int)Key== 27) { break; }

 }
 
}

void showoneuser(int nruser)
{cout<<"----------------------------------------------------------|"<<endl;
cout<<"\n\tUser Login:"<<User[nruser].login<<endl;
cout<<"\tUser stare:"<<User[nruser].stare<<endl;
cout<<"\tUser tip:"<<User[nruser].tip<<endl;
cout<<"\tUser id:"<<User[nruser].id<<endl;
}

void finduserlogin()
{ system("cls");
bool x=0;
	char login [255];
	
  cout<<" enter login: "; cin>>login; 
	
	for(int i=0; i<nruser; i++)
	{
		
		if(strcmp(User[i].login,login)==0)
    			{x=1; showoneuser(i); } 

		
	}
	if(x==0){ cout<<" Erorr, nu sunt coincidente !!"<<endl; }
	system("pause");
}

int finduserid()
{ system("cls");
bool x=0;
	int id;
	
  cout<<" enter id: "; cin>>id; 
	int i=0;
	for(i=0; i<nruser; i++)
	{
		
		if(User[i].id==id)
    			{x=1; showoneuser(i); } 

		
	}
	if(x==0){ cout<<" Erorr, nu sunt coincidente !!"<<endl; }
	system("pause");
	
	return i;
}



void insertstudent()
{
	system("cls");
	cout<<" Enter name: "; cin>>Stud[nrstud].name;
	cout<<" Enter family: "; cin>>Stud[nrstud].family;
	cout<<" Enter email: "; cin>>Stud[nrstud].email;
	cout<<" Enter grupa: "; cin>>Stud[nrstud].grupa;
	cout<<" Enter age: "; cin>>Stud[nrstud].age;
	cout<<" Enter media: "; cin>>Stud[nrstud].media;
	Stud[nrstud].idnp=(nrstud+10000);
	Stud[nrstud].active=1;
	
	nrstud++;
	
	save(Stud,FNstud,nrstud);
}


void showstudent(int n)
{
	
	int a=0,b=5;

while(1)
 {
system("cls");

cout<<"Nr."<<" nume     "<<"   family    "<<" age "<<"  grupa "<<" media "<<" idnp "<<" email"<<endl;
cout<<"--------------------------------------------------------------------------"<<endl;

for(int i=a; i<b; i++)
{

cout<<left<<setw(3)<<i+1<<" "
<<left<<setw(10)<<Stud[i].name<<"  "
<<left<<setw(10)<<Stud[i].family<<" "
<<setw(6)<<Stud[i].age
<<left<<setw(7)<<Stud[i].grupa
<<left<<setw(5)<<Stud[i].media<<" "
<<left<<setw(7)<<Stud[i].idnp
<<Stud[i].email<<endl;
cout<<"--------------------------------------------------------------------------"<<endl;

}


char Key=_getch();

if( Key== '+' || Key=='=') { a+=5; b+=5; if( b>=n ){ a=n-5; b=n; } }
else if( Key== '-') { a-=5; b-=5; if( a<0 ){ a=0; b=5; } }
else if( (int)Key== 27) { break; }

 }	
}



void showonestud(int i)
{cout<<"----------------------------------------------------------|"<<endl;
cout<<"\n\tStudentul Name:"<<Stud[i].name<<endl;
cout<<"\tStudentul Family:"<<Stud[i].family<<endl;
cout<<"\tStudentul grupa:"<<Stud[i].grupa<<endl;
cout<<"\tStudentul varsta:"<<Stud[i].age<<endl;
cout<<"\tStudentul email:"<<Stud[i].email<<endl;
cout<<"\tStudentul media:"<<Stud[i].media<<endl;
cout<<"\tStudentul IDNP:"<<Stud[i].idnp<<endl;
cout<<"\tStudentul active ( 1-yes / 0-not ):"<<Stud[i].active<<endl;
}

int findstudname()
{bool x=0;
system("cls");
char name[255];

cout<<" enter name:"; cin>>name;

for(int i=0; i<nrstud; i++)
 {
	if( strcmp(Stud[i].name,name)==0 )
    { x=1; showonestud(i); }
 } 

if(x==0){ cout<<" Erorr nu sunt coincidente !!"<<endl; }
system("pause");
return x;
}

int findstudfamily()
{bool x=0;system("cls");
char name[255];

cout<<" enter family:"; cin>>name;

for(int i=0; i<nrstud; i++)
 {
	if( strcmp(Stud[i].family,name)==0 )
    { x=1; showonestud(i); }
 } 

if(x==0){ cout<<" Erorr nu sunt coincidente !!"<<endl; }
system("pause");
return x;
}

int findstudage()
{bool x=0;system("cls");
int name;

cout<<" enter age:"; cin>>name;

for(int i=0; i<nrstud; i++)
 {
	if( Stud[i].age==name)
    { x=1; showonestud(i); }
 } 

if(x==0){ cout<<" Erorr nu sunt coincidente !!"<<endl; }
system("pause");
return x;
}

int findstudidnp()
{int x=-1;system("cls");
int name;

cout<<" enter idnp:"; cin>>name;
int i=0;
for(int i=0; i<nrstud; i++)
 {
	if( Stud[i].idnp==name)
    { x=1; showonestud(i); }
 } 

if(x==-1){ cout<<" Erorr nu sunt coincidente !!"<<endl; }
system("pause");

if(x==1)
{
return i;	
}

else {return x;}
}

int findstudgrupa()
{bool x=0;system("cls");
char name[255];

cout<<" enter grupa:"; cin>>name;

for(int i=0; i<nrstud; i++)
 {
	if( strcmp(Stud[i].grupa,name)==0 )
    { x=1; showonestud(i); }
 } 

if(x==0){ cout<<" Erorr nu sunt coincidente !!"<<endl; }
system("pause");
return x;
}


void editstudname()
{system("cls");
	int n=-1;
	
	do
	{
	
	n=findstudidnp();
		
	}while(n==-1);
	
	if(n!=-1)
	{
	cout<<" Enter new "<<Stud[n].name<<"'s name: "; cin>>Stud[n].name;
save(Stud,FNstud,nrstud);
	}
	
}

void editstudfamily()
{system("cls");
	int n=findstudidnp();
	cout<<" Enter new "<<Stud[n].family<<"'s family: "; cin>>Stud[n].family;
save(Stud,FNstud,nrstud);}

void editstudage()
{system("cls");
	int n=findstudidnp();
	cout<<" Enter new "<<Stud[n].name<<"'s age: "; cin>>Stud[n].age;
save(Stud,FNstud,nrstud);}

void editstudgrupa()
{system("cls");
	int n=findstudidnp();
	cout<<" Enter new "<<Stud[n].name<<"'s grupa: "; cin>>Stud[n].grupa;
save(Stud,FNstud,nrstud);}

void editstudmedia()
{system("cls");
	int n=findstudidnp();
	cout<<" Enter new "<<Stud[n].name<<"'s media: "; cin>>Stud[n].media;
save(Stud,FNstud,nrstud);}



void edituserlogin()
{system("cls");

int n=finduserid();

if( User[n].tip==0 )
{
bool checker=0;
	do
	{checker=0;
	system("cls");
	cout<<" Enter new "<<User[n].login<<"'s login: "; cin>>User[n].login;
	
	for(int i=0; i<nruser; i++)
	{
		if( i!=nruser && (strcmp(User[n].login,User[i].login))==0 )
		 {checker=1; cout<<" login existing, change the login..."<<endl; system("pause");}
	
	}
	
	}while(checker==1);

}
	
	else{cout<<" Nu poti modifica adminii!"<<endl; system("pause");}
save(User,FNuser,nruser);}

void edituserpassword()
{system("cls");
	int n=finduserid();
	if( User[n].tip==0 )
	{
	cout<<" Enter new "<<User[n].login<<"'s password: "; cin>>User[n].pass;	
	}
	else{cout<<" Nu poti modifica adminii!"<<endl; system("pause");}
save(User,FNuser,nruser);}

void edituserstare()
{system("cls");
	int n=finduserid();
	if( User[n].tip==0 )
	{
	cout<<" Enter new "<<User[n].login<<"'s stare: "; cin>>User[n].stare;	
	}
	else{cout<<" Nu poti modifica adminii!"<<endl; system("pause");}
save(User,FNuser,nruser);}
