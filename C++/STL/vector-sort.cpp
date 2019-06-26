#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> ar;
    int i;

    cin>>n;

    for(i=0;i<n;i++)
    {
        int t;
        cin>>t;
        ar.push_back(t);
    }

    sort(ar.begin(),ar.end());

    for(i=0;i<n;i++)
    cout<<ar[i]<<" ";

    return 0;

}

