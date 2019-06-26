#include<iostream>

using namespace std;

int main()
{
    int i,n,x,y,z;
    int p,q;
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        
        p=z-x;
        if(p<0)
            p*=-1;
        
        q=z-y;
        if(q<0)
            q*=-1;
        
        if(p<q)
            cout<<"Cat A"<<endl;
        
        else if(q<p)
            cout<<"Cat B"<<endl;
        
        else 
            cout<<"Mouse C"<<endl;
        
    }
    
    return 0;
}
