#include<iostream>
using namespace std ;

class A 
{
    public:
    void print()
    {cout<<"class A message"<<endl ;}
};

class B
{
    public:
    void print()
    {cout<<"class B message"<<endl ;}
};

class AB :  public A, public B
{
    public:
    void print()
    {
        A::print();
        B::print();
        
        cout<<"class AB message"<<endl ;
    }
};

int main()
{
    AB ab ;
    ab.print() ;//if there is no print function in derived class then ambiguity comes whether to print from class A or class B error arises
    //to print what we need use class_name::funtion_name ;
    return 0;
}