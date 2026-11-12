#include"header.h"
void free_all(STUD **head)
{
	if(head==0)
	{
		printf("no record found\n");
		return ;
	}
	STUD *t;
	while(*head!=0)
	{
		t=*head;
		*head=(*head)->next;
		free(t);
	}
}

