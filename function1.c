#include <stdio.h>

// Q -  TABLE of number
void  Table(){
    int a , t , i;
    printf("Enter Any NOS : ");
    scanf("%d", &a);
     printf("=====MY TABLE=====\n");
    for  (i = 1; i<= 10; i++)
    {
        t = a*i;
       
        printf("%d * %d = %d\n" ,a,i,t);
    }
    
}
int main(){
    Table();
    
    return 0;
}
















// max 3 nos ************************

/*  void Max (){

    int a,b,c , m;
    printf("Enter 3 Numbers\n");
    scanf("%d %d %d", &a,&b,&c);

    if ( a>b && a<c)     // min if (a<b && a>c)
    m = a;

    else
      if ( b>c)        // if (b<c)
      m = b;

      else
      m = c;

      printf("Maximum Of This Number = %d\n", m);
      
}

int main(){

    Max();
    return 0;
}  */










// difference of 2 nos  *************************************
/*  void diff();
int main(){

    diff();
    return 0;
}

void  diff(){

    int a,b,c;
    printf("Enter 2 NOS \n");
    scanf("%d %d", &a , &b);

    if (a>b)
    c = a-b;

    else
    c = b-a;

    printf("DIFFERENCE OF THIS NUMBERS = %d\n", c);
}
*/  






//==========================================================================================

/* Q- Product of 3 nos
void Product(){

    int a,b,c,d;

    printf("Enter 3 nos\n");
    scanf("%d %d %d", &a , &b , &c);
    d = a*b*c;
    printf("Product Of This Numbers = %d\n", d);
}

int main(){

    Product();
    return 0;
} */







/*  Q- CUBE of 3 nos
void Cube(){
    int a,b;

    printf("Enter Any Number\n");
    scanf("%d", &a);
    b = a*a*a;
    printf("Print The Cube Nos : = %d\n",b);
}


int main(){

    Cube();
    return 0;
} */

/*  Q- SUM OF TWO NOS

void sum();
int main(){

    sum();
    return 0;
}
void sum() {
    int a,b,c;
    printf("Enter Two nos\n");
    scanf("%d %d",&a,&b);

    c = a + b;
    printf("Sum Of Two Numbers : = %d\n",c);
} */


/* Q- squre of two nos

void square()
{
    int a, b;
    printf("Enter any nos ");
    scanf("%d", &a);

    b = a * a;
    printf("square = %d\n", b);
}

int main(){
    square();
    return 0;
}  */