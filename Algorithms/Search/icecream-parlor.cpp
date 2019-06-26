#include<iostream>

using namespace std;

int main()
{
    int i,j,l,r,ar[10000],money,n;
    int tot;

    cin>>tot;

    for(int y=0;y<tot;y++)
    {
        cin>>money>>n;

        for(i=0;i<n;i++)
        cin>>ar[i];

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(ar[i]+ar[j]==money)
                {
                    l=i+1;
                    r=j+1;
                    break;
                }
            }
        }

        cout<<l<<" "<<r;
        cout<<endl;
    }

    return 0;
}
