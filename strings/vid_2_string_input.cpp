#include<iostream>
#include<string>
using namespace std ;
//***** INPUT FUNCTIONS *****//
//" " --> one string and ' ' --> one char
int main()
{
    string str ;
    getline(cin,str) ;// to store a stream of characters as entered by the user in the object memory.
    //cin.getline(str,length); to take up to that length string as input.
    cout<<str<<endl ;
    str.push_back('d');//to input a character at the end of the string.
    cout<<str<<endl;
    str.pop_back();// is used to delete the last character from the string. 
    cout<<str<<endl ;
    cout<<str.length()<<endl;//finds the length of the string
    
    for(auto r = str.begin() ; r != str.end() ;r++)//normal iterator
    cout<<*r<<" ";
    cout<<endl ;
    for(auto r = str.rbegin() ; r != str.rend() ;r++)// reverse iterator 
    cout<<*r<<" ";
    cout<<endl ;
    string str1  = "this is you" ;
    cout<<"before swapping : \n" ;
    cout<<"str1 : "<<str1<<endl ;
    cout<<"str : "<<str<<endl ;
    str1.swap(str) ;// to swap both strings
    cout<<"after swapping : \n" ;
    cout<<"str1 : "<<str1<<endl ;
    cout<<"str : "<<str<<endl ;
return 0 ;
}
//str.substr(pos , len) ; it has so many appilications 