#include<iostream>

using namespace std ;

int digit_sum(int n)
{
if(n/10 == 0 ) return n%10 ;
return n%10 + digit_sum(n/10) ;
}

int sum(int a[] , int ind)
{
    if(ind == 0) return a[ind] ;
    return a[ind] + sum(a,ind-1) ;
}

int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=0;i<n;i++)
    cin>>a[i] ;
    cout<<sum(a,n-1)<<endl ;
    int j ;
    cin>>j ;
    cout<<digit_sum(j)<<endl ;
    return 0 ;
}