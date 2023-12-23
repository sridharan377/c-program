#include<stdio.h>
int main()
{
    float temp, centi;
printf(" the temperaturein u r city: ");
scanf("%d", &temp);

centi= 5.0/9.0 * (temp-32);

printf("the temperature in u r city in centigrade is: %d", centi);
return 0;
}