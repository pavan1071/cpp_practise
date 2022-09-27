#include<iostream>
using namespace std ;

template <typename T>

class stack // different data types being used here
{
    private :
    T name ;
    public :
    void display()
    {
        cout<<name<<endl ;
    }
    void getdata()
    {
        cin>>name ;
    }

};

int main()
{
    stack<int> n ;// int data type is used here
    n.getdata() ;
    n.display() ;
    stack<string> n1;// stack data type is used here
    n1.getdata() ;
    n1.display() ;
    return 0 ;
}