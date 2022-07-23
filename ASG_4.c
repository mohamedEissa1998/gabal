#include<stdio.h>

void incr(int *p);

int main(void){
	
	int x;
	printf("Enter the number \n");
	scanf("%d",&x);
	int *p=&x;
	
	printf("after p= %d\n",p);
	printf("before x= %d\n",x);
	incr(p);
	
	printf("after x= %d\n",x);
	}
	
void incr(int *p){
	*p+=1;
	printf("after x= %d\n",*p);
	
}