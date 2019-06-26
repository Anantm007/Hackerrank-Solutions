#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char t;
    string a,b;
    
    cin>>a;
    cin>>b;
    
    cout<<a.size()<<" "<<b.size();;
    
    string c=a+b;
    cout<<endl<<c;
    
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<endl;
    
    cout<<a<<" "<<b;
  
    return 0;
}
