#include<stdio.h>

int main(){
    int i=1 , p=0, s=0, n;
    float av;

    while (i <= 5) {

        printf("Enter %d Number ", i);
        scanf("%d", &n);
        i = i+1 ;

        if (n > 0) {
          p++;
          s = s+n;
        }
        
        
     } av=float(s/p);
    

    printf("Total -ve Elements = %d \n" , p);

    printf("Sum of all -ve Elements = %d \n" , s);

    printf("Average of all  -ve Elements = %f \n" , av);

    
    return 0;
}



























// int main(){
//     int i=1 , n , f=1;

//     printf("Enter Any Number ");
//     scanf("%d" , &n);

//     while ( i <= n)

//     {
//         f = f*i;
//         printf(" %d",i);

//         if (i<n)
//         printf(" * ");
//         i++;

//     }
//     printf(" Factorail Naumner = %d \n", f);

//     return 0;
// }





































// int main(){
//     // base and power
//     int i = 1 , b , p , r =1;

//     printf("Enter VALUE OF BASE AND POWER \n");
//     scanf(" %d %d ",&b , &p);

//     while ( i <= p)

//     {   r = r*i;

     
//       i++ ;
//     }
     
//      rintf("Result = %d \n" , r , p);


//     return 0;
// }