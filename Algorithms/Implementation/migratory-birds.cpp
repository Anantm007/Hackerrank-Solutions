#include<iostream>

using namespace std;

int main()
{
    int i,j,max=1,cur=1,n,ar[1000],ele;
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                cur++;
               
            }
        }
        if(cur>max)
            {
                max=cur;
                cur=0;
            ele=ar[i];
            }
    }
    
    cout<<ele;
    
    return 0;
}
