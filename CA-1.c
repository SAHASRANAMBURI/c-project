#include<stdio.h>
void main()
 {
   int type;
   float cel,fahr;
   printf("Temperature conversion\n");
   printf("1.Celsius to Fahrenheit\n");
   printf("2.Fahrenheit to Celsius\n");
   printf("Enter which type 1 or 2");
   scanf("%d",&type);
   switch(type)
   {
   case 1:
         printf("Enter the temperature in Celsius");
         scanf("%f",&cel);
         fahr=((9*cel)/5)+32;
         printf("%f Celsius in Fahrenheit is %f",cel,fahr);
         break;
   case 2:
         printf("Enter the temperature in Fahrenheit");
         scanf("%f",&fahr);
         cel=(fahr-32)*5/9;
         printf("%f Fahrenheit in Celsius is %f",fahr,cel);
         break;
   default:
         printf("Invalid choice");
         break;
   }
}
