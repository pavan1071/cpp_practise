/*
x^x = 0 ;
x^0 = x ;
imp properties

swap x , y 
x = x ^ y ;
y = y ^ x ;(y ^ (x ^ y)) ==> x
x = y ^ x ;(x ^ (x ^ y)) ==> y 

given array a of n integers 
all numbers are even count expect one 
give that number in O(N) time complex and O(1) space 

stl and hash takes O(N) space but not O(1)
so use xor for O(1) space complexity

odd = even ^ odd ;
even = odd ^ odd ; //imp

*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a=1 , b=4 ;
    a = a ^ b ;
    b = a^b ;
    a = a^b ;
    cout<<a<<b <<endl ;
    int arr[5] = {1,2,2,4,4} ;
    int ans = 0 ;
    for(auto a:arr)
    ans ^= a; 
cout<<ans; 
}