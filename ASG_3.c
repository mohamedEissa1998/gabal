#include<stdio.h>

void swap(int x,int y);
int main(void){
	int x,y;
	printf("Enter the first number \n");
	scanf("%d",&x);
	printf("Enter the second number \n");
	scanf("%d",&y);
	swap(x,y);
}

void swap(int x,int y){
	
	int temp=0;
	printf("befor swapping \n");
	printf("x= %d\n",x);
	printf("y= %d\n",y);
	temp=x;
	x=y;
	y=temp;
	printf("after swapping \n");
	printf("x= %d\n",x);
	printf("y= %d\n",y);
	
}