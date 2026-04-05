#include<stdio.h>

void main()

{

int num1,num2,sum,diff,prod,quot;

printf("enter two numbers\n");

scanf("%d%d",&num1,&num2);

sum=num1+num2;

diff=num1-num2;

prod=num1*num2;

quot=num1/num2;

printf("sum is %d\ndifference is %d\nproduct is %d\nquotient is %d\n",sum,diff,prod,quot);

}