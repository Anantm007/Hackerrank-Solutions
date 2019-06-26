#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    string s;
    cin >> s;
    
    int i;
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==',')
            cout<<endl;
        else
        cout<<s[i];
    }
    
    return 0;
}
