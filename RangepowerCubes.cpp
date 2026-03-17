

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long sum=0;
    for(long long i=n;i<=m;i++)
    sum +=i*i*i;
    cout<<sum;
    return 0;
}
