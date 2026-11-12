#include"header.h"
void reverse_student(STUD **head)
{
	if(*head==0)
	{
		printf("no record found\n");
		return ;
	}
	int c=countnode(*head);
	if(c>1)
	{
		int i;
		STUD *t=*head;
		STUD **a=malloc(sizeof(STUD *)*c);
		for(i=0;i<c;i++)
		{
			a[i]=t;
			t=t->next;
		}
		for(i=c-1;i>0;i--)
		{
			a[i]->next=a[i-1];
			a[0]->next=0;
			*head=a[c-1];
		}
	}
}

