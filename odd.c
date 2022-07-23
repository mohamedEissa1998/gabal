#include<stdio.h>
int main(void){
	int start;
	int i=0;
	scanf("%d",&start);
	printf("no. %d\n",i);
	
	while(start != 0)
	{
		start/=10;
		printf("no. %d\n",i);
		i++;
	}
	printf("no. %d\n",i);
		
}