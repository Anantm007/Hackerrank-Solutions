#include<iostream>

using namespace std;

int main()
{
    int i,j,n,ar[10000],min,max;
    int f=0,s=0;
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    min=max=ar[0];
    
    for(i=1;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
            s++;
        }
        
        if(max<ar[i])
        {
            max=ar[i];
            f++;
        }

    }
    
    cout<<f<<" "<<s;
    
    return 0;
    
}
