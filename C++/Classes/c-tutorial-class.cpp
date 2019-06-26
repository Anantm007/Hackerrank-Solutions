#include <iostream>
#include <sstream>
#include<string.h>
using namespace std;

class Student
{
    string first_name,last_name;
    int age,standard;
    
    public:
    
    void set_age(int x)
    {
      age=x;  
    }
    
    void set_standard(int x)
    {
        standard=x;
    }
    
    void set_first_name(string s)
    {
        first_name=s;
    }
    
    void set_last_name(string s)
    {
        last_name=s;
    }
    
    int get_age()
    {
        return age;
    }
    
    int get_standard()
    {
        return standard;
    }
    
    string get_first_name()
    {
        string x=first_name;
        return x;
    }
    
    string get_last_name()
    {
        return last_name;
    }
    
    void to_string()
    {
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    }
    
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "
";
    cout << st.get_last_name() << ", " << st.get_first_name() << "
";
    cout << st.get_standard() << "
";
    cout << "
";
     st.to_string();
    
    return 0;
}
