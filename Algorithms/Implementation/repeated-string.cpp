#include<iostream>

using namespace std;

int main()
{
    string s,t="";
    int i,j=0;
    
    long l;

    cin>>s;
    cin>>l;

    for(i=0;s[i]!='\0';i++);

    for(i=0;i<l;i++)
    {
        t[i]=s[j++];

        if(j==l-1)
        j=0;
    }

    int ans=0;

    for(i=0;i<l;i++)
    {
        if(t[i]=='a')
        ans++;
    }

    cout<<ans;

    return 0;



}
