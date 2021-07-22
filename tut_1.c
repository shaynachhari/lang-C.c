#include<stdio.h>

// int main(){
    
//     register int i;
//     for ( i=1; i<=100; i++)
//       printf("\n%d   " ,i);
//       return 0;

     
// }


/*
void abc()
{
    // auto int a=10; 

    // static int a=10;

    static int a;
    printf("%d \n" ,a);
    a = a+10;
}
int main(){
    abc();
    abc();
    abc();
}
*/



int main()
{
    static int a = -5;
    while (a)
    {
        printf("%d \n" , a);
        a++;
        main();
    }
    return 0;
}

