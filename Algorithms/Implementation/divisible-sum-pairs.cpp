#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,k,ar[1000];
    int i,j;
    
    cin>>n;
    cin>>k;
    int c=0;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                if((ar[i]+ar[j]) % k==0)
                c++;
            }
        }
    }
    cout<<c;
return 0;
}
