#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<vector>
#define l 142857
 
int countFact(int n, int p)
{
    int k=0;
    while (n>0)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}
 
int pow(int a, int b, int MOD)
{
    int x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
 
 
int B(int n, int r, int MOD)
{
    int res = 1;
    vector<bool> isPrime(n+1,1);
    for (int i=2; i<=n; i++)
        if (isPrime[i])
        {
            for (int j=2*i; j<=n; j+=i)
                isPrime[j]=0;
            int k = countFact(n,i) - countFact(r,i) - countFact(n-r,i);  
            res = (res * pow(i, k, MOD)) % MOD;
        }
    return res;
}
 
int main()
{
    int t,i,n,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&r);
        int a,b,c,d,z;
        a=B(n,min(r,n-r),11);
        b=B(n,min(r,n-r),13);
        c=B(n,min(r,n-r),27);
        d=B(n,min(r,n-r),37);
        z=((a*103896)+(b*109890)+(c*137566)+(d*77220))%l;
        printf("%d
",z);
    }
    return 0;
}

