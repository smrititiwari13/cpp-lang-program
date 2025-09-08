#include<bits/stdc++.h>
using namespace std;
bool isanagram(string s1,string s2)
{
    if(s1.size()!=s2.size())
    return false;
    vector<int> freq(256,0);
    for(char c: s1) freq[c]++;
    for(char c: s2) freq[c]--;
    for(int count: freq)
    {
        if(count!=0)
        return false;
    }
    return true;
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(isanagram(s1,s2))
        cout<<"is anagram";
    else
        cout<<"not anagram";
    return 0;
}
