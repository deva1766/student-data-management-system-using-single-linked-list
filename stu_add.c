#include"header.h"
int get_roll(STUD *head)
{
int roll=1;
STUD *temp;
while(1)
{
temp=head;
while(temp!=0)
{
if(temp->rollno==roll)
break;
temp=temp->next;
}
if(temp==0)
return roll;
roll++;
}
}
void add_student(STUD **head)
{
STUD *new,*temp;
new=malloc(sizeof(STUD));
if(new==0)
{
	printf("no memory allocated\n");
	return ;
}
new->rollno=get_roll(*head);
printf("enter name and percentage:\n");
scanf("%s ",new->name);
if(scanf("%f",&new->percentage)!=1||new->percentage<0 || new->percentage>100)
{
	printf("invalid\n");
	free(new);
	return ;
}
new->next=0;
if(*head==0)
{
	*head=new;
}
else
{
	temp=*head;
	while(temp->next!=0)
	temp=temp->next;
	temp->next=new;
}
}

