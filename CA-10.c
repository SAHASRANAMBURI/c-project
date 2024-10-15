#include<stdio.h>
#include<math.h>
void main()
{
 int original_num,num,rem,sum=0,n=0;
 printf("enter the number");
 scanf("%d",&original_num);
 num=original_num;
 while(num>0)
{
 num=num/10;
 n++;
}
num=original_num;
 while(num>0)
{
    rem=num%10;
    sum=sum+pow(rem,n);
    num=num/10;
}
if(sum==original_num)
printf("%d is an Armstrong number",original_num);
else
printf("%d is not an Armstrong number",original_num);
}
