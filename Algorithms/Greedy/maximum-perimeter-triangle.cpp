#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
    int i,f=0,n,ar[100000];

    cin>>n;

    for(i=0;i<n;i++)
    cin>>ar[i];

    sort(ar,ar+n);

    for(i=n-1;i>=2;i--)
    {
        if(ar[i-1]+ar[i-2]>ar[i])
        {
            f=1;
            cout<<ar[i-2]<<" "<<ar[i-1]<<" "<<ar[i];

            break;
        }
    }

    if(f==0)
    cout<<"-1";

    return 0;


}
