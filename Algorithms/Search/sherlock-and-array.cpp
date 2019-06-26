#include<iostream>

using namespace std;

int main()
{
    int t;
    int i,j,ar[1000],n;
    int s1,s2;

    cin>>t;

    while(t--)
    {
        s1=s2=0;

        cin>>n;

        for(i=0;i<n;i++)
        cin>>ar[i];

        int f=0;

        for(i=0;i<n;i++)
        {
            if(i==0)
            s1=0;

            if(i==n-1)
            s2=0;


            s1=s2=0;
            
            for(j=0;j<i;j++)
            s1+=ar[j];

            
            for(j=i+1;j<n;j++)
            s2+=ar[j];

             //cout<<"for "<<ar[i]<<" "<<s1<<","<<s2<<endl;
             if(s1==s2)
             {
                 f=1;
                cout<<"YES"<<endl;
                break;
             }
        }

           
           if(f==0)
             cout<<"NO"<<endl;
    }

    return 0;
}
