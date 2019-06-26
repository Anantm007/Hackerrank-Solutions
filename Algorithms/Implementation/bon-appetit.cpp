#include<iostream>

using namespace std;

int main()
{
    long i,s=0,n,ar[200000],index,bill;
    
    cin>>n;
    cin>>index;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
        
        cin>>bill;
    
    for(i=0;i<n;i++)
        s+=ar[i];
    
    s-=ar[index];
    
    if(s/2==bill)
        cout<<"Bon Appetit";
    
    else
        cout<<bill-s/2;
    
    return 0;
}
