#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string res="";
    unordered_set<char> seen;
    for(char c: s)
    {
        if(isalpha(c))
        {
            char ch=tolower(c);
            if(seen.find(ch)==seen.end())
            {
              res+=c; 
              seen.insert(ch);
            }
        }
    }
    cout<<res;
  
 
  
  
   
    return 0;
}
