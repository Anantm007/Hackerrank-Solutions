#include<iostream>

using namespace std;

int main()
{
    int i,shared,liked,l=0,n;
    
    shared=5; 
    cin>>n;
    
    for(i=1;i<=n;i++)
    {     
        liked=shared/2;
        l+=liked;
        shared=liked*3;
    }
    
    cout<<l;
    
    return 0;
}
