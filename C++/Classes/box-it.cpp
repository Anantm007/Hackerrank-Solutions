class Box
{
       
    public:
    int l,b,h;
    Box()
    {
        l=b=h=0;
    }
    
    Box(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    
    Box(const Box&B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    
    int getLength()
    {
        return l;
    }
    
    int getBreadth()
    {
        return b;
    }
    
    int getHeight()
    {
        return h;
    }
    
    long long CalculateVolume()
    {
        return l*b*h;
    }
    
    friend ostream& operator<<(ostream &os,const Box& B);
    
    friend bool operator<(const Box&A,const Box& B);
    
};

ostream& operator<<(ostream &os,const Box& B)
{
        os<<B.l<<" "<<B.b<<" "<<B.h;
        return os;
    }

 bool operator<(const Box&A,const Box& B)
 {
     if(A.l<B.l ||(A.b<B.b && A.l==B.l) || (A.h<B.h && A.l==B.l && A.b==B.b))
         return true;
     
     else
         return false;
 }

