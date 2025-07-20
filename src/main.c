#include <stdio.h>
#include <string.h>

struct Book
{
    char title[50];
    char author[20];
    char genre[50];
    int year_release;
};

void learning_struct_book(struct Book b);
int learning_switch_statement(char grade);

int main()
{
    learning_switch_statement('A');
    struct Book b = {"Avatar", "Tim handrick", "Fantasy", 2008};
    learning_struct_book(b);
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