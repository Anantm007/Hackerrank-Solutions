#include<iostream>

using namespace std;

int main()
{
    int i,j,k,ans=0,cur;
    int n;
    int ar[100000];

    cin>>n;

    for(i=0;i<n;i++)
    cin>>ar[i];

    i=0;
    while(i<n)
    {
        if(ar[i]==1)
        {
            i++;
            
        }
        
        if(ar[i]==0)
        {
            if(ar[i+1]==0 && ar[i+2]==0)
            {
                ans++;
                i+=2;
            }

            else if(ar[i+1]==1 && ar[i+2]==0)
            {
                i+=2;
                ans++;
            }

            else if(ar[i+1]==0)
            {
                i+=1;
                ans++;
            }

            
        }

        if(i>=n)
        break;

        
    }

    if(ar[n-2]==1 || (ar[n-3]==0 && ar[n-2]==0 && ar[n-1]==0) )
    ans--;

    cout<<ans;

    return 0;
}


