#include<iostream>

using namespace std;

int main()
{
    int ar[1000000],n,i;
    int d;

    cin>>n>>d;
    for(i=0;i<n;i++)
    cin>>ar[i];

    for(i=d;i<n;i++)
    cout<<ar[i]<<" ";

    for(i=0;i<d;i++)
    cout<<ar[i]<<" ";

    return 0;
}

