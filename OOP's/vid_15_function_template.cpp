#include<iostream>
using namespace std ;

template <typename T>//template , typename keywords 
T add (T x , T y) // same like function instead of data type we use 'T' 
{
    return x+y ;
}

template <typename T , typename U>
T/*return type*/ add (T x , U y)
{
    return x*y ;
}

int main()
{
    cout<<add<int>(5,6)<<endl ;//<int> should be written
    cout<<add<float>(5.9f,6.3f)<<endl ;
    cout<<add<float>(5.9343,6.3253)<<endl ;
    //****************for two different data types***************************
    cout<<add<double , int>(5.9343,6)<<endl ;
    return 0 ;
}