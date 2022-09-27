#include<bits/stdc++.h>
using namespace std ;
double esp = 1e-6 ;

int main()
{
    double x , n ;
    cin>>x>>n ;
    double lo = 1 , hi = x , mid;
    while(hi - lo > esp)
    {
        mid = (lo+hi)/2 ;
        double g = pow(mid , n) ;
        if(g < x)
        lo = mid ;
        else
        hi = mid ;
    }
    cout<<hi<<" "<<lo<<" " <<mid<<endl ;
    return 0 ;
}