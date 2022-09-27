#include <bits/stdc++.h>
using namespace std ;

//adj matrix representation 
const int N = 1e3 ;
int graph[N][N] ;//globally declared so every value will be intialized to 0

//i to j - edge is present graph[i][j] = 1 or 0 if edge is not present 
//so much space will be taken O(N^2) N <= 10^3 

//adj list representation 
//vector<int> graph1[N] ; unweighted graph
vector<pair<int,int>> graph1[N] ; //weighted graph (in pair first member - vertex no , second member - weight)

//i to j - edge is present then we push i to jth list and j in  to ith list 
//space complexity is O(V + E) V - no.of vertices , E - no.of edges N <= 10^7
int main()
{
    int n,m;
    cin>>n>>m ;
    for(int i=0;i<m;i++)
    {
        int v1,v2,wt ;
        cin>>v1>>v2>>wt ;
        graph[v1][v2] = wt ;
        graph[v2][v1] = wt ;

        graph1[v1].push_back({v2,wt}) ;
        graph1[v2].push_back({v1,wt}) ;
    }
    return 0 ;
}
