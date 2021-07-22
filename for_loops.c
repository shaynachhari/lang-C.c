#include <stdio.h>

int main()
{
    // method - 1
   /* int i;
    for (i = 5; i <= 50; i = i + 5)
    {
        printf("%d \n", i);
    } */

    // method - 2
    /*int i;
    for (i = 5; i <= 50; i = i + 5)

    {
        if (i % 5 == 0)
            printf("%d \n", i);
    } */

   // method - 3i;

    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d \n", i * 5);
    }  

    return 0;
}