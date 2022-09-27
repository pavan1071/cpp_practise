#include<bits/stdc++.h>
using namespace std ;

const int N = 1e5 ;
int parent[N] ;
int size[N] ;

void make(int v)
{
    parent[v] = v ;
    size[v] = 1 ;
}

int find(int v)
{
    if(parent[v]==v) return ;
    //Path compression
    return parent[v] = find(parent[v]) ;
}

void Union (int a , int b)
{
    a = find(a) ;
    b = find(b) ;
    if(a==b) return ;
    //union by size
    if(size[a] < size[b])
    swap(a,b) ;
    parent[b] = a ;
    size[a] += size[b] ;
}

int main()
{
    int n , k ;
    for(int i=0;i<n;i++)
    {
        make(i) ;
    }
    while(k--)
    {
        int u , v ;
        cin>>u>>v ;
        Union(u,v) ;
    }
    int connected_ct = 0;

    for(int i=0;i<n;i++)
    {
        if(parent[i] == i)
        connected_ct++ ;
    }
return 0 ;
}
/*
Time complexity = O(a(n)) ; 
a(n) is reverse ackermann function - this function increases slowly ; 
amortarised time complexity - over a no.of times this becomes constant ;

https://cp-algorithms.com/data_structures/disjoint_set_union.html
*/

