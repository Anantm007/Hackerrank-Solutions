#include<iostream>

using namespace std;

int main()
{
    int a,b,t;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        int ans=a;

        for(int i=a+1;i<=b;i++)
        ans&=i;

        cout<<ans<<endl;
    }

    return 0;
}
