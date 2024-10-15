#include<stdio.h>
void main()
{
 int a,b,c,d;
 printf("enter the values of a,b,c,d");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>c)
   {
    if(a>b&&a>d)
        printf("a=%d is the biggest",a);
    else if(d>b)
        printf("d=%d is the biggest",d);
    else
        printf("b=%d is the biggest",b);
   }
else
   {
    if(c>d&&c>b)
        printf("c=%d is the biggest",c);
    else if(b>d)
        printf("b=%d is the biggest",b);
    else
        printf("d=%d is the biggest",d);
   }
}
