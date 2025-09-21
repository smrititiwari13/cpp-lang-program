#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int count=0,majority=-1;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
       count=0;
     for(int j=0;j<n;j++)
     {
         if(a[i]==a[j])
         {
             
             count++;
             majority=a[i];
         }
     }
     if(count>n/2)
     {
         majority=a[i];
         break;
     }
   }
   if(majority!=-1)
   cout<<majority;
   else
   cout<<"no";
  
    return 0;
}
