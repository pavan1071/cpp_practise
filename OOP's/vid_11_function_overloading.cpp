#include<iostream>
using namespace std ;

int add(int a )
{
    cout<<"Function 1 is called :"<<endl ;
    return a+5 ;
}


int add(int a, int b)
{
    cout<<"Function 2 is called :"<<endl ;
    return a+b ;
}

int add(int a ,int b , int c)
{
    cout<<"Function 3 is called :"<<endl ;
    return a+b+c;
}

void add(double a ,double b)
{
    cout<<"Function 4 is called :"<<endl ;
  //  return a+b ;   
}

int main()
{
    cout<<add(9)<<endl ;
    cout<<add(4,5)<<endl ;
    cout<<add(4,5,6)<<endl ;
   // cout<<
   add(5.7,6.9);
   //<<endl ;
    return 0 ;
}