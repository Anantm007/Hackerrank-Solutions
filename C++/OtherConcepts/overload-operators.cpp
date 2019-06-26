
Complex operator +(Complex const &x,Complex const&y)
{
    Complex p;
    p.a=x.a + y.a;
    p.b=x.b + y.b;
    
    return p;
    
}

ostream& operator <<(ostream &os,Complex z)
{
    os<<z.a<<"+i"<<z.b;
    return os;
}
