/*
signed - max - (2**31-1) 1 bit for sign
unsigned - max - (2**32-1)

(1<<n) gives 2^n ; left shift 1 - n places
*/


#include<bits/stdc++.h>
using namespace std ;

int main()
{
    cout<<INT_MAX<<endl;
    //int a = (1<<32) - 1 ;//over flow occured in (1<<32) because 1 is int only 31 bits , so can't be shifted 32 places left
    int a = (1LL<<31) - 1 ;
    unsigned int b=(1LL<<32) -1 ;
    cout<<a <<endl ;
    cout<<b<<endl ;
    return 0 ;
}