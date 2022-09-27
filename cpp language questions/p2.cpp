#include<iostream>
#include<string>
using namespace std ;

class employee
{
    string name , address ;
    int year_of_joining , salary , hours ;
    public :
     void em (string n , string add , int y , int sal)
    {
        name = n ;
        address = add ;
        year_of_joining = y ;
        salary = sal ;
    }
    void display()
    {
        cout<<name<<"   "<<year_of_joining<<"  "<<salary<<"  "<<address <<endl;
    }
    void get_info()
    {
        cin>>salary>>hours ;
    }
    void addsal(){
        if(salary<500)
        salary=salary+10;
    }
    void addwork()
    {
        if(hours > 6)
        salary = salary + 5;

        cout<<salary ;
    }
};
int main()
{
    employee e[3] , a[2];
    for(int i=0;i<3;i++)
    {
        e[i].em("as" , "add" , 2003 , 888  ) ;
    }
    cout <<"Name   year of joining   salary   address "<<endl;
    for(int i=0;i<3;i++)
    {
        e[i].display() ;
    }
    a[0].get_info();
    a[0].addsal();
    a[0].addwork();
    a[1].get_info();
    a[1].addsal();
    a[1].addwork();

    return 0 ;
}