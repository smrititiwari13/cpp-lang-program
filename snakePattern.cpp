// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       vector<int>arr(m,0);
       for(int j=0;j<m;j++)
       cin>>arr[j];
       if(i&1) reverse(arr.begin(),arr.end());
       for(auto j:arr)
       cout<<j<<" ";
   }
   cout<<endl;
    
    return 0;
    
}
