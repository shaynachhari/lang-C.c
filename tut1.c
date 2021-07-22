#include <stdio.h>

int main()
{
    int day;
    printf("Enter yours days ");   // a = 8 , b = 8       // a == b  // day = 1  // shivani = 19      shivani == shayna
    scanf("%d", &day);

    if (day == 1)
        printf("sunday ");
    else if (day == 2)
        printf("monday ");
    else if (day == 3)
        printf("tuesday ");
    else if (day == 4)
        printf("wensday ");
    else if (day == 5)
        printf("thrusday ");
    else if (day == 6)
        printf("friday ");
    else if (day == 7)
        printf("sturday ");
    else
        printf("invaild days number ");

    return 0;
}