#include<iostream>
using namespace std ;

class animal
{
public:
void sound()
{
    cout<<"animal sound"<<endl ;
}
};

class dog : public animal
{
public:
void sound()//over rides the function present in the base class
{
    cout<<"bark bark"<<endl ;
}
};

class cat : public animal
{
public:
void sound()
{
    cout<<"meow meow"<<endl ;
    animal::sound() ;//to call the over written function use this
}
};

int main()
{
    dog d ;
    d.sound() ;
    cat c ;
    c.sound() ;
    return 0 ;
}