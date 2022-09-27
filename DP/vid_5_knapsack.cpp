#include<bits/stdc++.h>

using namespace std ;
int wt[105] , val[105] ;
long long dp[105][100005] ;

long long fun(int ind , int weight_left)
{
    if(weight_left == 0) return 0 ;
    if(ind < 0) return 0 ;
    if(dp[ind][weight_left] != -1) return dp[ind][weight_left] ;

    long long ans = fun(ind - 1 , weight_left) ;
    if(weight_left - wt[ind] >= 0)
    ans = max(ans , fun(ind - 1 , weight_left - wt[ind]) + val[ind]) ;

    return dp[ind][weight_left] = ans ;
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
    cout<<fun(n-1 , w) <<endl;
    return 0 ;
}
