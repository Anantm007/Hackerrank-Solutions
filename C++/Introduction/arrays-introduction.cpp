#include<iostream>

using namespace std;

int main()
{
    int n,ar[5000];
    int i;
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=n-1;i>-1;i--)
        cout<<ar[i]<<" ";
    
    return 0;
    
}
