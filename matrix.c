#include<stdio.h>

int main (void){
	int M1[3][3];
	int M2[3][3];
	int Msum[3][3];
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
		scanf("%d",&M1[i][j]);
	}
	}
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
		scanf("%d",&M2[i][j]);
	}
	}
	
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
		Msum[i][j]=M1[i][j]+M2[i][j];
		printf("%d /n",Msum[i][j]);
	}
	}
	
}