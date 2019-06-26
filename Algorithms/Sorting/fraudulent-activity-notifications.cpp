#include<bits/stdc++.h>

using namespace std;

int median(int ar[],int s,int e)
{
    int n;
    int arr[10000];
    for(int i=s;i<e;i++)
    arr[n++]=ar[i];

    int ans;

    sort(arr,arr+n);
    if(n%2!=0)
    ans = arr[n/2];

    else
    ans = (arr[n/2]+arr[n/2-1])/2;

    /*for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<ans<<endl;*/
    return ans;
}
int main()
{
    int n,ar[100000],notif=0,j,k;
    int d;
    int i;

    cin>>n>>d;

    for(i=0;i<n;i++)
    cin>>ar[i];

    int s=0,e=d;

    for(int y=d;y<=n;y++)
    {
        int m=median(ar,s,e);

        s++;
        e++;

        if(2*m<=ar[y])
        notif++;
    }

    cout<<notif;

    return 0;
}

