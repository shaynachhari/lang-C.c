#include<stdio.h>

int main(){
    // print all numbers  1 to 10 
    int i= 1;
    abc:
    printf(" %d \n",i);
    i = i+1;
    if (i <= 10)
    goto abc;


    
    // print all numbers 5 up to 100

    int i = 5;
    abc:
    printf("%d \n",i);
    i = i+5;
    if (i <= 100)
    goto abc;


    // print all numbers 5 to 100 reverse order

    int i = 100;
    abc:
    printf("%d \n",i);
    i = i- 5;
    if ( i >= 5)
    goto abc;
 


   // print all  the  number  7  up to  70

   int i = 7;
   abc:
   printf("%d \n",i);

   i = i+7;

   if ( i <= 70)
   goto abc; 




   // print all the number 7  up to  70  reverse order

   int i = 70;
   abc:

   printf("%d \n",i);
   i = i - 7;

   if ( i >= 7)
   goto abc; 




   // print all the no. 2 up tp 30   (even nos)
   int i = 2;
   abc:
   printf("%d \n",i);

   i = i+2;
   if (i <= 30)
   goto abc;  



   // print all the no.  2  up to 30 reverse oder (even )

   int a = 30;
   abc:
   printf("%d \n",a);

   a = a -2;

   if ( a >= 2)
   goto abc;




 













    

    return(0);
}