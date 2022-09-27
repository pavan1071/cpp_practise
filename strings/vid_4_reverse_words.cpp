#include<iostream>
#include<string>

using namespace std ;

 string reverseWords(string s) {
        string str = "" , k = "";
        for(int t = s.length()-1;t>=0;t--)
        {
            if(s[t]!=' ' )
                k += s[t] ;
            if( s[t] == ' ' && k != "")
            {
                int l = 0 , r = k.length() - 1 ;
                while( l < r)
                    swap(k[l++],k[r--]) ;
                str =str + k + " " ;
                k="" ;
            }   
        }
         if( k != "")
            {
                int l = 0 , r = k.length() - 1 ;
                while( l < r)
                    swap(k[l++],k[r--]) ;
                str =str + k ;
                str = str + " " ;
                k="" ;
            }   
        str.pop_back() ;
        return str ;
    }

string reverseinwords(string s) {
        string str = "" , k = "";
        for(int t = 0;t<s.length() ;t++)
        {
            if(s[t]!=' ' )
                k += s[t] ;
            if( s[t] == ' ' && k != "")
            {
                int l = 0 , r = k.length() - 1 ;
                while( l < r)
                    swap(k[l++],k[r--]) ;
                str =str + k + " " ;
                k="" ;
            }   
        }
         if( k != "")
            {
                int l = 0 , r = k.length() - 1 ;
                while( l < r)
                    swap(k[l++],k[r--]) ;
                str =str + k ;
                str = str + " " ;
                k="" ;
            }   
        str.pop_back() ;
        return str ;
    }

int main()
{
string str ;
getline(cin,str);
str = reverseWords(str) ;
cout<<str <<endl ;
str = reverseinwords(str) ;
cout<<str <<endl ;
return 0 ;
}