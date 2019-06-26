#include<iostream>

using namespace std;

int main()
{
   long int n,ar[1000];
    
    cin>>n;
    
    int i,j,ans=0;
    
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j] && ar[i]!=-1)
            {     ans++;
            ar[j]=-1;
             ar[i]=-1;
            
                        
            }
            
        }
        
    }
    
    cout<<ans;
    
    return 0;
}
