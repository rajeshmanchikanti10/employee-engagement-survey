#include<stdio.h>
#include<string.h>
#include"project.h"
char chr[200],*a,cl[200]arr[3][50];
int main()
{
LOGIN arr[10];
char ch[50];
int temp;
FILE *p,*p1,*p2;
int i,j=0;
p=fopen("id.txt","r");
p1=fopen("question.txt","r");
p2=fopen("input.csv","a");
for(i=0;i<4;i++)
{
    fread(&arr[i],sizeof(LOGIN),1,p);
//printf("%d\n",arr[i].id);
//printf("%s\n",arr[i].chr);
}

printf("welcome to KCR group of companies\n\n\n");
while(1)
{
printf("\n\nenter your user id:");
scanf("%d",&temp);
printf("enter your password:");
scanf("%s",&ch);
for(i=0;i<4;i++)
{
if((arr[i].id==temp)&&(strcmp(arr[i].chr,ch)==0))
{//printf("loop2");
fprintf(p2,"%s,",arr[i].c1);
printf("\t\twelcome to survey of KCR group of companies");
j=1;
break;
}
}
if(j)
{
display_questions(p1,p2);
break;
}
else
printf("\n\nyour user id or password is incorrect please try again");
}
fclose(p);
fclose(p2);
fclose(p2);
return 0;
}
void display_questions(FILE *p1,FILE *p2){

	int i=0;
	printf("welcome to survey\n\n");
	while((fgets(chr,200,p1))!=NULL)
{  	 //fgets(chr,200,p1);

	a=strtok(chr,".");
	//fprintf(p2,"%[^\n],",a);
	while(a!=NULL)
	{
	printf("%s\n",a);
	a=strtok(NULL,".");
	arr[i]=a;
	printf("%s",arr[i]);
	}
	//scanf("%s",&cl);
	//fprintf(p2,"%s,",cl);
}
fprintf(p2,"\n");
}
