#include<bits/stdc++.h>
using namespace std ;
int wt[105] , val[105] ;
long long dp[105][100005] ;

long long fun(int ind , int value_left)
{
    if(value_left == 0) return 0 ;
    if(ind < 0) return 1e15 ;
    if(dp[ind][value_left] != -1) return dp[ind][value_left] ;
    long long ans = fun(ind-1 , value_left) ;
    if(value_left - val[ind] >= 0)
    ans = min( ans  , fun(ind - 1 , value_left - val[ind] ) + wt[ind]) ;

    return dp[ind][value_left] = ans ;
}

int main()
{
    memset(dp,-1,sizeof(dp)) ;
    int n , w ;
    cin>>n>>w ;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i]>>val[i] ;
    }
    int value_max = 1e05 ;
    for(int i=value_max;i >= 0;i--)
    {
        if(fun(n-1 , i) <= w)
        {
            cout<<i<<endl;
            break ;
        }
    }
}