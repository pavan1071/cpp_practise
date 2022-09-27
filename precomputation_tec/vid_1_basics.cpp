/* given q queries , give their factorial */

#include<bits/stdc++.h>
using namespace std ;

const int N = 1e2 ;
int fact[N] ;

int main()
{
    fact[0] = fact[1] = 1  ;
    for(int i=2;i<N;i++)
    {
        fact[i] = fact[i-1] * i ;
    }
    int q ;
    cin>>q ;
    while(q--)
    {
        int x ;
        cin>>x;
        cout<<fact[x]<<endl ;
    }
    
/* Given q queries , and an array return the count of the query
we create hash array and precompute the count  */

int hsh[N] ;// declare it globally then it automatically initializes to 0 and max size can be around 1e7 ;
for(int i=0;i<n;i++)
{
    hsh[array[i]]++ ;
}
while(q--)
{
    int x1 ;
    cin>>x1;
    cout<<hsh[x1]<<endl ;
}


return 0 ;
}