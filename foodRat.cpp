
#include <iostream>
using namespace std;
 int calculate(int r,int unit, int ar[],int n)
{
    int totalfood=r*unit;
    if(n==0)
    return -1;
    int foodtill=0;
    int house=0;
    for(house=0;house<n;++house)
    {
        foodtill+=ar[house];
        if(foodtill>=totalfood)
        break;
    }
    if(totalfood>foodtill)
    return -1;
    return house+1;
    
}
int main() 
{
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    cout<<calculate(r,unit,ar,n);
    
    

    return 0;
}
