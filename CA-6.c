#include<stdio.h>
void main()
{
 int num,sum=0,i;
 printf("enter the number");
 scanf("%d",&num);
 for(i=1;num>i;i++)
    if(num%i==0)
    sum=sum+i;
 {
  if(sum==num)
    printf("%d is perfect number",num);
  else
    printf("%d is not perfect number",num);
 }

}
