#include<stdio.h>
void read_mat(int a[10][10],int m,int n);
void print_mat(int a[10][10],int m,int n);
void mul(int a[10][10],int b[10][10],int c[10][10],int m,int n,int q);
int main()
{
int m,n,p,q,a[10][10],b[10][10],c[10][10];
printf("enter the rows and columns of first matrix\n");
scanf("%d%d",&m,&n);
printf("enter the rows and columns of second m atrix\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("muilitplication not possible\n");
return 0;
}
printf("enter the elements of first matrix\n");
read_mat(a,m,n);
printf("enter the elements of second matrix\n");
read_mat(b,p,q);
printf("the first matrix is \n");
print_mat(a,m,n);
printf("the second matrix is \n");
print_mat(b,p,q);
mul(a,b,c,m,n,q);
printf("the resultant matrix is \n");
print_mat(c,m,q);
return 0;
}
void read_mat(int a[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
void print_mat(int a[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
}
void mul(int a[10][10],int b[10][10],int c[10][10],int  m,int n,int q)
{
int i,j,k;
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
