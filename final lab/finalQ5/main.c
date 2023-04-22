#include <stdio.h>
#include <stdlib.h>
#define SIZE 10



 typedef struct student
{
   char name[20];
    int id ;
    int garde;
}Student;
//#define Student struct student

void get_student (Student *stu);

void display_student(Student *stu);


int main()
{/*
    5- C Function to store information (name, id and grade) for
10 students in array of structures using pointers and
another function to print all the structures using pointers.

    */
Student stu[SIZE];
//Student stu1;

    for(int i =0 ; i < SIZE ; i++)
    {

        get_student(&stu[i]);
        printf("\n===========================================================\n");


    }
        printf("\n=========================OUTPUT============================\n");

    for(int i =0 ; i < SIZE ; i++)
    {
        display_student(&stu[i]);
        printf("\n===========================================================\n");

    }

    return 0;
}

void get_student (Student *stu)
{
    printf("Enter the student name : \n");
    scanf("%s" , &stu->name);

    printf("Enter the student id : \n");
    scanf("%d" , &stu->id);

    printf("Enter the student grade : \n");
    scanf("%d" , &stu->garde);


}
void display_student(Student *stu)
{
    printf("student name : %s\n" , stu->name);
    printf("student id : %d\n" , stu->id);
    printf("student grade : %d\n" , stu->garde);
}
