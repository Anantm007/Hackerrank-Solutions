#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ar[10000],i;

    cin>>n;

    for(i=0;i<n;i++)
    cin>>ar[i];

    sort(ar,ar+n);

    for(i=0;i<n;i+=2)
    {
        if(ar[i]!=ar[i+1])
       {
            cout<<ar[i];
            break;
       }
    }
        return 0;
}
