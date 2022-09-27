/* Given array a of N integers , q queries with L and R 
give sum from index L to R (both included) */

#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3 ;
int hsh[N] ;

int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    cin>>a[0] ;
    hsh[0] = a[0] ;
    for(int i=1;i<n;i++)
    {
        cin>>a[i] ;
        hsh[i] = hsh[i-1] + a[i] ;//hsh[i][j] = hsh[i-1][j] + hsh[i][j-1] - hsh[i-1][j-1] + a[i][j] for 2d prefix sum
    }
    int q ;
    cin>>q ;
    while(q--)
    {
        int l , r ;
        cin>>l>>r ;
        cout<<hsh[r]-hsh[l-1] <<endl ;//will give two point top right(a,b) and bottom left(c,d) return the rec sum ;
                                      // (c,d) - (a-1 , d) - (c,b-1) + (a-1,b-1) in hsh 2d array 
    }

    return 0 ;
}