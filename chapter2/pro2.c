#include<stdio.h>
int main(){

 int a,b,c,d,e,sum,n;

printf(" enter the 5 digit number: ");
scanf("%d", &n);

a = n/10000;
b = (n/1000)%10;
c = (n/100)%10;
d = (n/10)%10;
e = (n/1)%10;

sum = a +b+c+d+e;

printf("the sum of digit is : %d", sum);
return 0;
}