
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int s, t, a, b, n, m;
    int ans1=0, ans2=0;
    int i;
    int d;

    cin>>s>>t>>a>>b>>m>>n;

    for(i=0;i<m; i++) 
    {
        cin>>d;
        d+=a;

        if(d>=s && d<=t)
            ans1++;
    }

    for(i=0;i<n; i++)
    {
        cin>>d;
        d+=b;

        if(d>=s && d<=t)
            ans2++;
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl; 
    return 0;
}
