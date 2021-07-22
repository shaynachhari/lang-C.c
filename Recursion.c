#include<stdio.h>
#include<ctype.h>
// // isalpha();
// int main()
// { 
//     char ch;
//     printf("Enter any character ");
//     scanf("%c",&ch);

//     if(isalpha(ch))
//     printf("It is an alphabet\n ");
//     else
//     printf("It is not an alphabet \n");

//     return 0;

// }


// islower();
// int main()
// { 
//     char ch;
//     printf("Enter any character ");
//     scanf("%c",&ch);

//     if(islower(ch))
//     printf("It is an lower alphabet\n ");
//     else
//     printf("It is not an islower alphabet \n");

//     return 0;

// }


// isdigit();
int main()
{ 
    char ch;
    printf("Enter any numbers ");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        printf("It is a alphabrt\n");
        if(isalpha(ch))
    {
        printf("It is an upper case alphabet \n");
        printf("Its lower From is %c \n", islower(ch));
        printf("Its position is %d \n",ch-64);
    }
    else{
        printf("It is a lower case alphabet \n");
        printf("It upper from is %c \n",islower(ch));
        printf("Its position is %d \n ",ch-96);
 }
    }

    else
    if (isdigit (ch))
    printf("It is a digit \n");
    else
    printf("It is a special character \n");

    return 0;

}



















// // print factorial of a number using recursion
// int Fact( int n);
// int main()
// {

//     int n,f;
//     printf("Enter any number ");
//     scanf("%d", n);
//     f = Fact(n);
//     printf("The Factorial of a number %d id %d in \n" , n,f);
//     return 0;
// } 

// int Fact( int n){
    
//     if (n == 0)
//     return (1);

//     else
//     return(n*Fact(n-1));

// }