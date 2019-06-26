#include<iostream>

using namespace std;

int main()
{
    int x1,v1,x2,v2,f,s;
    
    cin>>x1>>v1>>x2>>v2;
    
    f=x1+v1;
    s=x2+v2;
    
    for(int i=0;i<1000000;i++)
    {
        if(f==s)
        {
            cout<<"YES";
            return 0;
        }
        
        f+=v1;
        s+=v2;
    }
    
    cout<<"NO";
    
    return 0;
}
