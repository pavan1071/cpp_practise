#include<iostream>
using namespace std; 

class base
{
public :
int val ;
};

class derived1 : virtual public base
{
    public:
    derived1()
    {
        val = 1; 
    }
    void getval()
    {
        cout<<val<<endl ;
    }
};

class derived2 : virtual public base
{
    public:
    derived2()
    {
        val = 2; 
    }
    void getval()
    {
        cout<<val<<endl ;
    }
};

class derived3 :virtual public derived1 ,  public derived2 // right most class val value will be inherited
{
public :
void getval ()
{
    cout<<val <<endl ;
}
};
// in derived3 class val becomes ambiguos because derived1,derived2 has defined val value so to unambiguos use :: or virtual for derived1 , derived2
// when deriving from base class

int main()
{
    derived3 d ;
    d.getval();
    return 0 ;
}