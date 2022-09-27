#include<bits/stdc++.h>

using namespace std ;

vector<vector<int>> g ;
void generate_subset(vector<int> &s ,int index ,vector<int> &a)
{
    if(index < 0)
    {
        g.push_back(s) ;
        return ;
    }
    s.push_back(a[index]);
    generate_subset(s ,index -1 ,a) ;
    s.pop_back() ;

    generate_subset(s ,index -1 ,a) ;
}

vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<int> v ;
    generate_subset(v ,nums.size() - 1 ,nums) ;
}

int main()
{
    int n;
    cin>>n ;
    vector<int> a ;
    for(int i=0;i<n;i++)
    {
        int p ;
        cin>>p ;
        a.push_back(p) ;
    }
    vector<int> v ;
    generate_subset(v ,n-1 ,a) ;
    for(auto t : g)
    {
        for(auto y : t)
        cout<<y<<" " ;
        cout<<endl ;
    }
    return 0 ;
}