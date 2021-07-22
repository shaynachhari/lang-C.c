//conyi nue
/* ddiff between 2 nos
avrage of 3 nos
square of a no
cube of a no 
factorial 
base and power */

#include<stdio.h>

int main(){
    
    // Base AND POWER With continue condition
    int i, b, p ,c, r=1;
    char ch;
    

    do {
        printf("Enter Value of Base and Power \n");
        scanf("%d  %d" , &b , &p );
        
        for(i=1; i<=p; i++)

       r =  r*p;
        printf("RESULT = %d\n" , r);  
       

        printf("LIKE TO CONTUNUE_______(y/n) : ");
        fflush(stdin);
        scanf("%c" , &ch);

    } while ( ch == 'y' || ch == 'y');

 return 0;
}































// int main(){
    
//     // Factorial no.   with continue condition
//     int i, n , f=1;
//     char ch;
    

//     do {
//         printf("Enter any nos  ");
//         scanf("%d" , &n );
        
//         for(i=1; i<=n; i++)

//        f =  f*i;
//         printf("FACTORIAL  = %d\n" , f);  
       

//         printf("LIKE TO CONTUNUE_______(y/n) : ");
//         fflush(stdin);
//         scanf("%c" , &ch);

//     } while ( ch == 'y' || ch == 'y');

//  return 0;
// }