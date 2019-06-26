#include<iostream>

using namespace std;

int main()
{
    int n,i;
    float p=0,neg=0,z=0;
    int ar[100];
    
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>ar[i];
       
    for(i=0;i<n;i++)
    {
        if(ar[i]>0)
            p++;
        
        else if(ar[i]<0)
            neg++;
        
        else
            z++;
    }
    
    cout<<p/n<<endl;
    cout<<neg/n<<endl;
    cout<<z/n;

    return 0;
}
