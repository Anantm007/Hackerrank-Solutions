#include<iostream>

using namespace std;

int main()
{
    int i,j;
    long long f,s,n;
    long long ans;

    cin>>f>>s>>n;

    //cout<<f<<" "<<s<<" ";

    for(i=2;i<n;i++)
    {
        ans=f+s*s;
       // cout<<ans;
        f=s;
        s=ans;
    }

    cout<<ans;

    return 0;
}
