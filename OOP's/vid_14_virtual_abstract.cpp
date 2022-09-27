#include<iostream>
using namespace std ;

class mybase 
{
    public:
    void show()
    {
        cout<<"base class show function"<<endl ;
    }
    virtual void print()
    {
        cout<<"base class virtual print function"<<endl ;
    }
};

class myderived : public mybase
{
    public:
    void show()
    {
        cout<<"derived class show function"<<endl ;
    }
    void print()
    {
        cout<<"derived class virtual print function"<<endl ;
    }
};
int main()
{
    mybase *ptrb ;
    myderived dobj ;
    ptrb = &dobj ;
    ptrb->print() ;//virtual function , so derived class function is called
    ptrb->show() ;//not a virtual function so base class function is called
    return 0 ;
}