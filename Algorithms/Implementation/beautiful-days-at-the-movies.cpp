#include<iostream>

using namespace std;

int rev(int x)
{
    int rem,num=0;
    
    while(x>0)
    {
        rem=x%10;
        num=num*10+rem;
        x=x/10;
    }
    
    return num;
}

int main()
{
    int i,f,l,d,b=0;
    
    cin>>f>>l>>d;
    
    for(i=f;i<=l;i++)
    {
        if((i-rev(i))%d==0)
            b++;
    }
    
    cout<<b;
    
    return 0;
    
}
