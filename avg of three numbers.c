#include<stdio.h>

void main()

{

int num1,num2,num3,sum,avg;

printf("enter three numbers to find the average\n");

scanf("%d%d%d",&num1,&num2,&num3);

sum=num1+num2+num3;

avg=sum/3;

printf("the average of three numbers is %d",avg);

}