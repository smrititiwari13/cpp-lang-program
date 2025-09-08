#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string res="";
    for(char c: s)
    {
        if(isalpha(c))
        {
            char ch=tolower(c);
            if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            {
              res+=c; 
            }
        }
    }
    cout<<res;
  
 
  
  
   
    return 0;
}
