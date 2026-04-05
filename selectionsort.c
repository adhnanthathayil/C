#include<stdio.h>

void main()
{
    int arr[100], r, i, j, min_index, temp;

    printf("Enter the limit of the array\n");
    scanf("%d", &r);

    printf("Enter the elements of the array\n");
    for(i = 0; i < r; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < r - 1; i++)
    {
        min_index = i;

        for(j = i + 1; j < r; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        
        if(min_index != i)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    printf("The sorted array is\n");
    for(i = 0; i < r; i++)
    {
        printf("%d\t", arr[i]);
    }
}