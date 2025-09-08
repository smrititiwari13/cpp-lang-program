#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
   
   unordered_map<char,int> freq;
    for(char c: s)
    {
       if(c!=' ')
       {
           freq[c]++;
       }
    }
    for(auto it: freq)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    return 0;
}
