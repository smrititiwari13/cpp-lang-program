#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm," ");
line(100,100,100 ,200);
getch();
closegraph();
}
