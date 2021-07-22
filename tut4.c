#include<stdio.h>

int main(){
    int rollno;
    char name[20];
    float m1,m2, m3,total , per;

    printf("Enter your rollno ");
    scanf("%d",&rollno);
    printf("Enter your namen ");
    scanf("%s",&name);
    printf("Enter your marks of m1 , m2 and m3 \n");
    scanf("%d %d %d",&m1,&m2,&m3);

    total = m1 + m2 + m1;
    per = total / 3;
    printf("Total = %.3f   per = %.2f \n");

    if (per >= 90)
    printf("Grade : A+ ");
    else 
    if ( per >= 80)
    printf("Grade : A ");
    else
    if (per >= 70)
    printf("Grade : B+ ");
    else
    if (per >= 60)
    printf("Grade : B ");
    else
    if (per >= 50 )
    printf("Grade : C ");
    else
    if (per >= 40 )
    printf("Grade : D ");
    else
    printf("Grade : F ");





    

    



    return 0;
}