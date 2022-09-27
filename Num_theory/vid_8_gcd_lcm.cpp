/*
pro(a,b) = gcd(a,b)*lcm(a,b) ;

we can get simplied fraction by dividing numerator and denominator by gcd(numerator , denominator)
*/

#include<bits/stdc++.h>
using namespace std ;

int gcd(int a, int b)
{
    if(b==0) return a ;
    return gcd(b,a%b) ;
}
int main()
{
    int a,b ;
    cin>>a>>b;
    cout<<gcd(a,b)<<((a*b)/gcd(a,b)) ;//log(n) worst time complexity
    cout<<__gcd(a,b)<<endl ;//built in fun for gcd
 return 0 ;
}