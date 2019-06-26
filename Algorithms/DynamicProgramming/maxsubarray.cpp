#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ar[10000],n,i,j;
    int t;
    int suba=0,subs=0;
    int cs;

    cin>>t;

    ab:
    while(t--)
    {
        cs=0;
        suba=subs=0;
        cin>>n;

        for(i=0;i<n;i++)
        cin>>ar[i];

        for(i=0;i<n;i++)
        {
            if(ar[i]>=0)
            break;

            else
            {
                sort(ar,ar+n);
                suba=subs=ar[n-1];
                cout<<suba<<" "<<subs<<endl;
                goto ab;
            }
        }

        for(i=0;i<n;i++)
        {
            cs+=ar[i];
            
            if(cs<0)
            cs=0;

            if(suba<cs)
            suba=cs;

            if(ar[i]>0)
            subs+=ar[i];

        }

        cout<<suba<<" "<<subs<<endl;
        
    }

    cout<<endl;
}
