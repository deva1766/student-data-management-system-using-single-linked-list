#include"header.h"
void save_student(STUD *head)
{
	if(head==0)
	{
		printf("no record found\n");
		return ;
	}
	FILE *fp;
	fp=fopen("stud.txt","w");
	while(head)
	{
		fprintf(fp,"%d %s %f\n",head->rollno,head->name,head->percentage);
		head=head->next;
	}
	printf("data saved\na");
	fclose(fp);
}

