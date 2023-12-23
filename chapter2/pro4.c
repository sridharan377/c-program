#include<stdio.h>
#include<math.h>
int main(){
float x,y,r,t;

printf(" enter the cartesia co-ordinates x: ");
scanf("%d", &x);

printf(" enter the cartesia co-ordinates y: ");
scanf("%d", &y);

r = sqrt(x*2 + y*2);
t = atan (y/x); 

t= t * (180/3.14);

printf(" the polar co ordinated of  r: %f\n" , r);
printf(" the polar co ordinated of  t: %f\n" , t);

return 0;
}
