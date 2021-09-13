#include<stdio.h>
int prime(int num);
int main()
{
int n,f;
printf("enter a number\n");
scanf("%d",&n);
if(n<=0||n==1)
{
printf("prime number doesnot exists\n");
return 0;
}
f= prime(n);
if(f==1)
printf("%d is a prime number\n",n);
else
printf("%d is not a prime number \n",n);
return 0;
}
int prime(int num)
{
int i;
for(i=2;i<num;i++)
{
if(num%i==0)
return 0;
}
return 1;
}