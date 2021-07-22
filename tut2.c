#include <stdio.h>

int main()
{
    int m;
    printf("Enter your months no. \n");
    scanf("%d",&m);

    if (m == 1)
        printf("junary ");
    else if (m == 2)
        printf("fearbry ");
    else if (m == 3)
        printf("march ");
    else if (m == 4)
        printf("apirl ");
    else if (m == 5)
        printf("ma y");
    else if (m == 6)
        printf("june ");
    else if (m == 7)
        printf("july ");
    else if (m == 8)
        printf("agust ");
    else if (m == 9)
        printf("sitmber ");
    else if (m == 10)
        printf("october ");
    else if (m == 11)
        printf("novmber ");
    else if (m == 12)
        printf("december ");
    else
        printf("Envaild month no. ");
    return 0;
}