#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int i,j;
    int n,m;

    cin>>n;
    for(i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }

    int d;
    cin>>d;
    v.erase(v.begin()+d-1);
    int te=0;
    
        int s,e;
        cin>>s>>e;
        te=e-s;
        v.erase(v.begin()+s-1,v.begin()+e-1);

    cout<<n-te-1<<endl;
    for(i=0;i<n-te-1;i++)
    cout<<v[i]<<" ";

    return 0;
}

