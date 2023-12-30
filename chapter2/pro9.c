#include<stdio.h>
#include<math.h>

int main(){
    float l1,l2,g1,g2,dist;

printf("enter the values of latitude: ");
scanf("%f %f", &l1,&l2);

printf("enter the values of longitude: ");
scanf("%f %f", &g1,&g2);


dist = 3963 *(acos (sin (l1)*sin (l2) + cos (l1)*cos(l2)* cos(g2 - g1)));

printf(" the distance of nautical miles is: %f", dist);
return 0;
}
