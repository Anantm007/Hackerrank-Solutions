#include <bits/stdc++.h>

using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli i,j,count=0,ar[100000],n,diff;
    
    cin>>n>>diff;

    for(i=0;i<n;i++)
    cin>>ar[i];

    sort(ar,ar+n);

    i=0;
    j=1;
    
    while(j < n) 
    {
        lli d = ar[j] - ar[i];
        
        if (diff == d) 
        {
            count++;
            j++;
        }
        
        else if (diff < d)
            i++;
        
        else
            j++;
        
    }

    cout<<count;

    return 0;


}


