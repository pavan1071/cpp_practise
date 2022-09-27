#include<bits/stdc++.h>

using namespace std ;
int dp[310][5010] ;

int fun1(int index , int amount , vector<int> &coins )
{   
    if(amount == 0 ) return 1;
    if(index < 0 ) return 0 ;
    if(dp[index][amount] != -1) return dp[index][amount] ;
    
    int ways = 0 ;
    for(int coin_amount = 0 ;coin_amount <= amount ;coin_amount += coins[index])
    {
        ways += fun1(index - 1 , amount - coin_amount , coins) ;
    }
    return dp[index][amount] = ways ;
}

int main()
{
    memset(dp,-1,sizeof(dp)) ;
    int n , amount;
    cin>>n>>amount ;
    vector<int> coins ,dp ;
    for(int i=0;i<n;i++)
    { 
        int t ;
        cin>>t ;
        coins.push_back(t) ;
    }
    cout<<fun1(n-1,amount,coins)<<endl ;
    return 0 ;
}