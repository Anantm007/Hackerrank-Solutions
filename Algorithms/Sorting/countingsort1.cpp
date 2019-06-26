#include<iostream>
 
using namespace std;
 
int main()
{
    long a[1000000],n,i,j,temp;
    cin>>n;
    
    for(i=0;i<n;++i)
        cin>>a[i];
        
   /* for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }*/
    
    int t;
    
     for(i=0;i<100;i++)
    {
       t=0; 
    
        for(int y=0;y<n;y++)
   {
       
       if(a[y]==i)
           t++;
           
   }
        
        cout<<t<<" ";
    }
    return 0;
}


