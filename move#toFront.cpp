#include<bits/stdc++.h>
using namespace std;
char move(char a[],int n)
{
    char s1[100],s2[100];
    int i,j=0, k=0;
    for(i=0;a[i];i++)
    {
        if(a[i]=='#')
        s1[j++]=a[i];
        else
        s2[k++]=a[i];
    }
    strcat(s1,s2);
    cout<<s1;
    return 0;
}

int main() 
{ 
    char a[100],len;
    cin>>a;
    len=strlen(a);
    move(a,len);

   
    return 0;
}
