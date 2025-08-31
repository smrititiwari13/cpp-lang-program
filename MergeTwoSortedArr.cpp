
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"second array";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    a.insert(a.end(),b.begin(),b.end());
    sort(a.begin(),a.end());
    for(int x:a)
    {
        cout<<x<<" ";
    }
    return 0;
}
