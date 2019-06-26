#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size(), ans = 0;

    for (int len = 1; len <= n - 1; ++len) 
    {
      for (int i = 0; i < n - 1; ++i)
       {
        string sub = s.substr(i, len);
        sort(sub.begin(), sub.end());
        for (int j = i + 1; j < n; ++j)
         {
          string sub2 = s.substr(j, len);
          sort(sub2.begin(), sub2.end());
          if (sub == sub2)
            ans++;
        }
        string sub2 = s.substr(i + 1, len);
      }
    }
    cout << ans<<endl;

    }

    
    return 0;
}

