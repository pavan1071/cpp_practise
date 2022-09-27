#include<iostream>
#include<string>
#include<cmath>
using namespace std ;

class student 
{
    public :
    string  name ;
    int roll_no ;
    public : 
    void display()
    {
        cout<<name << roll_no ;
    }
};

class rectangle
{
    int length , breadth ;
    public :
    rectangle(int a , int b )
    {
       length = a ;
       breadth = b ;
    }

    
    void area()
    {
        cout<<length*breadth ;
    }
};

class triangle 
{
    public :
    int side1 ,side2,side3;
    public :
    triangle(int a,int b,int c)
    {
        side1=a;
        side2=b;
        side3=c;
    }
    triangle();
    void  area()
    {
        int s = (side1+side2+side3)/2;
        cout<<sqrt((s)*(s-side1)*(s-side2)*(s-side3))<<"is area of the triangle";
    }
    void parameter()
    {
        cout<<side1+side2+side3<<"is parameter of the triangle" ;
    }
};

class average 
{
    public : 
    void avg ()
    {
        int a , b , c ;
        cin>>a>>b>>c ;
        cout <<(a+b+c)/3 ;
    }
};

class complex
{
    int real1 , imag1,real2,imag2 ;
    public :
    void getc()
    {
       cout<<"real and imaginary part of complex no-1"<<endl;
       cin>>real1>>imag1 ;
       cout<<"real and imaginary part of complex no-2"<<endl;
       cin>>real2>>imag2 ;
    }
    void sum()
    {
       cout<<"real part"<<real1+real2<<"imaginary part"<<imag1+imag2 ;
    }
     void difference()
    {
       cout<<"real part"<<real1-real2<<"imaginary part"<<imag1-imag2 ;
    }
     void product()
    {
       cout<<"real part"<<(real1*real2)-(imag1*imag2)<<"imaginary part"<<(imag1*real2)+(real1*imag2) ;
    }
    
};

class volume
{
  public :
  int l,b,h;
  public:
  volume()
  {
      l=10;
      b=20;
      h=30;
  }
  void print()
  {
      printf("%d",l*b*h);
  }
};
int main ()
{
   student s1,s2;
   s1.name = "Pavan" ;
   s1.roll_no = 10612080 ;
   s2.name = "Kp" ;
   s2.roll_no = 7321 ;
   s1.display() ;
   s2.display();

   //triagle 
   triangle t(3,4,5) ;
   t.area();
   t.parameter();


   int  a , b ;
   cin>>a>>b ;
   //rectangle 
   rectangle  f(a,b);
   f.area();

   //average 
   average a1 ;
   a1.avg() ;

   //complex 
   complex c1 ;
   c1.getc();
   c1.sum();
   c1.difference() ;
   c1.product() ;

   volume v ;
   v.print();

   return 0 ;
}