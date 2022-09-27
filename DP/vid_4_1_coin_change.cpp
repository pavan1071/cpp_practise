#include<bits/stdc++.h>
using namespace std ;

int dp[10010] ;

int fun(vector<int> &coins , int amount)
{
    if(amount == 0) return 0 ;
    if(dp[amount] != -1) return dp[amount] ;
    int ans = INT_MAX ;
    for(auto coin : coins)
    {
        if(amount - coin >=0)
        ans = min( 0LL + ans , 1LL + fun(coins , amount - coin)) ;
    }
    return dp[amount] = ans ;
}
int coinChange(vector<int>& coins, int amount) 
{
    int y = fun(coins,amount) ;
return (y==INT_MAX) ? -1 : y ;
}
int main()
{
    memset(dp,-1,sizeof(dp)) ;
    int n , amount;
    cin>>n>>amount ;
    vector<int> coins ,dp ;
    for(int i=0;i<n;i++)
    { 
        int t ;cin>>t ;
        coins.push_back(t) ;
    }
    cout<<coinChange(coins,amount)<<endl ;
    return 0 ;
}