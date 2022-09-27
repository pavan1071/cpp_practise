/*setw manipulator*/
#include<iostream>
#include<iomanip>
using namespace std ;

int islower(char s)
{
    if(s>96 && s<127)
    return static_cast<int>(s) ;
    else
    return 0 ;
}
int main ()
{
    
    cout <<setfill('.')<<setw(5)<<setiosflags(ios::left) <<"four\n";
    cout <<setw(5)<<"fou\n" ;
    cout <<setw(5)<<"fo\n" ;
    cout <<setw(5)<<"f\n" ;
    cout <<"\xB2\n" ;
    cout <<"\a\n" ;
    cout <<"\b\n" ;
    char c ;
    cin>>c;
    cout<<islower(c) ;
    cout<<static_cast<int>(c) ;
    cout<<"give fraction \n" ;
    int a , b;
    char t ;
    cin>>a>>t>>b ;
    cout<<a+b ;
    return 0 ;
}