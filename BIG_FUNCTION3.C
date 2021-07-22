#include<stdio.h>

// ====== Pass and Return =====
/*   Main   MENU
1.  cube of nos
2.  Sum of 2 nos
3.  Min Of 3 nos
4. Exit
*/

int Sum(int n1 , int n2)
{
  return (n1 + n2);
}

int Cube(int k)
{
  return (k*k*k);
}

int Min(int a, int b,int c)
{
  if (a<b && a<c)
  return (a);
  else
      if (b<c)
      return (b);
      else
      return(c);

}
int main()
{
  int a,b,c,d,ch=0;
  while (ch != 4)
  {
    printf("Main Menu\n");
    printf("1. Sum of 3 nos \n");
    printf("2. Cube  of a nos \n");
    printf("3. Min of 3 nos \n");
    printf("4. Exit \n");
    scanf("%d",&ch);

    switch(ch)
    {
      case1 :
      printf("Enter 2 Nos");
      scanf("%d",&a,&b);

      c = Sum(a,b);
      printf("Sum = %d\n",c);
      break;

      case2 :
      printf("enter any nos\n") ;
      scanf("%d",a);
      b = Cube(a);
      printf("Cube = %d\n",b);
      break;

      case3 :
      printf("Enter 3 nos\n");
      scanf("%d %d %d",&a,&b,&c);
      d = Min(a,b,c);
      printf("Min No = %d\n",d);
      break;

      case4 :
      printf("End\n");
      break;

      default:
      printf("Invaild Choice\n");
      break;


    }
  }  
}



























/*  Pass and no return
=============
Q.2.
Main Menu

=========
1. Table of a no
2. Max of 3 nos
3. char is vowel or not
4. sum of digit of a no
5. prod of a digit of a no
6. number is SPY number or not
7. Exit   */