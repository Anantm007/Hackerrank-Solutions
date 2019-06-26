class Rectangle
{
public:
    int b,w;
    void read_input()
    {
        cin>>w>>b;
    }
    
    void display()
    {
        cout<<w<<" "<<b;
    }
};

class RectangleArea:public Rectangle
{
public:
void display()
{
cout<<endl<<w*b;
}

};

