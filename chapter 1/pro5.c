#include<stdio.h>
int main() {
  int leng, brea, tri_a , tri_p ; float cir,  cir_a;

printf(" enter the length and breadth of the rectangle: ");
scanf("%d", &leng, &brea);

printf(" enter the radius of circle: ");
scanf("%f", &cir);


 tri_a = leng*brea;
tri_p = 2 *leng + 2*brea;
cir_a = 2 *3.14* cir;

printf(" area of triangle : %d\n", tri_a);
printf(" perimeter of triangle : %d\n", tri_p);
printf(" area of circumference : %f\n", cir_a);

return 0;
}


