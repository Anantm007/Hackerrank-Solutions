#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
        int i,j,t,n,ar[10000];
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
            }
        }
    }
    
    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}

