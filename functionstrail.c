#include<stdio.h>

int calc(int x , int y);
int Add(int x , int y);
int Sub(int x , int y);
int Mult(int x , int y);
int Div(int x , int y);
int getavg(void);

int main(void){
	int avvv;
	/*int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	calc(x,y);*/
	avvv=getavg();
	printf("avg %d\n",avvv);
}




int calc(int x , int y){
	int add,sub,mult,div;
	add=Add(x,y);
	sub=Sub(x,y);
	mult=Mult(x,y);
	div=Div(x,y);
	printf("+ %d\n",add);
	printf("- %d\n",sub);
	printf("* %d\n",mult);
	printf("/ %d\n",div);
	return add,sub,mult,div;
}
int Add(int x , int y){
	return x+y;
}
int Sub(int x , int y){
	return x-y;
}
int Mult(int x , int y){
	return x*y;
}
int Div(int x , int y){
	return x/y;
}

int getavg(void){
	int arr[5];
	int av=0;
	
	for (int i=0;i<5;i++){
		scanf("%d",&arr[i]);
		printf("i %d\n",arr[i]);
	}

	for (int i=0;i<5;i++){

		av=av+arr[i];
		
	}
	av = av/5;

	
	return av;
	
}