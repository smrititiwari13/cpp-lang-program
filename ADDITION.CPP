#include<stdio.h>
#include<conio.h>
void main()
{
int i,j, a[3][3],c[3][3];
clrscr();
printf("enter the 2d matrix:\n");
printf("enterthe first matrix:\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    c[j][i]=a[i][j];
  }
}
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    printf("%d ",c[j][i]);
  }
printf("\n");
}
getch();
}