
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    vector<int> a(n-1);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int total=(n*(n+1))/2;
    for(int x: a)
    {
        sum+=x;
        
    }
    cout<<total-sum;
    

    return 0;
}
