#include"header.h"
void delete_all(STUD **head)
{
	if(head==0)
	{
		printf("no record found\n");
		return ;
	}
	STUD *del=*head;
	while(del)
	{
		*head=del->next;
		free(del);
		del=*head;
	}
	printf("all records deleted\n");
}

