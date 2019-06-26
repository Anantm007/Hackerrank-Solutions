#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,m,n,ar[10000];
    
    cin>>m;
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=0;i<n;i++)
    {
        if(m==ar[i])
        {
            cout<<i;
            return 0;
        }
    }
    
    return 0;
}


