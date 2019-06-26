#include<iostream>

using namespace std;


void sort(int ar[],int n)
{
    int i,j;
                 
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }
    
}

int main()
{
    int i,j,t,n,ar[1000];
    
    cin>>n;
    
    for(i=0;i<n;i++)
         cin>>ar[i];
    
    int max=1,cur=1;
    
    sort(ar,n);
    
    sort(ar,n);
    
    for(i=0;i<n-1-1;i++)
    {
        if(ar[i]==ar[i+1])
        {
            cur++;
            
        }    
        
         if(cur>max)
        {
            max=cur;
            cur=1;
            t=ar[i];
        }
        
                
                
    }
    
    if(t==ar[n-1])
    max++;
    
    
        
    
    cout<<n-max;
    
    return 0;
}
