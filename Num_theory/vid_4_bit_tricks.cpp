/*
to check odd or even 
(n&1)=1 odd , =0 even ;(bit manipulation faster than modulo or div or mul)
odd num - last bit - 1 ;
even num - last bit - 0 ;

to mul or div by 2
(num << 2) to mul by 2
(num >> 2) to div by 2
(can be used in binary search)(for faster)

lower to upper and viceversa
5th bit is set for lowercase letters
5th bit is unset for uppercse letters
' ' is 2^5 (1<<5) ;(UL | ' ' )=>LL
'_' is ~(1<<5) ;(LL & '_' )=>UL

to clear all msb's up to ith bit 
ex:- 000011101 to 000000101 (up to 3rd bit)
to get this we should 'and' operation with 000000111 to get this (000001000/(1<<i)/ - 1)

to clear all lsb's up to ith bit
ex:- 00101101 to 00101000 (upto 2nd bit)
to do this we should do & operation with 11111000 <--> ~(00000111) <--> ~(00001000 - 1) <--> ~((i<<i) - 1)

to see if given num is pow of 2 or not 
n & (n-1) ==> 0 for power of 2 ;
00100 & 00011 so 0 for power of 2 ;

*/

#include<bits/stdc++.h>
using namespace std ;

void printbinary(int n)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((n>>i) & 1) ;
    }
    cout<<endl ;
}
int main()
{
    int n ;
    cin>>n ;
    printbinary(n);
    //trick1
    if(n&1)
    cout<<"odd"<<endl ;
    else
    cout<<"even"<<endl ;
    //trick2
    cout<<(n>>1)<<endl; 
    cout<<(n<<1)<<endl;
    //trick3
    char c = 'A' ;
    cout<<char(c | ' ')<<endl;
    char s = 'a' ;
    cout<<char(s & '_')<<endl ;
    //trick4 to clear msb
    int i ;
    cin>>i ;
    printbinary(n & ((1<<i)-1)) ;
    //trick5 to clear lsb
    printbinary(n & (~((1<<i)-1))) ;
    //trick for pow of 2
    (n&(n-1)) ? cout<<"not pow of 2":cout<<"pow of 2" ;

    return 0 ;
}