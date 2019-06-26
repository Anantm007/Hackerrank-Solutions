#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3],b[3],c[2];
    
    c[0]=c[1]=0;
    
    for(int i=0;i<3;i++)
        cin>>a[i];
    
    for(int j=0;j<3;j++)
        cin>>b[j];
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            c[0]++;
        
        else if(a[i]<b[i])
            c[1]++;
    }
    
    for(int i=0;i<2;i++)
        cout<<c[i]<<" ";
    
    return 0;
    
    
}
