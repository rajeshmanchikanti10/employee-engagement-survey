typedef struct survey
{
	char que[200];
	char a[60];
	char b[60];
	char c[60];
}STRUCT;
typedef struct login
{
int id;
char chr[40],c1[40];
}LOGIN;
typedef struct opt
{
char op[200];
}option;
void display_questions(FILE *,FILE *);
