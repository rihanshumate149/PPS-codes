#include<stdio.h>
int main()
{int num1, num2, sum, sub, mul, div;
printf("Enter num1:\t");
scanf("%d", &num1);
printf("Enter num2:\t");
scanf("%d", &num2);
sum=num1+num2;
printf("addition of %d & %d is \t %d",
num1, num2, sum);
sub=num1-num2;
printf("\nsubstraction of %d & %d is \t %d",
num1, num2,sub);
mul=num1*num2;
printf("\nmultiplication of %d & %d is \t %d",
num1, num2, mul);
div=num1/num2;
printf("\nDivision of %d & %d is \t %d",
num1, num2, div);
return 0;
}
