#include<stdio.h>
int main()
{
	int amount, thousand, fivehundred ,hundred,fifty ,ten, balance;
	printf("Enter a amount;");
	scanf("%d",&amount);
	thousand=amount/1000;
	balance= amount%1000;
	fivehundred=balance/500;
	balance=balance%500;
	hundred=balance/100;
	balance=balance%100;
	fifty=balance/50;
	balance=balance%50;
	ten=balance/10;
	balance=balance%10;
	printf("number of 100 rupees note:%d\n",thousand);
	printf("number of 500 rupees note:%d\n",fivehundred);
	printf("number of 100 rupees note:%d\n",hundred);
	printf("number of 50 rupees note:%d\n",fifty);
	printf("number of 10 rupees note:%d\n",ten);
	
	
	
	return 0;
}
// Name-Rihanshu U. Mate.
// PRN No-2503033111378UD030  
