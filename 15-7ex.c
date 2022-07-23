#include<stdio.h>


/*struct complex {
	int real;
	int img;
}obj1,obj2,sumobj;

int main(void){
	int r1,i1,r2,i2;
	printf("Enter frist complex number");
	scanf("%d",&r1);
	scanf("%d",&i1);
	obj1.real=r1;
	obj1.img=i1;
	printf("Enter second complex number");
	scanf("%d",&r2);
	scanf("%d",&i2);
	obj2.real=r2;
	obj2.img=i2;
	sumobj.real=r1+r2;
	sumobj.img=i1+i2;
	
	printf("%d  +  %d  !",sumobj.real,sumobj.img);
}*/

/*
struct employee {
	char name[10];
	int age ;
	char title[15];
	float salary;
}obj[3] ;
int main(void){
	
	float bigsalary=0.0;
	int index=0;
	
	for(int i=0;i<3;i++){
	scanf("%s",&obj[i].name);
	scanf("%d",&obj[i].age);
	scanf("%s",&obj[i].title);
	scanf("%f",&obj[i].salary);
	}
	
	for(int i=0;i<3;i++){
		if(obj[i].salary>bigsalary){
			bigsalary=obj[i].salary;
			index=i;
		}
	}
	printf("salary = %f",bigsalary);
	printf("name = %s",obj[index].name);
	
}*/


struct employee {
	char *name=(char*)malloc(100*size of (char));
	int age ;
	char *title=(char*)malloc(100*size of (char));
	float salary;
}obj[3] ;
int main(void){
	int emp_num;
	
	printf("Enter number of employee: \n");
	scanf("%d",&emp_num)
	
	strcat employee *emp=(struct employee * )malloc(emp_num*sizeof(strcat employee));
	float bigsalary=0.0;
	int index=0;
	
	for(int i=0;i<emp_num;i++){
	scanf("%s",&obj[i].name);
	scanf("%d",&obj[i].age);
	scanf("%s",&obj[i].title);
	scanf("%f",&obj[i].salary);
	}
	
	for(int i=0;i<3;i++){
		if(obj[i].salary>bigsalary){
			bigsalary=obj[i].salary;
			index=i;
		}
	}
	printf("salary = %f",bigsalary);
	printf("name = %s",obj[index].name);
	
}

