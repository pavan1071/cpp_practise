/*
for finding divisors - normal method O(n) ;
we can optimise it to O(sqrt(n)) but stop where i > sqrt(n) ;
n = p1^n1 * p2^n2 *p3^n3 ..... ;
no.of divisors = (n1+1)(n2+1).... ;
sum of divisors = (((p1^(n1+1))-1)/(p1-n1))*(for p2) ;
*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a ;
    cin>>a ;
    int ct =0 , sum =0 ;

    for(int i=1;i*i <= a;i++)
    {
        cout<<i<<" "<<a/i<<endl ;
        
        if(i==a/i)
        {
        sum = sum + a/i ;
        ct++ ;
        }
        sum = sum + i + a/i ;
        ct = ct+2 ;
    }
    cout<<ct<<" "<<sum <<endl;
    return 0 ;
}