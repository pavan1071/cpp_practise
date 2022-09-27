#include<iostream>
using namespace std ;

class ComplexNumber
{
private:
float real_part ;
float imaginary_part ;

public:
ComplexNumber()
{
    real_part = 0; 
    imaginary_part = 0 ;
}
ComplexNumber(float r , float i)
{
    real_part = r; 
    imaginary_part = i ;
}
void display()
{
    cout<<real_part<<" + "<<imaginary_part<<"i"<<endl ;
}

float getreal()
{
    return real_part ;
}
float getima()
{
    return imaginary_part ;
}
};
ComplexNumber add(ComplexNumber c1 , ComplexNumber c2)
{
float r = c1.getreal() + c2.getreal() ;
float i = c2.getima() + c1.getima() ;
ComplexNumber c3(r,i) ;
return c3 ;
}

int main()
{
    ComplexNumber c1(9,8) ,c2(4,5) ,c3  ;
    c1.display();
    c2.display() ;
    c3 = add(c1,c2) ;
    c3.display() ;
    //pointer 
    ComplexNumber* ptr;
    ptr = &c3 ;
    ptr->display() ;
    
return  0 ;
}