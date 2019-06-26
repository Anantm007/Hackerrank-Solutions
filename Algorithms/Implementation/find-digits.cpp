#include<iostream>

using namespace std;

int main()
{
    int n,i,j,c=0;
    long d,t;
    long num;
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        c=0;
        
        cin>>num;
        t=num;
        
        while(num>0)
        {
            d=num%10;
            if(d!=0&&t%d==0)
                c++;
            num=num/10;
        }
        
        cout<<c<<endl;
    }
    
    return 0;
}
