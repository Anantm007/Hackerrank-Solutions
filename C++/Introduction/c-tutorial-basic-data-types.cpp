#include <iostream>
#include <iomanip>>
using namespace std;

int main() {
    int a;
    char b;
    long c;
    float d;
    double e;
    
    cin>>a;
    cin>>c;
    cin>>b;
    cin>>d;
    cin>>e;
    
    cout<<a<<endl<<c<<endl<<b<<endl<<fixed<<setprecision(3)<<d<<endl<<setprecision(5)<<e;
    return 0;
}
