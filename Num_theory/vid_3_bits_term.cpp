/*
msb - most significant bit - left most bit - nth bit
lsb - least significant bit - right most bit - 0th bit

set - 1 
unset - 0

how to check ith bit is set or not
take a number with only ith as set bit and do '&' operation if we get 0 it is unset else set ;
we will set only ith bit by - (1<<i) ;
the number before 2^n num contains all 1 in (n-1) places ;

tilda (~) inverts all  the bits ; set to unset and vice versa

to set ith bit do (num | (1<<i)) '|' operation with only ith bit set num 
to unset ith bit do (num & (~(1<<i))) & operation with only ith bit unset (can be done by applying ~ to  only ith bit set num)
to toggle(0to1 || 1to0) ith bit do (num ^ (1<<i)) ^(xor) operation with only ith bit set
to give ith bit (num &(1<<i))||((num>>i)&1);

to count no of set bits , just count while printing ;
*/

#include<bits/stdc++.h>
using namespace std ;

void printbinary(int n)
{
    // for(int i=31;i>=0;i--)
    // {
    //     cout<<(n & (1<<i)) ;//giving ith bit (for negative values not working)
    // }
    cout<<endl ;
    for(int i=31;i>=0;i--)
    {
        cout<<((n>>i) & 1) ;//giving ith bit(working for all)
    }
}

int main()
{
    int n ;
    cin>>n ;
    printbinary(n);
    // to unset ith bit
    printbinary(n & (~(1<<3))) ;
    // to set ith bit
    printbinary(n | (1<<3)) ;
    // to toggle ith bit 
    printbinary(n ^ (1<<3)) ;

    return 0 ;
}
