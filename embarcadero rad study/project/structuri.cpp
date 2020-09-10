
struct stud
{
	char name[20];
	char family[20];
	char email[50];
	char grupa[7];
	int age;
	double media;
	int idnp;
	bool active;
	
}Stud[1000];

struct user
{
	char login[20];
	char pass[20];
	bool tip;
	bool stare;
	int id;
	
}User[1000];


 int USERi;

struct statt
{
	char name[20];
	int age;
	
}Stat[1000];


	FILE *f;
	FILE *stat;

	int FRONT=NULL, BACK=NULL, NIVEL=1;
	
	char FNuser[255];
	char FNstud[255];
	char FNstat[255];
	
	int nruser=0, nrstud=0, nrstat=0;
	
