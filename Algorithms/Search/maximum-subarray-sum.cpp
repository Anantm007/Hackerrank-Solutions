#include<iostream>

using namespace std;

int main()
{
    int ar[100000],n,csum=0,maxsum=0,i,j,k,m;
    int tot;

    cin>>tot;

    for(int y=0;y<tot;y++)
    {
        csum=maxsum=0;

        cin>>n>>m;

        for(i=0;i<n;i++)
        cin>>ar[i];

        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                csum = 0;

                for(k=i;k<=j;k++)
                {
                csum+=ar[j];
                }


                if(csum%m > maxsum%m)
                {
                    maxsum=csum%m;
                }
            }
        }

        cout<<maxsum<<endl;
    }

    return 0;
}
