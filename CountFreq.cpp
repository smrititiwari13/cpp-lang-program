#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int> freq;
    for(int x: arr)
    {
       freq[x]++;
    }
    for(auto it: freq)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    

    return 0;
}
