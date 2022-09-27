/* given an array a intialised with all 0 
and q queries with l , r , k where l and r indecies and k should be added to indecies present between l , r */
/* soln : this can be done by using adding k to l index and subtracting k from  r+1 
because if we applyprefix to this array we get the required array */

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin>>n ;
    int a[n] ;
    for(int i = 0 ;i<n;i++)
    {
        a[i] = 0 ;
    }
    int q ;
    cin>>q ;
    while(q--)
    {
        int l , r , k ;
        cin>>l>>r>>k ;
        a[l] += k ;
        a[r+1] -= k ;
    }
    int hsh[n] ;
    hsh[0] = a[0] ;
    int mx =0 ;
    for(int i=1;i<n;i++)
    {
        hsh[i] = hsh[i-1] + a[i] ;
        mx = max(mx,hsh[i]) ;
    }
    cout<<mx<<endl ;
    return 0 ;
}