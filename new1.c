#include<stdio.h>

int main(void)
{
int x,y,z;

printf("Enter 3 numbers\n");

scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);

switch((x>y)&&(x>z)){
case 1 :
printf("x>>\n");
break;
case 0 :
 switch((y>x)&&(y>z)){
  case 1:
  printf("y>>\n");
  break;
  case 0 :
   switch((z>y)&&(z>x)) {
   case 1 :
   printf("z>>\n");
   break;
   case 0:
   break;


}}}

}