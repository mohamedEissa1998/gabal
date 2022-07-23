#include<stdio.h>

int main(void){
	int temp,counter;
	int arr[9]={3,5,2,4,1,7,55,78,9};
	
	for(int i=0;i<8;i++){
		counter=0;
		for(int j=0;j<8-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				//to be senstive
				counter++;
			}
		}
		//to be senstive
		if(counter==0){
			break;
		}
	}
	for(int i=0;i<9;i++){
		printf("    %d",arr[i]);
	}
}