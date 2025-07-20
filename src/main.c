#include <stdio.h>
#include <string.h>

struct Book
{
    char title[50];
    char author[20];
    char genre[50];
    int year_release;
};

struct Student
{
    char name[50];
    int age;
    char major[50];
    int year;
    double gpa;
};

void learning_struct_book(struct Book b);
int learning_switch_statement(char grade);
int learning_while_loop(int n);
int learning_do_while_loop(int n);
int learning_for_loop(int n);
int learning_for_loop_array(int n[], int arr_len);
void learning_nested_for_2d_dimension(int arr[][2], int rows, int cols);
void learning_memory_address(struct Student s);

int main()
{
    learning_switch_statement('A');
    struct Book b = {"Avatar", "Tim Handrick", "Fantasy", 2008};
    learning_struct_book(b);
    learning_while_loop(5);
    learning_do_while_loop(5);
    learning_for_loop(10);
    learning_for_loop_array((int[]){11, 24, 62, 43, 2}, 4);

    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    learning_nested_for_2d_dimension(nums, 3, 2);
    struct Student s = {"Dokja", 18, "Computer Science", 2018, 3.5};
    learning_memory_address(s);

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

void learning_struct_book(struct Book b)
{
    printf("Book: %s by %s (%d)\n", b.title, b.author, b.year_release);
}

int learning_while_loop(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("While Loop: %d\n", i);
        i++;
    }
    return 0;
}

int learning_do_while_loop(int n)
{
    int i = 1;
    do {
        printf("Do While Loop: %d\n", i);
        i++;
    } 
    while (i <= n);
    return 0;
}

int learning_for_loop(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("For Loop: %d\n", i);
    }
    return 0;
}

int learning_for_loop_array(int n[], int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        printf("Index array: %d the value: %d\n", i, n[i]);
    }
    return 0;
}

void learning_nested_for_2d_dimension(int arr[][2], int rows, int cols) 
{
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i);
        
        for (int j = 0; j < cols; j++) {
            printf("%d", arr[i][j]);
            if (j < cols - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }
}

void learning_memory_address(struct Student s)
{
    printf("Student: %p and %d years old %p student %f gpa\n", (void*)s.name, s.age, (void*)s.major, s.gpa);
}