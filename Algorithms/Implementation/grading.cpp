#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i,j;
    int ar[1000];
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
    
    for(i=0;i<n;i++)
    {
        if(ar[i]>=38)
        {
            if((ar[i]+1)%5==0)
                ar[i]++;
            
            else if((ar[i]+2)%5==0)
                ar[i]+=2;
        }
    }
    
    for(i=0;i<n;i++)
        cout<<ar[i]<<"
";
    return 0;
}
