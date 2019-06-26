#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int ar[5],t;
    long int i,min=0,max=0;
    
    for(i=0;i<5;i++)
        cin>>ar[i];
    
    for(i=0;i<5-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
             t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        } 
    }
    
    for(i=0;i<4;i++)
        min+=ar[i];
    
    for(i=1;i<5;i++)
        max+=ar[i];
    
    cout<<min<<" "<<max;
    
return 0;
}
