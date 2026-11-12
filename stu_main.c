#include "header.h"

int main()
{
    STUD *head =0;
    char op,ch;

//    load_student(&head);

    while(1)
    {
	    printf("\n **********STUDENT RECORD MENU*********\n");
       
        printf("a/A : Add new record\n d/D : Delete a record\n s/S : Show the list\n m/M : Modify a record\n v/V : Save records\n e/E : Exit\n t/T : Sort the list\n l/L : Delete all records\n r/R : Reverse the list\n");

        printf("\nEnter your choice: ");
        scanf(" %c", &op);

        switch(op)
        {
            case 'a':
            case 'A':
                add_student(&head);break;
           case 'd':
           case 'D':
                delete_student(&head);break;
            case 's':
            case 'S':
                show_student(head);break;
            case 'm':
            case 'M':
                modify_student(head);break;
            case 'v':
            case 'V':
                save_student(head); break;
            case 't':
            case 'T':
                sort_student(head);break;
            case 'l':
            case 'L':
               delete_all(&head);break;
            case 'r':
            case 'R':
                reverse_student(&head);break;
	    case 'f':
	    case 'F':
	    	free_all(&head);break;
            case 'e':
            case 'E':
                printf("\nS : Save and Exit\n");
                printf("E : Exit without saving\n");
                printf("Enter choice: ");
                scanf(" %c", &ch);

                if(ch == 's' || ch == 'S')
                    save_student(head);

                else if(ch != 'e' && ch != 'E')
                {
                    printf("Invalid choice!\n");
                    break;
                }

                free_all(&head);

                printf("\nProgram terminated.\n");
                return 0;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}


