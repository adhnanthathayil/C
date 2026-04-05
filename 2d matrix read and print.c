#include<stdio.h>

int main()
{
    int a[100][100], r, c, i, j;

    printf("Enter number of rows and columns\n");
    scanf("%d%d", &r, &c);

    printf("Enter the elements of the array\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}