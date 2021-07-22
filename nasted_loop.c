#include<stdio.h>
#include<conio.h>
int main(){
    

    int i,b;

    for (i=1 ; i<=5; i++){

        for ( b = 10;  b<= 50;  b = b+10)
        {
            printf("%d  ", b);
            getch();
        }
        
     printf("\n");
   }
    return 0;
    
}

































//     int n, p=0 , s=0; , i;
//     float av;

//     while(1)                 // for ( ; ; );
//     {
//         printf("Enter any no , to end enterer 0 (Zero) : " , i++);
//         scanf ("%d" , &n);
//         for ( i=1; i<=n;  i++){

//         if( n == 0)
//         break;
        
//         if (n > 0)
//         s = s+n; 
//         p++ ;
//         }
//     } 
//     av = s/p;


//     printf("Total +v Elements = %d\n" , p);
//     printf("Sum of all +ve Elements = %d \n ",s);
//     printf("Average of all +ve Elements = %f\n" ,av );

//     return 0;
// }