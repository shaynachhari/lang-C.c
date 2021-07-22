#include <stdio.h>

int main()
{

    //  a program take input for a two digit number and print sum of the digits

    /* int n,d1,d2, s=0;
   printf("Enter the two digits numbers  ");
   scanf("%d", &n);

   if (n >= 10  && n <= 99){

       d1 = n%10;
       n = n/10;
       d2 = n%10;
       s = d1 + d2;

       printf(" sum = %d " , s);
   }
   else
   printf("Invail nos enter a two digit no.");  */

    // a program take input for a three digis number and print sum of the digits

    /*     int n,d1,d2,d3 , s =0;
   printf("Enter three digits numbers ");
   scanf("%d" , &n);

   if (n >= 100 && n <= 999){

       d1 = n % 10;
       n = n/10;
       d2 = n % 10;
       n = n/10;
       d3 = n % 10;
       s = d1 + d2 + d3;

       printf(" sum = %d \n" , s);
   }

   else
   printf("Error , invaild numbers");        */

    int n, d1, d2, d3, d4, s = 0;
    printf("Enter the sum of 4 digits numbers ");
    scanf("%d", &n);

    if (n >= 1000 && n <= 999)
    {

        d1 = n % 10;
        n = n / 10;
        d2 = n % 10;
        n = n / 10;
        d3 = n % 10;
        n = n / 10;
        d4 = n % 10;
        s = d1 + d2 + d3 + d4; // agar 1st and last print krte hai to ese lgate hai

        printf("sum = %d \n", s);
    }
    else
    {
        printf("Error , invaild numbers");
    }

    return 0;
}