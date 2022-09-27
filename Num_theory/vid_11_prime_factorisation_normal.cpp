/*
even for finding whether the given number is prime or we check up to sqrt(n) and minimize time complexity ;

prime factorisation :
observation least divisor of the given number is prime and we include this prime till it is not present in the num ;
even this also up to sqrt is enough ;
for O(sqrt(n)) time complexity ;

*/

#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int a ;
    cin>>a ;
    for(int i=2;i*i<=a;i++) 
    {
        while(a % i == 0)
        {
            cout<<i<<" " ;
            a /= i ;
        }
    }
    if(a > 1)
    cout<<a<<endl ;
    return 0 ;
}