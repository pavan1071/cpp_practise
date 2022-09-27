#include<iostream>
using namespace std ;

class class1 
{
    friend class class2 ;//intializing friend class
    int x ;
    public :
    class1(int t)
    {
        x = t ;
    }
};

class class2
{
    public :
    void showdata (class1 obj)
    {
        cout<<obj.x<<endl ;//we can't access this but can accessed by defining this class as friend class in class1
    }
};

int main()
{
    class1 o(4) ;
    class2 i ;
    i.showdata(o) ;
    return 0 ;
}
