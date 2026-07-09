 #include<stdio.h>
int main(){
	int i, num, sum=0;
	
	printf("Enter the number\t");
	scanf("%d",&num);
	
    for (i=num; i>0; i=i+1)	{
	sum=sum+i;
	
	printf("sum = %d\n", sum);
	}
		
	return 0;
	
}

