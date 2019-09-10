#include<stdio.h>
#include<string.h>
#include<conio.h>
#include"project.h"

int main()
{
FILE *p,*p1;
//int temp;
int i,j=0;
STRUCT q[2];
LOGIN arr[10];
arr[0].id=400;
arr[1].id=96;
arr[2].id=570;
arr[3].id=386;
strcpy(arr[0].chr,"KCR400");
strcpy(arr[1].chr,"KCR096");
strcpy(arr[2].chr,"KCR570");
strcpy(arr[3].chr,"KCR386");
strcpy(arr[0].c1,"chandra");strcpy(arr[1].c1,"kishore");strcpy(arr[2].c1,"rajesh");
strcpy(arr[3].c1,"mehul raj");
	p=fopen("id.txt","w");
	//p1=fopen("question.txt","w");
	for(i=0;i<4;i++)
    {
	fwrite(&arr[i],sizeof(LOGIN),1,p);
    }
	/*strcpy(q[0].que,"i can see myself working here in five years");
	strcpy(q[0].a,"disagree");
	strcpy(q[0].b,"neither disagree nor agree");
	strcpy(q[0].c,"agree");
	strcpy(q[1].que,"i have a clear understanding of my company's goals and strategic goals");
	strcpy(q[1].a,"disagree");
	strcpy(q[1].b,"neither disagree nor agree");
	strcpy(q[1].c,"agree");*/
	/*for(i=0;i<2;i++)
    {
        fwrite(&q[i],sizeof(STRUCT),1,p1);
    }*/
    fclose(p);
    //fclose(p1);

return 0;
}
