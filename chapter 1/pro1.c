#include<stdio.h>

int main() {
  float basic_salary, hra,da, gross_salary;
  
printf("enter the basic_salary:");
scanf("%f" , &basic_salary);

da = 0.4 *basic_salary;
hra = 0.2 *basic_salary;

gross_salary = basic_salary + hra+ da;
printf( " gross salary is :  %f", gross_salary);
return 0;
}


