#include<iostream>

using namespace std;

int main()
{
    int i,j,n,stud,stud1[10000],min;
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        int y=0;
        cin>>stud>>min;
        
        for(j=0;j<stud;j++)
           cin>>stud1[j];
        
        for(j=0;j<stud;j++)
        {
            if(stud1[j]<=0)
                y++;
        }
        
        
        if(y<min)
            cout<<"YES"<<endl;
        
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
