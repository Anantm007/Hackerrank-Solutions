#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        
        map <int,int> s;
        s.clear();
        while (m--) {
            string cmd;
            cin >> cmd;
            if (cmd=="UPDATE") {
                int x,y,z,w;
                cin >> x >> y >> z >> w;
                s[x*1000000+y*1000+z]=w;
            }
            else {
                int x1,y1,z1,x2,y2,z2;
                cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
                long sum=0;
                
                for (auto it=s.begin();it!=s.end();it++) {
                    int tx=(it->first)/1000000;
                    int ty=((it->first)-(tx*1000000))/1000;
                    int tz=(it->first)-(tx*1000000)-ty*1000;
                    if ((x1<=tx)&&(tx<=x2)&&
                        (y1<=ty)&&(ty<=y2)&&
                        (z1<=tz)&&(tz<=z2)) sum=sum+(it->second);
                }
                cout << sum << endl;
            }
        } // m ops
    } // t test case
    
    return 0;
}

