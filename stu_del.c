#include "header.h"

void delete_student(STUD **head)
{
    STUD *t, *prev;
    int roll, got = 0;
    char ch, name[50];

    if(*head == NULL)
    {
        printf("\nNo records available!\n");
        return;
    }

    printf("\nR : Delete by roll number\n");
    printf("N : Delete by name\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);

    if(ch == 'r' || ch == 'R')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
    }
    else if(ch == 'n' || ch == 'N')
    {
        printf("Enter name: ");
        scanf(" %s", name);

        t = *head;

        while(t != 0)
        {
            if(strcmp(t->name, name) == 0)
            {
                printf("Roll: %d  Name: %s  Percentage: %.2f\n",
                       t->rollno, t->name,
                       t->percentage);
                got= 1;
            }

            t=t->next;
        }

        if(!got)
        {
            printf("Student not found!\n");
            return;
        }

        printf("Enter roll number to delete: ");
        scanf("%d", &roll);
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    t= *head;
    prev =0;

    while(t!=0)
    {
        if(t->rollno == roll)
        {
            if(prev ==0)
                *head = t->next;
            else
                prev->next = t->next;

            free(t);

            printf("\nRecord deleted successfully!\n");
            return;
        }

        prev = t;
        t= t->next;
    }

    printf("\nRecord not found!\n");
}

