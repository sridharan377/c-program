#include<stdio.h>
int main() {
  int leng, brea, tri_p ; 

printf(" enter the length and breadth of the rectangle: ");
scanf("%d", &leng, &brea);

tri_p = 2 *leng + 2*brea;
printf(" perimeter of triangle : %d\n", tri_p);

return 0;
}