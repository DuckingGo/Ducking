#include <stdio.h>
#include <stdlib.h>

int learning_switch_statement(char grade);

struct Student
{
    char name[20];
    char major[50];
    int age;
    double gpa;
}

int main()
{
    learning_switch_statement('A');

    struct Student studen1;
    studen1.age = 22;
    studen1.gpa = 3.2;
    strcpy(studen1.name, "John");
    strcpy(studen1.major, "Computer Science");

    printf("%s\n", studen1.name);
    printf("%s\n", studen1.major);
    printf("%d\n", studen1.age);
    printf("%f\n", studen1.gpa);

    return 0;
}

int learning_switch_statement(char grade)
{
    switch(grade)
    {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Very good!\n");
            break;
        case 'C':
            printf("Good Enough!\n");
            break;
        case 'D':
            printf("You did very bad!\n");
            break;
        case 'F':
            printf("you Failed\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}