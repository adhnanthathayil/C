#include<stdio.h>
#include<string.h>

int main()
{
    int option;

    printf("1. Find the length of the string\n");
    printf("2. Copy the string\n");
    printf("3. Compare two strings\n");
    printf("4. Concatenate two strings\n");

    scanf("%d", &option);

    if(option == 1)
    {
        char arr[100];
        printf("Enter the string\n");
        scanf(" %[^\n]", arr);

        printf("Length of the string is %d", strlen(arr));
    }
    else if(option == 2)
    {
        char ar1[100], ar2[100];

        printf("Enter two strings\n");
        scanf(" %[^\n]", ar1);
        scanf(" %[^\n]", ar2);

        printf("Before copying:\nString 1 = %s\nString 2 = %s\n", ar1, ar2);

        strcpy(ar1, ar2);

        printf("After copying:\nString 1 = %s\nString 2 = %s\n", ar1, ar2);
    }
    else if(option == 3)
    {
        char ar1[100], ar2[100];
        int value;

        printf("Enter two strings\n");
        scanf(" %[^\n]", ar1);
        scanf(" %[^\n]", ar2);

        value = strcmp(ar1, ar2);

        if(value == 0)
            printf("Strings are equal\n");
        else if(value > 0)
            printf("String 1 is alphabetically larger\n");
        else
            printf("String 2 is alphabetically larger\n");
    }
    else if(option == 4)
    {
        char ar1[100], ar2[100];

        printf("Enter two strings\n");
        scanf(" %[^\n]", ar1);
        scanf(" %[^\n]", ar2);

        strcat(ar1, ar2);

        printf("After concatenation: %s", ar1);
    }
    else
    {
        printf("Invalid option");
    }

    return 0;
}