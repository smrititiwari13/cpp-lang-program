#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[10],t;
clrscr();
printf("enter any ten elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter an element to search:");
scanf("%d",&t);
j=0;
for(i=0;i<10;i++)
{
if(t==a[i])
{
j=1;
break;
}
}
if(j==1)
{
printf("%d",i);
}
else
{
printf("no not found:");
}
getch();
}

