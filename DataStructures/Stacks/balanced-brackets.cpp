#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[10000];
    int i,l;
    int t;

    cin>>t;

    a:
    while(t--)
    {
        cin>>s;

        l=strlen(s);


    for(i=0;i<l/2;i++)
    {
        if( (s[i]=='(' && s[l-i-1]!=')' ) || (s[i]=='[' && s[l-i-1]!=']' ) || (s[i]=='{' && s[l-i-1]!='}' ) )
        {
            cout<<"NO"<<endl;
            goto a;
        }

        if( s[i]==')' || s[i]==']' || s[i]=='}' )
        {
            cout<<"NO"<<endl;
            goto a;
        }
    }

    cout<<"YES"<<endl;
    }
    
    return 0;
}
