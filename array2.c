/*
#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j;

    // take input for total rows and cols

    printf("Enter total rows and cols ");
    scanf("%d %d" ,&r,&c);

    // input
    for ( i=0; i<r;  i++)
    {
        for ( j=0;  j<c;  j++)
        {
            printf("Enter [%d] [%d] elements ",i,j);
            scanf("%d" , &a[i][j]);

        }
   }
   // display
   for ( i=0; i<r; i++)
   {
       for ( j=0; j<c;  j++)
       {
           printf("%d" ,a[i][j]);
       }
       printf("\n");
   
    }
   return 0;
}
   */

#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,s=0;

    // take input for total rows and cols

    printf("Enter total rows and cols ");
    scanf("%d%d" ,&r,&c);

    // input
    for ( i=0; i<r;  i++)
    {
        for ( j=0;  j<c;  j++)
        {
            printf("Enter [%d] [%d] elements ",i,j);
            scanf("%d" , &a[i][j]);

        }
   }
   // display
   for ( i=0; i<r; i++)
   {
       for ( j=0; j<c;  j++)
       {
           printf("%d" ,a[i][j]);
           s = s+a[i][j];
       }
       printf("\n");
   
    }
    printf("Sum = %d\n" , s);
   return 0;
}
   