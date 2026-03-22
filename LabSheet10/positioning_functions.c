#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }

    // Initial position
    printf("Initial position: %ld\n", ftell(fp));

    // Move pointer 5 bytes from beginning
    fseek(fp, 5, SEEK_SET);
    printf("After fseek to 5 bytes: %ld\n", ftell(fp));

    // Read a character
    ch = fgetc(fp);
    printf("Character at position 5: %c\n", ch);

    // Move pointer 3 bytes forward from current
    fseek(fp, 3, SEEK_CUR);
    printf("After moving 3 bytes ahead: %ld\n", ftell(fp));

    // Move pointer 2 bytes before end
    fseek(fp, -2, SEEK_END);
    printf("Position near end: %ld\n", ftell(fp));

    // Rewind to beginning
    rewind(fp);
    printf("After rewind: %ld\n", ftell(fp));

    fclose(fp);

    return 0;
}