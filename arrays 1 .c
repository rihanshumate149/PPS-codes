#include<stdio.h>
int main(){
	int a[4]={1, 2, 3, 4};
	int b[4]={4, 3, 2, 1};
	int c[4];
	int i;
	//Adding element
	for( i=0; i<4; i++){
		c[i] = a[i]+b[i];
	}
	
	//primtimg result
	printf("sum of arrays:\n");
	for(i=0; i<4; i++){
		printf("%d", c[i]);
			}
			return 0;
}
