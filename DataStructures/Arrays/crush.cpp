#include<bits/stdc++.h>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
    long *a=new long int[N+1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        
        if((q+1)<=N) 
        a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) 
       max=x;
    }

    cout<<max;

    return 0;
}

