
#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 cout<<"enter the value of a and b\n";
 cin>>a>>b;

 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"THE VALUE OF A AND B\n"<<a<<"\n"<<b;

 getch();
 }