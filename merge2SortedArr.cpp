#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
    cin>>a1[i];
    int m;
    cin>>m;
    int a2[m];
    for(int i=0;i<m;i++)
    cin>>a2[i];
    multiset<int> ms;
    for(int i=0;i<n;i++) ms.insert(a1[i]);
    for(int i=0;i<m;i++) ms.insert(a2[i]);
    for(int x:ms)
    {
        cout<<x;
    }
    return 0;
}
