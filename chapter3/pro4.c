#include<stdio.h>

int main(){

    int num, number = 0, remainder;

printf(" enter the number : ");
scanf("%d",&num);

while(num > 0)
{
    remainder = num % 10;
number = number * 10 + remainder;
num/=10;

}
printf(" the reversed number is: %d" ,number);
return 0;
}


