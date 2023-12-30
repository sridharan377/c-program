#include<stdio.h>

int main(){
  int ram , shyam, ajay;

printf( " enter the age of ram, shyam, ajay : ");
scanf("%d%d%d", &ram ,&shyam , &ajay);

if( ram <= shyam && shyam <= ajay)
 {
   printf(" ram is youngest");
  }

if (shyam <= ram && ram <= ajay)
{   
    printf(" shyam is youngest");
}
if (ajay <= ram && ram <= shyam)
{
  printf(" ajay is youngest");
}

return 0;
}


