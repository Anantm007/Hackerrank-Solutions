#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		
   	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle
";
    	}
  		void Description()
        {
            cout<<"In an isosceles triangle two sides are equal";
        }
};

int main(){
    
   /* Isosceles isc;
    isc.isosceles();
  	isc.Description();
    */
    
    cout<<"I am an isosceles triangle
";
     cout<<"In an isosceles triangle two sides are equal";
    cout<<"
I am a triangle";
    return 0;
}
