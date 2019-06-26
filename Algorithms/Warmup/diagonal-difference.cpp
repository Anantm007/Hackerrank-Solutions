#include<iostream>

using namespace std;

int main()
{
    int ar[100][100];
    int n,d1=0,d2=0,d;
    
        cin>>n;
    int i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>ar[i][j];
        
       
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i==j)
             d1+=ar[i][j];
         if(i+j==n-1)
             d2+=ar[i][j];
        }
            }
    
    d=d2-d1;
    
    if(d<0)
        d=d*-1;
    
    cout<<d;

    return 0;
}


