#include<stdio.h>
int main(){
	int i, num, sum=0;
	
	printf("Enter the number\t");
	scanf("%d",&num);
	
	for (i=1; i<=num; i=i+1){
        sum=sum+1;
		printf("Sum =%d\n", sum);
	}
	
	return 0;
} 
