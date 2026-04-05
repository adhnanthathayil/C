#include<stdio.h>

void main()
{
    int arr[100], n, min, max, i, mid, ele, found;

    printf("Enter the limit of the array\n");
    scanf("%d", &n);

    printf("Enter the elements in increasing order\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = 0;
    max = n - 1;
    found = 0;

    printf("Enter the number to be searched\n");
    scanf("%d", &ele);

    while(min <= max)
    {
        mid = (min + max) / 2;

        if(ele == arr[mid])
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(ele > arr[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }
}