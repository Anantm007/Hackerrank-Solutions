#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,f=0;
    string s;
    
    cin>>s;
    
    transform(s.begin(),s.end(),s.begin(),::tolower);
        
        for(i=97;i<=122;i++)
        {
            f=0;
            
            for(j=0;s[j]!='\0';j++)
            {
                if(s[j]==i)
                {
                    f++;
                    break;
                }
            }
            
            if(f==0)
            {
                cout<<"not pangram";
                 return 0;
            }
            
        }
    
    cout<<"pangram";
    
    return 0;
}
