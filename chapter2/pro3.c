#include<stdio.h>
#include<math.h>
int main(){
 float a,b,c, area_tri,s;


printf(" enter the 1st side of length: ");
scanf("%f", &a);

printf(" enter the 2st side of length: ");
scanf("%f", &b);

printf(" enter the 3st side of length: ");
scanf("%f", &c);

s= (a+b+c)/2;
area_tri= sqrt(s * (s-a)* (s-b)*(s-c));
printf(" the sum of area of triangle is : %f" , area_tri);
return 0;
}

