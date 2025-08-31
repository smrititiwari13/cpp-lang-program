
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum;
    cin>>sum;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(a[i]+a[j]==sum)
        cout<<a[i]<<a[j];
        flag=true;
        }
        if(flag)
        break;
    }
    if(!flag)
    cout<<"not found";
   
    return 0;
}
