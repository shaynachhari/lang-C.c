#include <stdio.h>
int main()
{
    int d;
    printf("Enter of days no. \n");
    scanf("%d", &d);

   /* switch (d)
    {
    case 1:
        printf("monday\n");
        break;

    case 2:
        printf("tuesday\n");
        break;

    case 3:
        printf("wensday\n");
        break;

    case 4:
        printf("tuesday\n");
        break;

    case 5:
        printf("friday  ");
        break;

    case 6:
        printf("sturaday\n");
        break;

    case 7:
        printf("sunday \n");
        break;

    default:
        printf("Invaild days numbers\n");
    } */

    
    switch (d)
    {case 1:
    printf("Juary \n");
    break;
    
    case 2:
    printf("Ferbry \n ");
    break;

    case 3:
    printf("March\n");
    break;

    case 4:
    printf("Apirl\n");
    break;

    case 5:
    printf("May\n");
    break;

    case 6:
    printf("june\n");
    break;

    case 7:
    printf("July\n");
    break;

    case 8:
    printf("Agust\n");
    break;

    case 9:
    printf("Simtbers\n");
    break;

    case 10:
    printf("October\n");
    break;

    case 11:
    printf("Novmber\n");
    break;

    case 12:
    printf("December\n");
    break;

    default:
    printf("Invaild Months number\n");
    break;

    }

    return 0;
}