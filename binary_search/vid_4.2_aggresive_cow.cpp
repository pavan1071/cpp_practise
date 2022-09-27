
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int no_stalls , no_cows ;
vector<int> stall_po; 

bool istrue(int d)
{
    int  last_po = -1;
    int no_cows_po = no_cows;
    for(int i = 0;i<no_stalls;i++)
    { 
        if(stall_po[i] - last_po >= d ||last_po == -1 )
        {
            no_cows_po-- ;
            last_po = stall_po[i] ;
        }
        if(no_cows_po==0)
        break ;
    }
    return no_cows_po==0 ;
}

int main()
{
    cin>>no_stalls>>no_cows;
    for(int i=0;i<no_stalls;i++)
    {
        int y ;
        cin>>y ;
        stall_po.push_back(y) ;
    }
    sort(stall_po.begin(),stall_po.end()) ;
    int lo = 0  , hi = 1e9 ;
    while((hi - lo) > 1)
    {
        int mid = (hi+lo)/2  ;
        if(istrue(mid))
        lo = mid ;
        else
        hi = mid - 1 ;
    }
    if(istrue(hi))
    cout<<hi<<endl  ;
    else
    cout<<lo<<endl ;
    return 0 ;
}