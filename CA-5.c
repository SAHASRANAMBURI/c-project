#include<stdio.h>
void main()
{
 int i,num,correct=0;
 printf("enter the value of n");
 scanf("%d",&num);
 i=1;
 while(i<=num)
  {
    if(num%i==0)
    correct++;
    i++;
  }
 {
 if(correct==2)
    printf("%d is a prime number",num);
 else
    printf("%d is not a prime number",num);
 }
}
