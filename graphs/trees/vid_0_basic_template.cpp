#include<bits/stdc++.h>
using namespace std ;

// for unweighted graph
const int N = 1e3 ;
vector<int> gra[N] ;

// For weighted graph 
const int N = 1e3 ;
vector<pair<int,int>> gra[N] ;

int main()
{
    int n ;
    cin>>n ;
    for(int i=0;i<n-1;i++)
    {
        int u , v ;
        cin>>u>>v ;
        // int u , v ,wt ;
        // gra[u].push_back({v,wt}) ;
/* 
gra[i].first is vertex ;
gra[i].second is vertex ;
*/
        gra[u].push_back(v) ;
        gra[v].push_back(u) ;
    }
    return 0 ;
}



/*
13
1 2 1
1 3 2
1 13 3
2 5 4
5 6 5
5 7 6
5 8 7
8 12 8 
3 4 9
4 9 10 
4 10 11
10 11 12
9 11 13
*/