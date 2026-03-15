#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
     
    int ans=INT_MAX;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            ans=min(ans,x);
        }
    }
  
    cout<<"minimum element = "<<ans;
    return 0;
    
}
