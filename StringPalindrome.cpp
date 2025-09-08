#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int fast=0;
    int slow=s.size()-1;
    bool is=false;
    while(fast<slow)
    {
        if(s[fast]==s[slow])
        {
           is=true; 
        }
        fast++;
        slow--;
    }
    if(is)
    cout<<"string is palindrome";
    else
    cout<<"string is not palindrome";
    return 0;
}
