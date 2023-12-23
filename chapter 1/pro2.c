#include<stdio.h>
int main(){
    int a , m, inch, cm,f;
printf("enter the distance  : ");
scanf("%d" , &a);

m = a/1000;
inch =a*39370; 
cm = a*100000;
f= a *3280;

printf(" the distance between them in m is: %d\n", m);
printf(" the distance between them in inch is: %d\n" , inch);
printf(" the distance between them in cm is: %d\n" , cm);
printf(" the distance between them in f is: %d\n" , f);
return 0;
}

