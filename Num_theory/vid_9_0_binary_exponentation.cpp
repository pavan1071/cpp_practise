/* 
usually pow(2,3) return double and double doesn't contain accurate values
so we use fun to calcute but it takes O(N) time complexity
or we can use binary exponentation method to calculate pow(a,b)
it uses  divide and conquer approach and returns value in log(b) time 
*/

#include<bits/stdc++.h>
using namespace std ;
const int M = 1e9+7 ;

int binaryrecc(int a, int b)
{
    if(b == 0) return 1 ;
    int res=binaryrecc(a,b/2) ;
    if(b&1)
    return (a*((res*1LL*res)%M))%M ;
    else 
    return (res*1LL*res)%M ;
}

int binexpite(int a, int b)
{
    int res= 1 ;
    while(b>0)
    {
        if(b&1)
        res = (res*1LL*a)%M ;

        a=(a*1LL*a)%M ;
        b = b>>1 ;
    }
    return res ;
}


int main()
{
    int a , b ;
    cin>>a>>b;
    cout<<binaryrecc(a,b)<<endl<<pow(a,b)<<endl<<binexpite(a,b);

    return 0 ;
}