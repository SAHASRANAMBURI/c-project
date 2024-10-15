#include<stdio.h>
void main()
{
 int original_num,reverse=0,remainder,num;
 printf("Enter the number");
 scanf("%d",&original_num);
 num=original_num;
 while(num>0)
 {
  remainder=num%10;
  reverse=reverse*10+remainder;
  num=num/10;
 }
 {
 if(original_num==reverse)
    printf("the number is palindrome number");
 else
    printf("the number is not a palindrome number");
}
}
