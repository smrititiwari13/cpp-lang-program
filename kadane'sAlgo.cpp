#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
    cin>>a1[i];
    int maxend=a1[0];
    int maxso=a1[0];
    for(int i=1;i<n;i++)
    {
        maxend=max(a1[i],maxend+a1[i]);
        maxso=max(maxso,maxend);
    }
    cout<<maxso;
   return 0;
}
