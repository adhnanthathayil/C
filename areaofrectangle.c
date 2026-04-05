#include<stdio.h>

int main()
{
    float len, bred, area;

    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f%f", &len, &bred);

    area = len * bred;

    printf("The area of the rectangle is %.2f", area);

    return 0;
}