 #include<bits/stdc++.h>
 
 using namespace std;
 int main()
 {
 multimap<int,int> m;
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
    int a,b; cin>>a>>b;
    m.insert(make_pair(a+b,i));
    }   

   for(multimap<int,int >::iterator me=m.begin();me!=m.end();me++ )
    {cout<<me->second<<" ";
            }        
return 0;
 }
