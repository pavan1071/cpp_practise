#include<iostream>
#include<string>
using namespace std ;

class car //should be declared out side main function
{
private://access specifier to keep data protected / private , can't directly change them from out side can be accessed only from the inside the class
//data members or member variables
string company_name ;
string model_name ;
string fuel_type ;
float mileage ;
double price ;

public : //these can be accessed from outside 
//member function , used to change private variables 
//default constructor
car()//no return type , same name as class , called when we create a object//used to initialize data members
{
    cout<<"default constructor called"<<endl ;
    // company_name = "toyota" ;
}
//parameterized constructor 
car(string mname ,string ftype , float m , double p)
{
cout<<" parameterized constructor called"<<endl ;
model_name = mname ;
fuel_type = ftype ;
mileage = m ;
price = p ;
}
//copy constructor 
car (car&  obj)//reference to a object pointer only orelse it gonna be in endless loop;
{
cout<<" copy constructor called"<<endl ;
company_name = obj.company_name ;
model_name = obj.model_name ;
fuel_type = obj.fuel_type ;
mileage = obj.mileage ;
price = obj.price ;
}
void setData(string cname , string mname , string ftype , float mage , double p)//to set data
{
company_name = cname ;
model_name = mname ;
fuel_type = ftype ;
mileage = mage ;
price = p ;
}
void displayData ()//to display data
{
    cout<<"company name :"<<company_name<<endl ;
    cout<<"model name :"<<model_name <<endl ;
    cout<<"fuel type :"<<fuel_type <<endl ;
    cout<<"mileage :"<<mileage<<endl;
    cout<<"Price :"<<price <<endl ;
}

~car()//destructor 
{
    cout<<"destructor called"<<price<<endl ;
}

};

int main()
{
    car c1 ,c2("lkj","hjg",9,90876) , c3(c2); //like this we create object from the class / objects are variables of class type
    // c1.setData("namme","mname","petrol",13.4,768900) ;
    c1.displayData();//took default constructor
    c2.displayData();//took parameterised constructor 
    c3.displayData();
    return 0 ;
}
//Stack like destructors