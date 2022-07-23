#include<stdio.h>
int search(int x);
int main(void){
	
	search(5);
	
}
int search(int x){
	
	int arr[9]={3,5,2,4,1,7,55,78,9};
	for(int i =0;i<9;i++){
		if(x=arr[i]){
			printf("1");
			return 1;
		
		}
	}
	if(counter=0){
			
			printf("-1");
			return -1;
		}
}