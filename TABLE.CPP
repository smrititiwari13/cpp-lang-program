#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("enter any no\n");
scanf("%d",&n);
for(i=1;i<=20;i++)
{
 printf("%d x %d =%d\n",n,i,n*i);
}
getch();
}