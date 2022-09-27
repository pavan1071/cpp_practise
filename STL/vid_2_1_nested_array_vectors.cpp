#include<bits/stdc++.h>
using namespace std ;

void printVect(vector <int> v)
{
    cout<<"Size :"<<v.size()<<endl ; //O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" " ;
    }
    cout<<endl ;
}

int main()
{
    int N ;
    cin>>N ;
 vector<int> a[N] ;//we created N array of vectors
 for(int i=0;i<N;i++)
 {
     int t;
     cin>>t ;
     for(int j=0 ;j<t;j++)
     {
         int e ;
         cin>>e ;
         a[i].push_back(e) ;
     }
 }
 for(int i=0;i<N;i++)
 {
     printVect(a[i]);
 }
 return 0 ;
}