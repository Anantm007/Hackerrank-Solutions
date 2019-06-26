#include<iostream>

using namespace std;


int main()
{
    int n;
    int i,j,k;
    cin>>n;
    
    for(i=1;i<=n;i++)
    { 
     if(i==n);
     else{
         for(j=0;j<n-i;j++)
            cout<<" ";
         
     }
        
        
        k=i;
        while(k)
        {
            cout<<"#";
            k--;
        }
        
        cout<<"
"; 
             
    }
    
    return 0;
}
