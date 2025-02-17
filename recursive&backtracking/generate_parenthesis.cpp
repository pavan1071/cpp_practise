#include<bits/stdc++.h>

using namespace std ;

vector<string> g ;

void parenthe(string &s ,int open,int close)
{
    if(open == 0 && close == 0)
    {
        g.push_back(s) ;
        return ;
    }
    if(open > 0)
    {
        s.push_back('(') ;
        parenthe(s,open - 1,close) ;
        s.pop_back() ;
    }
    if(close > 0 && open < close)
    {
        s.push_back(')') ;
        parenthe(s,open ,close - 1) ;
        s.pop_back() ;
    }
}

vector<string> generateParenthesis(int n) 
{
    string s = "";
    parenthe(s,n,n) ;
    return g ;
}


int main()
{
    int n ;
    cin>>n ;
    string s = "";
    parenthe(s,n,n) ;
    for(auto t: g)
    cout<<t<<endl ;
    return 0 ;
}