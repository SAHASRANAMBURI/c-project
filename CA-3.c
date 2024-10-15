#include<stdio.h>
int main()
 {
   int units;
   float amount;
   printf("enter number of units");
  scanf("%d",&units);
  if(units<=50)
      printf("\nThe electricity bill is%f",amount=units*0.50);
 else if(units>50&&units<=150)
       printf("\nThe electricity bill is%f",amount=(50*0.50)+((units-50)*0.75));
  else if(units>150&&units<=250)
        printf("\nThe electricity bill is%f",amount=(50*0.50)+(100*0.75)+((units-150)*1.20));
  else if(units>250)
        printf("\nThe electricity bill is%f",amount=(50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50));
}
