#include<iostream>
#include<string>

using namespace std ;

int main()
{
    string k = "sjdfjkew" ;
    int l = 0 , r = k.length() - 1 ;
                while( l < r)
                    swap(k[l++],k[r--]) ;
                    cout<<k<<endl ;
}