/*
using this we can solve
a + b = ( a xor b ) + 2(a&b) ;
link:https://codeforces.com/contest/1699/problem/A ;

(a⊕b)+(b⊕c)+(a⊕c)=n

sigma((a+b) - 2(a&b)) = n ;
sigma(a) - sigma(a&b) = n/2 ;
so n should even to exist ;
and a b c can be n/2 , n/2 , 0 which satisfies the given condition 
*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n;
    if(n&1)
    {
        cout<<-1<<endl ;
        return 0 ;
    }
    cout<<n/2<<" "<<n/2<<" "<<0<<endl ;
}