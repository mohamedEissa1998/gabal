#include<stdio.h>

int main(void){
	
	int small,temp;
	int arr[7]={1,3,2,11,8,7,5};
	
	for(int i=0;i<7;i++){
		small=arr[i];
		for(int j=i+1;j<7;j++){
			if(small>arr[j]){
				temp=arr[j];
				arr[j]=small;
				small=temp;
				arr[i]=small;
			}else{
				arr[i]=small;
			}
		}
		
	}
	for(int i=0;i<7;i++){
		printf("%d",arr[i]);
	}
}
