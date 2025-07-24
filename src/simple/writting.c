#include <stdio.h>

int main()
{
    // Write a file
    FILE *wPointer = fopen("files/employees.txt", "w");
    fprintf(wPointer, "Hi there im Duckky, nice to meet you'll");
    fclose(wPointer);

    // Append a text
    FILE *aPointer = fopen("files/employees.txt", "a");
    fprintf(aPointer, "\nHmm im using arch btw");
    fclose(aPointer);

    // Read a file
    char line[255];
    FILE *rPointer = fopen("files/employees.txt", "r");
    fgets(line, 255, rPointer);
    fgets(line, 255, rPointer);
    printf("%s\n", line);
    fclose(rPointer);

    return 0;
}