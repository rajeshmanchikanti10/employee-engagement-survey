#include<stdio.h>
#include<string.h>
void display_questions(FILE *p1,FILE *p2){
	char chr[200],*a,cl[200];
	int i;
	printf("welcome to survey\n\n");
	while(!feof(p1))
{   fgets(chr,200,p1);
	//fscanf(p1,"%[^\n]",&chr);
	a=strtok(chr,".");
	//fprintf(p2,"%[^\n],",a);
	while(a!=NULL)
	{
	printf("%s\n",a);
	a=strtok(NULL,".");
	}
	scanf("%s",&cl);
	fprintf(p2,"%s,",cl);
}
fprintf(p2,"\n");
}