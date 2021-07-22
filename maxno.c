#include <stdio.h>

int main()
{
    // wap to take input for 3 numbers check and print the largest no,
    int a, b, c;
    printf("Enter 3 numbers\n");
    
    scanf("%d %d %d",&a,&b,&c);

    if (a > b && a > c)
        
    printf("max no = %d", a);

    else if (b > c)
        printf("max no. = %d", b);

    else printf("max no = %d ", c);

    return 0;
}