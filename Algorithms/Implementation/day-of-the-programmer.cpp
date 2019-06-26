#include<iostream>

using namespace std;

int main()
{
    int yr,f=0;
    
    cin>>yr;
    
   /* if(n%4==0)
    {
        f=1;
        
    }
    
        if(n%100==0)
        {
            if(n%400!=0)
                    
            f=0;
    }
    */
    
    
    
    if((yr%4==0) && (yr%100!=0))
    {
        f=1;
    }
    else if((yr%100==0) && (yr%400==0))
    {
        f=1;
    }
    else if(yr%400==0)
    {
        f=1;
    }
    else
    {
        f=0;
    }
    
    
     if(f==0)
        cout<<"13.09."<<yr;
    
    else
        cout<<"12.09."<<yr;
   
    
    return 0;
}
