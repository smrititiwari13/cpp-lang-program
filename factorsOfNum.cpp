
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    if(n==0)
    cout<<"no factors";
    else
    {
     cout<<("1,");
    n=abs(n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        cout<<i<<",";
    }
    cout<<n;
    }
    return 0;
}
