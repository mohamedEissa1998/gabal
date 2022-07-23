#include<stdio.h>

int main(void){
	int num,sum;
	int x=0;
	int y=1;
	printf("Enter the number of tearms \n");
	scanf("%d",&num);
	printf("Fibonacci series : 0 , 1 " );
	
	for(int i=0;i<num-2;i++){
		sum=x+y;
		x=y;
		y=sum;
		printf(" , %d",sum);
	}
}