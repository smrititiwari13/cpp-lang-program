#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int mat[100][100];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>mat[i][j];
       }
   }
    for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           swap(mat[i][j],mat[j][i]);
       }
   }
   for(int i=0;i<n;i++)
   {
       int left=0,right=n-1;
       while(left<right)
       {
           swap(mat[i][left],mat[i][right]);
           left++;
           right--;
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<mat[i][j];
       }
   }
    return 0;
}
