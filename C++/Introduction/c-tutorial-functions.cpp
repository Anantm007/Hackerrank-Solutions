#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    int max,ar[4];
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    
    max=ar[0];
    
    for(int i=0;i<4;i++)
    {
        if(max<ar[i])
            max=ar[i];
    }
    
    return max;
    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
