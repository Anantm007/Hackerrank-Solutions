class Student
{
    int s[5];
    
    public:
    void input()
    {
        for(int i=0;i<5;i++)
        cin>>s[i];
    }
    
    int calculateTotalScore()
    {
        return (s[0]+s[1]+s[2]+s[3]+s[4]);
    }
};
