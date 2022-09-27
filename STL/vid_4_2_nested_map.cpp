#include<iostream>
#include<map>
#include<vector>
using namespace std ;

int main()
{
    map< pair<string, string> , vector <int> > m ; // map gives in sorted order here also it gives like that only , compares pairs or sets from starting element
    int n ;
    cin>>n ;
    for(int i=0;i<n;i++)
    {
        string a , b ;
        int no ;
        cin>>a>>b>>no ;
        pair<string  ,string> c ;
        c={a,b};
        vector <int> v ;
        for(int j=0;j < no;j++)
        { 
          int ca ;
          cin>>ca ;
          v.push_back(ca) ; 
        }
        m.insert({c,v}) ;
    }
    for(auto& t : m)
    {   cout<<t.first.first<<" "<<t.first.second ;
        for(auto r : t.second)
        cout<<r<<" " ;
        cout<<endl ;
    }
    return 0 ;
}
//using reference will be good constant time where as O(n) for direct accesing in range 