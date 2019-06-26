#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ar[1000000],n;
    int ans=0;
    int i;

    cin>>n;
    
    for(i=0;i<n;i++)
    cin>>ar[i];

    sort(ar,ar+n);

    int max=ar[n-1];
    ans++;

    for(i=n-2;i>=0;i--)
    {
        if(max==ar[i])
        ans++;

        else
        break;
    }

    cout<<ans;

    return 0;
}
