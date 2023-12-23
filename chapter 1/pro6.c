#include<stdio.h>
int main()
{
    int  i, leng[9], brea[9];

printf(" enter the length : ");
scanf("%d", &leng[0]);

printf(" enter the breadth : ");
scanf("%d", &brea[0]);

   for(i=1; i<9; i++){
             if(leng[i-1]>brea[i-1]){
  
                     leng[i]= (leng[i-1])/2;
                     brea[i]= (brea[i-1]);
               }

             else{

                     brea[i] = (brea[i-1])/2;
                     leng[i] = leng[i-1];
                   }

}
printf(" size of  %d x %d\n" , i, leng[i], brea[i]); 
return 0;
}

