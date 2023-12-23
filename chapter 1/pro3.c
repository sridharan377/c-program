#include<stdio.h>
int main()
{
  int t , e, m, s, ss, average;
printf(" enter the mark you secured in t: ");
scanf("%d",&t);

printf(" enter the mark you secured in e: ");
scanf("%d",&e);

printf(" enter the mark you secured in m: ");
scanf("%d",&m);

printf(" enter the mark you secured in s: ");
scanf("%d",&s);

printf(" enter the mark you secured in ss: ");
scanf("%d",&ss);

average = (t + e + m + s + ss) / 5;

printf(" the average mark obtained is : %d", average);
return 0;
}
