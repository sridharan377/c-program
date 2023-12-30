#include<stdio.h>

int main(){
 
  int  a1,a2,a3,sum;

printf(" enter the three angle of triangle : ");
scanf(" %d%d%d", &a1,&a2,&a3);

sum = a1+a2+a3;

if(sum==180)
{
   printf(" the triangle is valid");
}
else{
  printf(" the triangle is not valid");
}
return 0;
}

