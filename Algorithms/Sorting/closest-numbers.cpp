#include<iostream>

using namespace std;

int main()
{
    int i,j,k,n;
    int dif;
    int ar[100000],t[1000];

    cin>>n;

    for(i=0;i<n;i++)
    cin>>ar[i];

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int u;
                u=ar[i];
                ar[i]=ar[j];
                ar[j]=u;
            }
        }
    }
    
    
    k=0;

    dif=ar[1]-ar[0];
    t[k++]=ar[0];
    t[k++]=ar[1];

    for(i=1;i<n-1;i++)
    {
        
        if(ar[i+1]-ar[i]==dif)
        {
            t[k++]=ar[i];
            t[k++]=ar[i+1];
        }

        else if(ar[i+1]-ar[i]<dif)
        {
            dif=ar[i+1]-ar[i];
            k=0;
            t[k++]=ar[i];
            t[k++]=ar[i+1];

        }
    }


    for(i=0;i<k;i++)
    cout<<t[i]<<" ";

    return 0;
}
