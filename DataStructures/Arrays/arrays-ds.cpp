#include<iostream>

using namespace std;

int main()
{
    int n,ar[100000],i;

    cin>>n;
    for(i=0;i<n;i++)
    cin>>ar[i];

    for(i=n-1;i>=0;i--)
    cout<<ar[i]<<" ";

    return 0;
}
