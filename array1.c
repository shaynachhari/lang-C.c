#include<stdio.h>
int main (){


//  Q-1   array or not
    int a[10], n , i, z=0;

    for ( i=0;  i<10;  i++)
    {
        printf ("Enter %d Element ",i);
        scanf ("%d",&a[i]);
    }

    printf ("Enter The Element To Search ");
    scanf ("%d" ,&n);
    for ( i=0;  i<10;  i++)
    {
        if ( a[i] == n)
        {
            z = 1;
            break;
        }

    }
    if ( z == 0)
    printf("Element Is Not Present ");

    else
    printf ("Element Is  Present ");
    return 0;

}
Output-
Enter 0 Element 12
Enter 1 Element 34
Enter 2 Element 5
Enter 3 Element 2
Enter 4 Element 16
Enter 5 Element 2
Enter 6 Element 34
Enter 7 Element 10
Enter 8 Element 22
Enter 9 Element 10
The Element To Search 34





/* -------------------------------------------------------------

Q-2  Search and Count
*/

int main(){

    int a[10], n , i, z=0;

    for ( i=0;  i<10;  i++)
    {
        printf ("Enter %d Element ",i);
        scanf ("%d",&a[i]);
    }

    printf ("Enter The Element To Search ");
    scanf ("%d" ,&n);
    for ( i=0;  i<10;  i++)
    {
        if ( a[i] == n)
        {
            z = z+1;
            
        }

    }
    if ( z == 0)
    printf("Element Is Not Present ");

    else
    printf ("Element Is  Present %d times ",z);
    return 0;

}
Output- 
Enter 0 Element 11
Enter 1 Element 23
Enter 2 Element 12
Enter 3 Element 33
Enter 4 Element 2
Enter 5 Element 13
Enter 6 Element 56
Enter 7 Element 23
Enter 8 Element 66
Enter 9 Element 78
Enter The Element To Search 23
Element Is  Present 2 times 




/* -------------------------------------------------------------------------- 
Q-3  Search , Count and also print is Position
*/

int main(){

    int a[10], n , i, z=0;

    for ( i=0;  i<10;  i++)
    {
        printf ("Enter %d Element ",i);
        scanf ("%d",&a[i]);
    }

    printf ("Enter The Element To Search ");
    scanf ("%d" ,&n);
    for ( i=0;  i<10;  i++)
    {
        if ( a[i] == n)
        {
            z = z+1;
            printf("Element Found at Position %d\n", i+1);
            
        }

    }
    if ( z == 0)
    printf("Element Is Not Present ");

    else
    printf ("Element Is  Present %d Times ",z);
    return 0;

}
Output-
Enter 0 Element 11
Enter 1 Element 25
Enter 2 Element 13
Enter 3 Element 26
Enter 4 Element 55
Enter 5 Element 23
Enter 6 Element 16
Enter 7 Element 55
Enter 8 Element 34
Enter 9 Element 55
Enter The Element To Search 55
Element Found at Position 5
Element Found at Position 8
Element Found at Position 10
Element Is  Present 3 Times 





// -------------------------------------------------
// Q-4  Search Replace

int main(){

    int a[10], n , n1, i, z=0;

    for ( i=0;  i<10;  i++)
    {
        printf ("Enter %d Element ",i);
        scanf ("%d",&a[i]);
    }

    printf ("Enter The Element To Search ");
    scanf ("%d" ,&n);

    printf ("Enter The New Value ");
    scanf ("%d" , &n);

    for ( i=0;  i<10;  i++)
    {
        if ( a[i] == n)
        {
            z = 1;
            a[i] = n1;

        }
    }
    if ( z == 0)
    printf ("Element Is Not Present ");
    else
    {
    printf ("Element Found and Replace \n");

    for ( i=0;  i<10;  i++)
    {
        printf ("%d\n" ,a[i]);
     }

    }
    return 0;
}
OUtput-
Enter 0 Element 12
Enter 1 Element 34
Enter 2 Element 34
Enter 3 Element 67
Enter 4 Element 44
Enter 5 Element 55
Enter 6 Element 33
Enter 7 Element 34
Enter 8 Element 77
Enter 9 Element 88
Enter The Element To Search 34
Enter The New Value 500
Element Is Not Present 




