#include<iostream>

using namespace std;

int sq(int n)
{
    for(int i=1;i<10000;i++)
    if(i*i==n)
    return 1;

    return 0; 
}

int main()
{
    int i,j,l,r,n;

    cin>>n;

    for(int y=0;y<n;y++)
    {
        cin>>l>>r;
        int t=0;

        for(i=l;i<=r;i++)
        {
            if(sq(i)==1)
            t++;
        }

        cout<<t<<endl;
    }

    return 0;
}
