#include<bits/stdc++.h>
using namespace std ;

unordered_map<string , string> mp ;

string fun(string &str )
{
    if(str.length()==1) 
    {
        if(str == "0") return "01" ;
        else if(str == "1") return "10" ;
    }
    if(mp.find(str) != mp.end()) return mp[str] ;
    string h1 , h2 ;
    for(int i=0;i<str.length() ; i++)
    {
        if(i < str.length() / 2)
        h1 += str[i] ;
        else
        h2 += str[i] ;
    }
    return mp[str] = fun(h1) + fun(h2) ;
}


int kthGrammar(int n, int k) 
{
    string s = "0" ;
        while(n>1)
        {
            string h = fun(s) ;
            s.swap(h) ;
            n-- ;
        }
    return s[k-1] - '0' ;
}

int main()
{
    int n , k;
    cin>>n>>k ;
    cout<<kthGrammar(n,k)<<endl ;
    // string s ;
    // cin>>s ;
    // cout<<fun(s)<<endl ;
    return 0 ;
}

/**
 * int solve(int n,int k)
    {
        int length = pow(2 , n-1) ;
        int mid = length / 2 ;
        if(n == 1 || k == 1)
            return 0 ;
        if(k <= mid)
            return solve(n-1 , k) ;
        else
            return ! solve(n-1 , k - mid) ;
    }

    int kthGrammar(int n, int k) 
    {
        return solve(n,k) ;
    }
 * 
 */