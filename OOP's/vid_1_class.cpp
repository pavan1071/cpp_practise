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

};

int main()
{
    car c1 ; //like this we create object from the class / objects are variables of class type
    c1.setData("namme","mname","petrol",13.4,768900) ;
    c1.displayData();
    return 0 ;
}

