#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,ar[100000],i;

    cin>>n;

    for(i=0;i<n;i++)
    cin>>ar[i];

    sort(ar,ar+n);

    if(n%2==0)
    cout<<ar[n/2+1];

    else
    cout<<ar[n/2];

    return 0;
}
