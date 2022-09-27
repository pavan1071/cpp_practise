/*
(a/b) % m = ((a%m)*(multiplicative inverse of (b)%m))%m ;
inverse can be find in 2 ways 
mmi exists only when b , m are co-primes 

O(N) time :
for( i -> 1 to m-1 )
we check (b*i)%m == 1 then i is mmi of b ;

O(log(N))time :(by using fermat principle) only if m is prime
if m is prime then 
(b^(m-2))%m is mmi of b ;
b^(m-1) can be found in log(N) time ;

fermat principle :
if m is prime and b is not a multiple of m ;
then b^(m-1) = 1 mod m ;
multiply by b inverse and send mod to opposite side then we get 
b inverse ;
*/
// que 
/*
there are N children and k toffes . k < N
count the no of ways to distribute toffee among N students such that each student get 1 toffee only ;
nCk , %M , M = 10^9 + 7 ;
N < 10^6 , k<N<10^6
Q < 10^5 
nCk = n! / ((n-k)! * k!) ;
*/

#include<bits/stdc++.h>
using namespace std ;

const int N = 1e6+7 ;
int fact[N] ;
int M = 1e9 + 7 ;

int binexp(int a,int b,int m)
{
    int ans = 1 ;
    while(b>0)
    {
        if(b&1)
        ans = (ans * 1LL * a) % M ;

        a = (a*a) % M ;
        b = b>>1 ;
    }
    return ans ;
}

int main() 
{
    int n  ;
    cin>>n ;
    fact[0] = 1 ;
    for(int i=1;i<N;i++)
    {
        fact[i] = (fact[i-1] * i *1LL) % M;
    }
    int q ;
    cin>>q ;
    while(q--)
    {
        int x ;
        cin>>x ;
        int nume = fact[n] ;
        int deno = (fact[n-x] *1LL* fact[x])%M ;
        cout<<((nume%M)*(binexp(deno,M-2,M)))%M ;
    }
   return 0 ;
}