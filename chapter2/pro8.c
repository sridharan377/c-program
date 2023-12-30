#include<stdio.h>
#include<math.h>

int main(){
  float t, v ,s;

printf(" enter the values of temperature: ");
scanf("%f", &t);

printf(" enter the value of velocity: ");
scanf("%f", &v);

s = 35.74 + 0.6215 * t + ( 0.4275 * (t) - 35.75) *  pow(v,0.16);

printf(" the wind chill factore: %f" , s);
return 0;
}
