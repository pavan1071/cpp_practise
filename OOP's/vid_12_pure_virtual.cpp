#include<iostream>
using namespace std ;

class shape
{
    public :
    virtual void getarea()=0;//pure virtual function , so this  class becomes abstract so we can't define object for this class 
};

class rectangle : public shape
{
  public :
  void getarea() // name should same as given pure virtual function 
  {
      int l , b; 
      cin>>l>>b ;
      cout<<"area : "<<l*b <<endl ;
  }
};

class circle : public shape
{
  public :
  void getarea() // name should same as given pure virtual function 
  {
      int r; 
      cin>>r ;
      cout<<"area : "<<3.14*r*r <<endl ;
  }
};

int main()
{
    circle c ;
    c.getarea() ;
    rectangle r ;
    r.getarea() ;
    return 0 ;
}