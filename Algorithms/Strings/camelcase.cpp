#include<iostream>

using namespace std;

int main()
{
    string s;
    int i,j=0;
    int ans=0;

    cin>>s;
    
    for(i=0;s[i]!='\0';i++)
    {
        
        if(s[i]>=65 && s[i]<=90)
        {
          ans++;            
            
        }
    }

    cout<<ans+1;
    
    return 0;
}
