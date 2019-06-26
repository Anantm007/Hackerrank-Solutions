#include<iostream>

using namespace std;

int main()
{
    int i,j,n,tot;
    string a;

    cin>>tot;

    for(int y=0;y<tot;y++)
    {
        cin>>a;
        int count=0;
        int len;

        for(len=0;a[len]!='\0';len++);

        for(i=0;i<len-1;i++)
        {
            if(a[i]==a[i+1])
            count++;
        }

        cout<<count<<endl;
    }

    return 0;
}
