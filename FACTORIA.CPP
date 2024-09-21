#include<iostream.h>
#include<conio.h>
void main()
{
int fact=1,n,i;
clrscr();
cout<<"enter no\n";
cin>>n;
for(i=1;i<=n;i++){

fact=fact*i;
}
cout<<fact;
getch();
}