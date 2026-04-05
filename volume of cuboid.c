#include<stdio.h>

int main()
{
    int vol, hei, wid, len;

    printf("Enter the length, width and height\n");
    scanf("%d%d%d", &len, &wid, &hei);

    vol = len * wid * hei;

    printf("The volume of the cuboid is %d", vol);

    return 0;
}