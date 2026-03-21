#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    printf("Length of str1 = %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("Copy: %s\n", str3);

    strcat(str1, str2);
    printf("Concatenation: %s\n", str1);

    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    printf("Lowercase: %s\n", strlwr(str1));
    printf("Uppercase: %s\n", strupr(str1));
    printf("Reverse: %s\n", strrev(str1));

    return 0;
}