/*
if(b <= 1e18) use this
ETF - Euler Totient Function - says phi(n) =  n*pro[(1 - (1/p)]) p - all prime factors
phi(n) - no.of co-primes which are less than n ; phi(prime number) is (n-1)
Euler's theorem - (a^b)%m = ((a)^(b%phi(m)))%m ;

que link : https://leetcode.com/problems/super-pow/description/
*/

#include<bits/stdc++.h>
using namespace std ;
const int M = 1e9+7 ;
int binexpite(int a, int b,int M)
{
    int res= 1 ;
    while(b>0)
    {
        if(b&1)
        res = (res*1LL*a)%M ;

        a=(a*1LL*a)%M ;
        b = b>>1 ;
    }
    return res ;
}

int main()
{
    int a, b , c ;
    cin>>a>>b>>c;
    cout<<binexpite(a,binexpite(b,c,M-1),M) ;//m is prime so m-1
    return 0 ;
}