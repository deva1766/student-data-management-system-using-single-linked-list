#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};

typedef struct student STUD;
int countnode(STUD *);
void add_student(STUD **);
void delete_student(STUD **);
void show_student(STUD *);
void modify_student(STUD *);
void save_student(STUD *);
//void load_student(STUD **);
void sort_student(STUD *);
void reverse_student(STUD **);
void delete_all(STUD **);
void free_all(STUD **);
int get_roll(STUD *);


