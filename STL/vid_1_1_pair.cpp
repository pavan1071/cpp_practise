#include<bits/stdc++.h>
using namespace std ;

int main()
{
 pair <int , string> p ;
 //p = make_pair(1,"ghi") ;
 p={1,"ghi"} ;
 cout<<p.first<<" "<<p.second<<endl ;
 pair <int,string> a_p[3] ;
 for(int i=0;i<3;i++)
 cin>>a_p[i].first>>a_p[i].second ;
  for(int i=0;i<3;i++)
 cout<<a_p[i].first<<a_p[i].second<<endl ;
 swap(a_p[0],a_p[1]) ;
 for(int i=0;i<3;i++)
 cout<<a_p[i].first<<a_p[i].second<<endl ;
 return 0 ;

}