#include <bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    char ch[20];
    int i,j;
    int hh,mm,ss;
    cin>>ch;
    
    int l=strlen(ch);
    
    char t[20];
    
    strcpy(t,ch);
    t[8]='\0';
    
    
    if(ch[8]=='P')
    {
            t[0]++;
            t[1]+=2;
               
        
    }
    
            
    
    
    cout<<t;
    
    return 0;
        
    
}
    
