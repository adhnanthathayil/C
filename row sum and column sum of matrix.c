#include<stdio.h>

int main()
{
    int a[100][100], r, c, i, j, rowsum = 0, colsum = 0, option, num;

    printf("Enter number of rows and columns\n");
    scanf("%d%d", &r, &c);

    printf("Enter the elements of the matrix\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("1. Row sum\n2. Column sum\n");
    printf("Enter your option\n");
    scanf("%d", &option);

    if(option == 1)
    {
        printf("Enter row number\n");
        scanf("%d", &num);

        if(num > r || num < 1)
        {
            printf("Invalid row number\n");
        }
        else
        {
            for(j = 0; j < c; j++)
            {
                rowsum += a[num - 1][j];
            }
            printf("Row sum = %d", rowsum);
        }
    }
    else if(option == 2)
    {
        printf("Enter column number\n");
        scanf("%d", &num);

        if(num > c || num < 1)
        {
            printf("Invalid column number\n");
        }
        else
        {
            for(i = 0; i < r; i++)
            {
                colsum += a[i][num - 1];
            }
            printf("Column sum = %d", colsum);
        }
    }
    else
    {
        printf("Invalid option\n");
    }

    return 0;
}