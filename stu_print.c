#include "header.h"
void show_student(STUD *head)
{
	STUD *t=head;
	if(head==0)
	{
		printf("no record found\n");
		return ;
	}
	printf("\n*******************************************\n");
	printf("Roll. Name  Percentage\n");
	printf("\n*******************************************\n");
	while(t)
	{
		printf("%d %s %.2f\n",t->rollno,t->name,t->percentage);
		t=t->next;
	}
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
int countnode(STUD *head)
{
	int c=0;
	while(head)
	{
		c++;
		head=head->next;
	}
	return c;
}


