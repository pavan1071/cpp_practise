#include<iostream>
#include<string>

using namespace std ;

int main()
{
    //using stoi and to_string functions //
    string str = "123456" ;
    int in = stoi(str) ;// string to int 
    cout<<in<<endl ;
    str = to_string(in) ;// int to string 
    cout<<str.length()<<endl ;
    return 0 ;
}
// str.find( given string ) to find the given string in our string returns index 
// str.erase( string index , length) to erase the string , up to length 