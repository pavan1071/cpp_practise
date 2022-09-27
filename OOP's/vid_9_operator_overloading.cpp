/*
scope operator (::)
sizeof
member selector (.)
member pointer selector (*)
ternaray operator (?:)
for these operator overloading can't be used
*/
#include<iostream>
using namespace std ;

class complex
{
private :
int real , imaginary ;
public :
complex()
{
    real = 0;
    imaginary = 0 ;
}
complex(int r , int i)
{
    real = r ;
    imaginary = i ;
}

void display()
{
    cout<<real<<" + "<<imaginary<<"i"<<endl ;
}

complex operator +(complex c)//operator keyword and for binary operator
{
    complex temp(0,0) ;
    temp.real = real+c.real ;
    temp.imaginary = imaginary + c.imaginary ;
    return temp ;
}

void operator ++()//pre increment unary operator 
{
    ++real ;
    ++imaginary ;
}

void operator ++(int)//post increment unary operator /int should be added in ()
{
    real++ ;
    imaginary++ ;
}

complex operator --()
{
    complex temp ;
    temp.real = --real ;
    temp.imaginary = --imaginary ;
    return temp ;
}

complex operator --(int)
{
    complex temp ;
    temp.real = real-- ;
    temp.imaginary = imaginary-- ;
    return temp ;
}

};

int main()
{
    complex c1(1,2) , c2(3,4) ,c3(5,6) ;
    complex c4 ;
    c4 = c1+c2+c3 ;// in terms of function c4=c1.add(c2.add(c3))
    c4.display() ;
    //*************unary operator***************//
    c1.display() ;
    c1++ ;
    c4=--c1 ;
    c4.display() ;
    c1.display() ;
    c1++ ;
    c4=c1-- ;
    c4.display() ;
    c1.display() ;
    return 0 ;
}