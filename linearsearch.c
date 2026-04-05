#include<stdio.h>

void main()
{
    int arr[100], n, i, ele, found = 0;

    printf("Enter the limit of the array\n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d", &ele);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == ele)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }
}