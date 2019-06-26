#include<iostream>

using namespace std;

int main()
{
    int n,s=0,ar[10000];
    cin>>n;
    int i; 
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=0;i<n;i++)
        s+=ar[i];
    
    cout<<s;
    
    
    
    return 0;
    }

