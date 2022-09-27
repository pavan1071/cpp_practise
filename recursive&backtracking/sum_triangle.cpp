#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> res ;

void func(vector<int> &v , vector<int>&temp1 )
{
for(int i=0;i<v.size()-1;i++)
{
    temp1.push_back(v[i]+v[i+1]) ;
}

}
  
void print(vector<vector<int>> &res)
{
    for(auto vec : res)
    {
        for(auto in : vec)
        cout<<in<<" " ;
        cout<<endl ;
    }
}

void fun(vector<int> &v)
{
    res.push_back(v) ;
    while(v.size() != 1)
    {
        vector<int> temp1 ;
        func(v,temp1);
        res.push_back(temp1) ;
        v = temp1 ;
    }
    reverse(res.begin(),res.end()) ;
    print(res);
}

int main()
{
    int n  ;
    cin>>n;
    vector<int> v ;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x ;
        v.push_back(x) ;
    }
    fun(v) ;
    return 0 ;
}
