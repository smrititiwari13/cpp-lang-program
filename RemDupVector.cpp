#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    set<int> v(a.begin(), a.end());  
    for(int x : v)
     cout << x << " ";

    return 0;
}
