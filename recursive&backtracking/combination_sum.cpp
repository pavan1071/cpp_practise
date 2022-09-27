#include<bits/stdc++.h>

using namespace std ;

vector<vector<int>> d ;
void fun(int index , int b ,vector<int>&a , vector<int> &c)
{
    if(b == 0 ) 
    {
        d.push_back(c) ;
        return ;
    }
    if(index < 0)
    return ;
if(a[index] <= b)
{
    c.push_back(a[index]) ;
    fun(index,b-a[index],a,c) ;
    c.pop_back() ;
}
fun(index-1 , b ,a ,c) ;
}

int main()
{
int n , b ;
cin>>n>>b ;
vector<int> a ,c ;
for(int i=0;i<n;i++)
{
    int t ; 
    cin>>t ;
    a.push_back(t) ;
}
sort(a.begin(),a.end(),[](int a , int b){return a > b ;});
fun(n-1,b,a,c) ;
for(auto t: d)
{
for(auto y: t)
cout<<y<<" " ;
cout<<endl ;
}
return 0 ;
}

/**
 * 
 * class Solution {
  public:
vector<vector<int>> d ;
void fun(int index , int b ,vector<int>&a , vector<int> &c)
{
    if(b == 0 ) 
    {
        d.push_back(c) ;
        return ;
    }
    if(index == a.size() )
    return ;
if(a[index] <= b)
{
    c.push_back(a[index]) ;
    fun(index,b-a[index],a,c) ;
    c.pop_back() ;
}
fun(index+1 , b ,a ,c) ;
}
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<int> c ;
        set<int> s ;
        for(int i=0;i<A.size();i++)
        {
            s.insert(A[i]) ;
        }
        A.clear() ;
        for(auto t : s)
        A.push_back(t) ;
        fun(0,B,A,c) ;
        return d ;
    }
};
 * 
 */