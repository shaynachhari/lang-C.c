#include<stdio.h>

int main(){ 

    int a = 10 , b = 4 , c;
    float c1;

    c = a/b;         //  implicity conversion
    printf(" c = %d \n ", c);

    c1 = a/b;
    printf("c1 = %d \n " , c1);


    c1 =(float) a/b;   // explicit  conversion
    printf("c1 = %f \n " , c1);





    return 0;

}