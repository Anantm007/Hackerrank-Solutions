#include<iostream>

using namespace std;

int main()
{
    int i,j,tot;
    string a;
    string p="hackerrank";

    cin>>tot;

    for(int u=0;u<tot;u++)
    {
        cin>>a;
        int k=0;

        int len;

        for(len=0;a[len]!='\0';len++);

        int f=0;

        for(i=0;i<len;i++)
        {
            if(a[i]==p[k])
            k++;
        }

        if (k==10)
        cout<<"YES"<<endl;

        else
        cout<<"NO"<<endl;


    }
}

