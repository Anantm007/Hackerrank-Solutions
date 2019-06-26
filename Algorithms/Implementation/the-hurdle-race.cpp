#include<iostream>

using namespace std;

int main()
{
    int i,n,ar[10000],max,m;
    
    cin>>n;
    cin>>m;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    max=ar[0];
    
    for(i=1;i<n;i++)
    {
        if(ar[i]>max)
            max=ar[i];
    }
    
    if(m>max)
        cout<<"0";
    
    else
       cout<<max-m;
    
    return 0;
}
