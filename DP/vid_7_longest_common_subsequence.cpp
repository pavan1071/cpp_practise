#include<bits/stdc++.h>

using namespace std ;

int dp[1005][1005] ;
int fun(int i,int j,string &str1 , string &str2)
{
    if(i<0 || j<0) return 0 ;
    if(dp[i][j] != -1) return dp[i][j] ;
    int ans = fun(i-1,j,str1,str2) ;
    ans = max(ans,fun(i,j-1,str1,str2)) ;
    ans = max(ans,fun(i-1,j-1,str1,str2)+(str1[i]==str2[j])) ;

    return dp[i][j] = ans ;
}

int longestCommonSubsequence(string text1, string text2) {
    memset(dp,-1,sizeof(dp)) ;
        return fun(text1.length() - 1,text2.length()-1,text1 ,text2) ;
    }

int main()
{
    string s1 , s2;
    cin>>s1>>s2 ;
    cout<<longestCommonSubsequence(s1, s2) ;
    return 0 ;
}
// time complexity = O(N^2) two changing variables i,j ;