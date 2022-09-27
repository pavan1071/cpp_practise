/* array a with n integers will be given , 
and q queries with l and r  ; give gcd excluding l to r index values for the array 
soln we use forward prefix gcd and backward prefix array containing gcd 
0 indexing */

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i] ;
    }
    int fwd[n+1] , bkd[n+1] ;
    fwd[0] = a[0] ;
    bkd[n] = 0 ;
    for(int i=1;i<=n;i++)
    {
        fwd[i] = __gcd(fwd[i-1],a[i]) ;
        bkd[n-i] = __gcd(bkd[n-i+1],a[n-i]) ;
    }
    int q ;
    cin>>q ;
    while(q--)
    {
        int l , r ;
        cin>>l>>r ;
        if(l == 0)
        cout<<__gcd(0,bkd[r+1]) ;
        else
        cout<<__gcd(fwd[l-1],bkd[r+1]) ;
    }
    return 0 ;
}