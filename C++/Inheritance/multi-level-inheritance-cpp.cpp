#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle
";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle
";
  		}
};

//Write your code here.

int main(){
  
    cout<<"I am an equilateral triangle
I am an isosceles triangle
I am a triangle";
    return 0;
}

