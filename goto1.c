#include<stdio.h>

// wap to print number from 1 to 10 and also print sum of all the numbers

/*    int main()
{
    int i=1 , s=0;
    abc:

    printf("%d\n" , i , s);
    i++ ;

    if (i <= 10)
    goto abc;
    printf("sum =  %d  " , s );   */

    // war a progrigam print number from 1 to 5 and aslo print (product) of all the number.

    /*int main(){

        int i = 1 , p =1;
        abc:
        p = p*i;       // 1*2*3*4*5 = 120

        printf("%d \n" , i);
        i++  ;

        if (i <= 5)
        goto abc;

        printf("sum = %d  ", p); */


    // write  a to print all (even numbers) from 2 to 20 and sum also of all the number.

    int main(){

        /* int i = 2 , s = 0;
        abc:
        s = s+i;

        printf("%d \n" , i);
        i += 2;

        if (i <= 20)
        goto abc;
        printf( "sum = %d   ",s);   */ 

        // print all (odd numbers) from 1  to  35  and sum also all the number.

        /* int a = 1 , b = 0;
        abc:
        b = b + a;

        printf("%d\n", a);
        a += 2 ;

        if (a <= 35)
        goto abc;
        printf("sum = %d  ", b); */

        // print all multiples of 5  too 100  and also print sum of all the numbers

        int i = 5 , s=0;
        abc:
        s = s+i ;

        printf("%d\n",i);
        i += 5;

        if (i <= 100)
        goto abc;
        printf("sum = %d  ",s);


    
    return 0;
}