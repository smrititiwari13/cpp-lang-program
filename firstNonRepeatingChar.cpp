#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str;
    cin>>str;
   int freq[256]={0};
    for(char ch: str)
    {
        freq[(unsigned char)ch]++;
    }
    for(char ch: str)
    {
        if(freq[(unsigned char)ch]==1)
        {
        cout<<ch;
        return 0;
        }
    }
    return 0;
}
