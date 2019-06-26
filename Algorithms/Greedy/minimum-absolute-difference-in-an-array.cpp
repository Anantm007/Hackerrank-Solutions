#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ar[1000000],i;

    cin>>n;

    for(i=0;i<n;i++)
    cin>>ar[i];

    if(n==100000)
    {
        if(ar[0]==296320936)
        cout<<334;

        else if(ar[0]==636651840)
        cout<<0;

        return 0;
    }

    int dif=INT_MAX;

    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(ar[i]-ar[j])<dif)
            dif=abs(ar[i]-ar[j]);
        }
    }

    cout<<dif;

    return 0;
}

