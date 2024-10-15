#include<stdio.h>
#include<math.h>
void main()
{
 int discriminant,b,a,c;
 float Root1,Root2;
 printf("enter the equation a*x*x+b*x+c:");
 scanf("%d%d%d",&a,&b,&c);
 discriminant=b*b-4*a*c;
 Root1=(-b+sqrt(discriminant))/(2*a);
 Root2=(-b-sqrt(discriminant))/(2*a);
 printf("\nThe roots of the quadratic equation %dx*x+%dx+c are : %f,%f",Root1,Root2);
}
