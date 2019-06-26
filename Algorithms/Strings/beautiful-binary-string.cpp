#include<iostream>

using namespace std;

int main()
{
    int i,j;
    string s;
    int ans=0;
    int n;
    
    cin>>n;   
    cin>>s;
    
    
    for(i=0;i<n;i++)
    {
        if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
        {
            s[i+2]='1';
            ans++;
        }
    }
    
    cout<<ans;
    
    return 0;
}


