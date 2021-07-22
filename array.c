#include<stdio.h> 
// Q-1  5 element --- print the largest number

int main(){
    int a[5], i , m;
    for ( i=0;  i<5;  i++)
    {
        printf("Enter %d Elements ",i);
        scanf("%d",&a[i]);
    }

    m = a[0];
    for ( i=0; i<5; i++)
    {
        printf("%d\n",a[i]);

        if (a[i] > m){
        m = a[i];
        }
    }

    printf("Max Elements = %d\n",m);
    return 0;
}  
Output-
Enter 0 Elements 12
Enter 1 Elements -55
Enter 2 Elements -34
Enter 3 Elements 67
Enter 4 Elements 15
12
-55
-34
67
15
Max Elements = 67


// ----------------------------------------------------------------------------------------------------------------------------------


// Q-2     5 element --- print the lowest number

int main(){
    int a[5], i , m;
    for ( i=0;  i<5;  i++)
    {
        printf("Enter %d Elements ",i);
        scanf("%d",&a[i]);
    }

    m = a[0];
    for ( i=0; i<5; i++)
    {
        printf("%d\n",a[i]);

        if (a[i] < m){
        m = a[i];
        }
    }

    printf("Min Elements = %d\n",m);
    return 0;
}
Output
Enter 0 Elements 12
Enter 1 Elements 23
Enter 2 Elements 78
Enter 3 Elements 9
Enter 4 Elements 88
12
23
78
9
88
Min Elements = 9




/* --------------------------------------------------------------------------

Q-3  print 5 elements
1.  Largest elements
2.  Lowest elements
3.  diff b/w max and min no.  
*/

int main ()
{

    int a[5] , ma , mi , i, d;
    for( i=0;  i<5;  i++)
    {
        printf("Enter %d Elements ", i);
        scanf("%d\n" , a[i]);

    }

    ma = a[0];
    mi = a[0];

    for ( i=0;  i<5;  i++)
    {
        printf("%d\n", a[i]);
        // max no
        if ( a[i] > ma)
          ma = a[i];

        // min no
        if ( a[i] < mi)
          mi = a[i];
    }
    // diff
    d = ma - mi;

    printf("Max Element = %d Min Element = %d diff = %d ", ma , mi ,d);
    return 0;
}




























// print 10 Product of elements
/*
int main()
{
    int a[5],i , p=1;
    // input
    for ( i=0 ; i<5;  i++)
    {
        printf("Enter %d elements\n ",i);
        scanf("%d" , &a[i]);
    }

    // display
    for ( i= 0; i<5; i++)
    {
        printf("%d\n" , a[i]);
        p = p * a[i];
    }
    printf("Product = %d\n", p);
    return 0;
}  */


// print 10 Sum of elements


/*
nt main()
{
    int a[5],i , s=0;
    // input
    for ( i=0 ; i<5;  i++)
    {
        printf("Enter %d elements\n ",i);
        scanf("%d" , &a[i]);
    }

    // display
    for ( i= 0; i<5; i++)
    {
        printf("%d\n" , a[i]);
        s = s + a[i];
    }
    printf("sum = %d\n", p);
    return 0;
}  */




















/*
#include<stdio.h>
// totol odd 

int main()
{
    int a[5], i , p=0 , s=0;
    float avg;

    for ( i=0;  i<5;  i++)
    {
        printf("Enter %d elements\n",i);
        scanf("%d", &a[i]);
    }

    for ( i=0;  i<5;  i++)
    {
        printf("%d\n", a[i]);

        if ( a[i]%2 == 1) {
            p++;
            s = s + a[i];
        }
    }
    printf("Total odd elements = %d\n" , p);
    printf("Sum of all odd elements = %d\n" , s);
    avg = (float)s/p;
    printf("Average of all odd elements = %f\n", avg);
    return 0;
}

*/