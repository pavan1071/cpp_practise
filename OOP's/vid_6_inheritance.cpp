#include<iostream>
using namespace std ;

class shape
{
    protected :
    int length ;
    int breadth ;
    public :
    void getlen(int t)
    {
        length = t; 
    }
    void getbre(int t)
    {
        breadth = t; 
    }
};

class rectangle : public shape
{
public:
void area()
{
    cout<<length*breadth<<endl ;
}
};

int main()
{
    rectangle r1 ;
    r1.getlen(3);
    r1.getbre(8) ;
    r1.area() ;
    return 0 ;
}