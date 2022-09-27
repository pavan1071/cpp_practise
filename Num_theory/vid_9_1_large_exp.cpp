/*
here in the previous code 
a<=1e9 , b<=1e9 , m<=1e9 
what if 
a <= 1e18 , b <= 1e18 , m<= 18 
in case of a we can take a%m ;
in case of m we will binary multiplication , instead of usual multiplication 
because if we do usually it gives more than 1e36 greater than long long ;
*/

#include<bits/stdc++.h>
using namespace std ;
const long long M = 1e18+7 ;


long long  binaryMul(long long  a,long long  b)
{
    long long res= 0 ;
    while(b>0)
    {
        if(b&1)
        res = (res+a)%M ;

        a=(a+a)%M ;
        b = b>>1 ;
    }
    return res ;
}

long long  binexpite(long long  a, long long  b)
{
    long long  res= 1 ;
    while(b>0)
    {
        if(b&1)
        res = binaryMul(res,a) ;

        a=binaryMul(a,a) ;
        b = b>>1 ;
    }
    return res ;
}


int main()
{
    int a , b ;
    cin>>a>>b;
    cout<<binexpite(a,b);
    return 0 ;
}