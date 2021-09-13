#include<stdio.h>
int main()
{
int units;
float amt;
char name[10];
printf("enter the number of units consumed\n");
scanf("%d",&units);
printf("enter the name of the customers\n");
scanf("%s",name);
if(units<0)
{
printf("units consumed cannot be negative\n");
return 0;
}
if(units>=0 &&units<=200)
amt= 100+.80*units;
else if(units> 200 &&units<=300)
amt= 100+(units-200)*.90;
else
amt= 100+(units-300)*1.00;
if(amt>400)
amt= amt+0.15*amt;
printf("the customer name is %s\n units consumed is %d \n total amount = %f\n",name,units,amt);
return 0;
}