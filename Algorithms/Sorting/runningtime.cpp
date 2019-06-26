#include<iostream>
 
using namespace std;
 
int main()
{
    int a[100000],n,i,j,temp;
    int an=0;
    
    cin>>n;
     
    
    for(i=0;i<n;++i)
        cin>>a[i];
        
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                an++;
            }
    }
    
    cout<<an;
    
    
        
    return 0;
}
