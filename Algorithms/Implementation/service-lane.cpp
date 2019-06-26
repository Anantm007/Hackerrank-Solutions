#include<iostream>

using namespace std;

void small(int ar[],int f,int l)
{
    int i,min;
    
    min=ar[f];
    
    for(i=f;i<l;i++)
    {
        if(min>ar[i])
            min=ar[i];
    }
    
    cout<<min<<endl;
}

int main()
{
    int i,ar[100000],n,t,f,s;
    
    cin>>n;
    cin>>t;
    
    for(i=0;i<n;i++)
    {
      cin>>ar[i];  
    }
    
    for(i=0;i<t;i++)
    {
        cin>>f>>s;
        small(ar,f,s);
    }
    
    return 0;
}

