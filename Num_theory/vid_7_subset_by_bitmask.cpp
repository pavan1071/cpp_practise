/*
array size n so 2^n subsets are possible
so we take 2^n numbers bits apply bit masking to print all possible subsets
*/

#include<bits/stdc++.h>
using namespace std ;

void subset(vector<int> &t)
{
    int n = (1<<t.size()) ;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<t.size();j++)
        {
            if(i &(1<<j))
            cout<<t[j]<<" ";
        }
        cout<<endl ;
    }
}
//O(2^n * n) time complexity

int main()
{
    vector<int> v = { 1 ,2 ,3} ;
    subset(v) ;
    return 0 ;
}
