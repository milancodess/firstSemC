#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            words++;

        if (ch == '\n')
            lines++;
    }

    if (characters > 0)
        words++;

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}