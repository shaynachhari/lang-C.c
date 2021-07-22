
#include<stdio.h>

int main(){
    int a;
    for ( a=1;  a <= 10;  a = a+1)
   
   {
       printf("%3d, %3d , %3d , %3d , %3d \n" , a , a*2, a*2-1 , a*5 , a*7);
   }
    
return 0;
 }










#include<stdio.h>

// wap to take input 5 nos and print the largest and lowest and diffrence 

int main(){
    int i , m =0, n;

    printf("The print of Larset Number \n");
    for ( i=1; i<=5; i++)
    {
        printf("Enter %d no. :  " , i);
        scanf("%d",&n);

        if (i ==1)
        m=n;
        
        if(n<m)               // if(n>m) max    // if(n<m) min
        m =n;
        }

    printf("Max no = %d  ",m);


    // diffrence 
    int d;
    d = n-m;
    printf("refrence of days : %d  \n  ",d);


    return 0;}






 /*odd print 2 to 20
    a = 1;
    while (a<=20)
    {
        if (a % 2 == 1)
           printf("%d\n" , a);
           a++;
    }*/







//     int a;
//     for (a=70;  a >= 7 ;  a = a-7)
//     {
//        printf("%d \n",a);

//     } */

//     for (a=7 ;  a <= 70;  a = a+7)
//     {
//         printf("%d \n" , a);
//     } 
//     return 0;
// }