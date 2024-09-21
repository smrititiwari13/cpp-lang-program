#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,sum=0,a[3][3],b[3][3],c[3][3];
clrscr();
printf("enter the first matrix\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  scanf("%d",&a[i][j]);
 }
}
printf("enetr the second matix\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  scanf("%d",&b[i][j]);
 }
}
printf("the first matrix is \n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d",a[i][j]);
 }
 printf("\n");
}
printf("the second matix is \n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d",b[i][j]);
 }
 printf("\n");
}
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
 {
 sum=0;
  for(k=0;k<=2;k++)
  {
   sum=sum+a[i][k]*b[k][j];
  }
  c[i][j]=sum;
 }
}
printf("the multiplication is\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d ",c[i][j]);
 }
 printf("\n");
}
getch();
}

