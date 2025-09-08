#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   int vowels=0,consonents=0;
   for(char c: s)
   {
       if(isalpha(c))
       {
       char ch= tolower(c);
       if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
       vowels++;
       else
       consonents++;
       }
   }
   cout<<"vowels: "<<vowels<<endl;
   cout<<"consonents: "<<consonents;
   
    return 0;
}
