#include<stdio.h>
int main(){
 int c , d, temp;

printf(" enter thr number for c: ");
scanf("%d", &c);

printf(" enter thr number for d: ");
scanf("%d", &d);

temp = c;
c = d;
d = temp;

printf("the number of c %d\n", c);
printf("the number of d %d\n", d);

return 0;
}