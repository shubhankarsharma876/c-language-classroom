#include<stdio.h>
int main()
{
int num;
float sqr,temp;
printf("enter the number \n");
scanf("%d",&num);
if(num<0)
{
printf("square root of a negative number not possible\n");
return 0;
}
temp=0;
sqr=num/2.0;
while(sqr!=temp)
{
temp=sqr;
sqr= (num/sqr+sqr)/2;
}
printf("square root(%d) is %f\n",num,sqr);
return 0;
}