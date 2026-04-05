#include<stdio.h>

void main()
{
    int n, i, first = 0, second = 1, term;

    printf("Enter the number of terms\n");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for(i = 0; i < n; i++)
    {
        if(i == 0)
            printf("%d\t", first);
        else if(i == 1)
            printf("%d\t", second);
        else
        {
            term = first + second;
            printf("%d\t", term);
            first = second;
            second = term;
        }
    }
}