#include<stdio.h>
#include<conio.h>
void main()
{
int i,a1[10], max,min;
clrscr();
printf("enter the ten no:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a1[i]);
}
max=a1[0];
min=a1[0];
for(i=0;i<10;i++)
{
 if(a1[i]>max)
    {
     max=a1[i];
    }
    if(a1[i]<min)
     {
      min=a1[i];
     }
}
printf("maximum element = %d\n", max);
printf("min element = %d\n", min);
getch();
}