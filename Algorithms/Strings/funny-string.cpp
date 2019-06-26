#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i,j;
    string s,t;
    int ar1[10000],ar2[10000];
    int k=0,l=0;
    int o;
    int f=0;
    
    cin>>o;
    
    for(int u=0;u<o;u++)
   {
        f=0;
    
    cin>>s;
    
    t=s;
    reverse(t.begin(),t.end());
    
    for(i=1;s[i]!='\0';i++)
        ar1[k++]=s[i]-s[i-1];
    
    for(i=1;t[i]!='\0';i++)
        ar2[k++]=t[i]-t[i-1];
    
    for(i=0;i<k;i++)
    {
        
        if(ar1[i]!=ar2[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"Not Funny"<<endl;
        
        else
    cout<<"Funny"<<endl;
        
    }
        
    
    
    return 0;
        
        
}
