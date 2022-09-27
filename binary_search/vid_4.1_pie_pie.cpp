#include<iostream>
#include<vector>

using namespace std ;

vector<int> v_radius ;
int f ;

bool istrue(double volume)
{
    int c_pieces = 0 ;
    for(auto y : v_radius)
    {
        if((3.141592653589793238*y*y) >= volume)
        c_pieces += (int)((3.141592653589793238*y*y)/volume) ;
        if(c_pieces > f)
        {
            break ;
        }
    }
    
    return c_pieces>=f+1 ;
}


int main()
{
    int n  ;
    cin>>n>>f ;
    for(int i=0;i<n;i++)
    {
        int a ;
        cin>>a ;
        v_radius.push_back(a) ;
    }
    double lo = 0 , hi=1e9 ;
    while((hi - lo)  > 0.000001)
    {
        double mid = (hi+lo)/2 ;
        if(istrue(mid))
        {
            lo = mid ;
        }
        else 
        hi = mid - 1 ;
    }
    if(istrue(hi))
    cout<<hi<<endl ;
    else
    cout<<lo<<endl ;
    return 0 ;
}