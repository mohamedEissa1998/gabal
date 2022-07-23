#include<stdio.h>
int rev(int n);
int main(void){
	int num,revers;
	
	printf("enrer any number : \n");
	scanf("%d",&num);
	revers=rev(num);


	while(num>0){
		if(num%10 == revers%10){
			num=num/10;
			revers=revers/10;
			
			
		}else {
			printf("not + palindrome \n");
			break;
		}
	}
	
	if(num==0){
		printf("palindrome");
	}
}

int rev(int n){
	int r=0;
	while(n>0){
		r=(r*10)+(n%10);
		n=n/10;
		
	}
	return r;
}