// wap to take input for 3 numbers check and print the largest number? (using condition operator / ternary operator)
// 1st method make  , 2nd method make , 3rd method make , 4th method make.
#include<stdio.h>

int main(){
    // method - 1 ----------------------------------------------------
    int a,b,c;
    printf("Enter your 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    printf("max no. = %d ",a);
    else
    if (b>c)
    printf("max no. = %d ",b);
    else
     printf("max no. = %d ",c);

    // method - 2 ---------------------------------------------------------------
    
    int a,b,c,m;
    printf("Enter your 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)

    m = a;
    else
    if (b>c)
    m = b;
    else
    m = c;

    printf("max no. = %d  ",m); 

    // method - 3 ---------------------------------------------------
    
    int a,b,c,m;
    printf("Enter your 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    m = a;
    if ( b > m)
    m = b ;
    if ( c > m)
    m = c ;
    
    printf("max no. = %d ",m);

    // method - 4 -----------------------------------------------
   
    int a,b,c,m;
    printf("Enter your 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);

    m = (a>b && a>c) ?    a : (b>c) ?    b : c ;

    printf("max no. = %d  ",m);





    

    return 0;
}
