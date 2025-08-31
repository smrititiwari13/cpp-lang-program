#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int low = 0, high = n - 1;

    while(low < high) {
        if(a[low] != 0) {
            low++;   
        } else if(a[high] == 0) {
            high--; 
        } else {
            swap(a[low], a[high]);
            low++;
            high--;
        }
    }

    for(int x : a)
        cout << x << " ";
    return 0;
}
