#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  vector<int>arr(n,0);
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i]<0)
      {
          cout<<"invalid";
          return 0;
      }
  }
  unordered_map<int,int>mpp;
  for(int i=1;i<n;i++)
  mpp[abs(arr[i]-arr[i-1])]++;
  int count=0,ans=0;
  for(auto i:mpp)
  {
      if(count<i.second)
      {
          count=i.second;
          ans=i.first;
      }
  }
  if(count==1) cout<<"non"<<endl;
  else cout<<ans<<endl;
  return 0;

}
