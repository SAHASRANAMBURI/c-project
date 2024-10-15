#include<stdio.h>
void main()
{
 int X,Y,a,b,i;
 printf("enter the values of X,Y,a,b:");
 scanf("%d%d%d%d",&X,&Y,&a,&b);
 printf("numbers that are divisible by %d and %d from %d and %d are",a,b,X,Y);
 for(i=X;i<=Y;i++)
  {
    if(i%a==0&&i%b==0)
    printf("\n%d",i);
  }
}
