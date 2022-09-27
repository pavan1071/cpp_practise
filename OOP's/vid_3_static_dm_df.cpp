#include<iostream>
using namespace std ;

class myclass
{
    public :
    int s ;
    static int count ;
    myclass()
    {
        count = count+1 ;//we can use static them to keep count of no.of objects created 
    }
    static void getcount()//can access only static data members and data functions and any other outside functions but not data members from this class
    {
        cout<<count<<endl ;
    }
};

//initialization of static member
int myclass::count= 0;

int main()
{
    myclass::getcount() ;//this function can be use with out creating an object 
    myclass o1 ;
    cout<<o1.count<<endl ;
    cout<<myclass::count<<endl;
    myclass o2 ;
    cout<<o2.count<<endl ;
    o2.getcount();
    cout<<myclass::count<<endl;
    return 0 ;
}