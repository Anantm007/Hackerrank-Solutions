#include<iostream>
using namespace std;
int main(){
long n,k,q;
cin>>n>>k>>q;
int a[200000];
for(int i=0;i<n;i++){
cin>>a[i];
}
int qu[600];
for(int i=0;i<q;i++){
cin>>qu[i];
}
int b[100000];
int x=0;
for(int i=n-1;i>=n-k;i--){
b[x]=a[i];
x++;
}
for(int i=n-k-1;i>=0;i--){
a[i+k]=a[i];
}
x=0;
for(int i=k-1;i>=0;i--){
a[i]=b[x];
x++;
}
for(int i=0;i<q;i++){
cout<<a[qu[i]]<<endl;
}
}

