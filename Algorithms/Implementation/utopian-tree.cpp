#include<iostream>

using namespace std;

int main()
{
    int i,j,n,p;
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        int t=1;
        
        cin>>p;
        
        for(j=1;j<=p;j++)
        {
            if(j%2==0)
                t+=1;
            
            else
                t*=2;
        }
        
        cout<<t<<endl;
        
        
    }
    
    return 0;
}
