#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    bool isPrime=true;

    if(n<=1) 
    {
        isPrime=false;  
    } 
    else 
    {
        for(int i=2;i*i<=n;i++) 
        {
            if (n%i==0) 
            {   
                isPrime=false;
                break;
            }
        }
    }

    if(isPrime)
        cout<<"prime";
    else
        cout<<"not prime";

    return 0;
}
