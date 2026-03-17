
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr(2,0);
    cin>>arr[0];
    cin>>arr[1];
    for(auto i:arr)
    {
    if(i<10)
    cout<<"its very cold"<<endl;
    else if(i>10 && i<20)
    cout<<"its cold"<<endl;
    else
    cout<<"its warm"<<endl;
    }
    double ans=arr[0]+arr[1];
    cout<<fixed<<setprecision(1)<<(ans/2)<<endl;
    reverse(arr.begin(),arr.end());
    cout<<arr[0]<<","<<arr[1];
    return 0;
    
}
