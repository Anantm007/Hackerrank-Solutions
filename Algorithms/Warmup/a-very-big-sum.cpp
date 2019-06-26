#include <bits/stdc++.h>

using namespace std;





int main()
{
    long long int ar[11];
    int i,n;
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    long long int ans;
    ans=0;
    for(i=0;i<n;i++)
        ans=ans+ar[i];
    
    cout<<ans;
    
return 0;
}
