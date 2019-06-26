#include<iostream>

using namespace std;

int main()
{
    int n,ar[100000],i,m=0,i1,i2;
    int j,t;
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                m++;
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
                i1=i+1;
                i2=j+1;
            }
        }
    }
    
    if(m==0)
    {
      cout<<"yes";
        return 0;
    }
    
    if(m==1)
    {
        cout<<"yes"<<endl<<"swap "<<i1<<" "<<i2;
        return 0;
        
    }
    
    if(m>1)
    {
        cout<<"no";
        return 0;
    }
    
}
