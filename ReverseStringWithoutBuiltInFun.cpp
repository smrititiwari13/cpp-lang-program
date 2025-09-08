#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
  int slow=0,fast=s.size()-1;
  while(slow<fast)
  {
      swap(s[slow],s[fast]);
      slow++;
      fast--;
  }
  cout<<s;
  
  
   
    return 0;
}
