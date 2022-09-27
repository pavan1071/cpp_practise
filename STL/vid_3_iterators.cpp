#include<iostream>
#include<iterator>
#include<vector>

using namespace std ;

int main()
{
    vector<int> a(3,5) ;  // .begin() points to starting iterator .end() gives us next of last element iterator 
    vector<int> :: iterator it ;  // we declare iterator like this container :: iterator variable 
    for(it = a.begin();it!=a.end();it++ ) //it++ takes to next iterator whereas it+1 takes to next location 
    cout<<*it <<" " ;

    // vector for pairs
    vector<pair<int , int>> d = {{2,3},{4,5},{6,7}} ;
    vector<pair<int , int> > :: iterator itp  ; 
    for(itp = d.begin();itp!=d.end();itp++ )
    {
        cout<<(*itp).first<< " "<<(*itp).second<<endl ;
        cout<<itp->first<<" "<<itp->second <<endl ;
    }

    //*********************range based loops***************************************
    //vector
    for(int val : a)
    {
    val++ ; 
   // cout<<val<<" " ;
    } //here sending copy only
    cout<<endl ;  // use referencing to change for real
      
    for(int val : a)
    cout<<val<<" " ;
    cout<<endl ;
    // use referencing to change for real
    for(int&  val : a)
    {
    val++ ; 
   // cout<<val<<" " ;
    } 
    for(int val : a)
    cout<<val<<" " ;
    cout<<endl ;

    //vector pair
      for(pair<int,int> val:d)
    cout<<val.first<<" "<<val.second <<endl ;
    //******************************************auto******************************************
    // auto key word dynamically determine data type of the given one
    auto f = 1 ;
    cout<< f << endl ;
    // using range and auto combined makes our code simple
    for(auto val:d)
    cout<<val.first<<" "<<val.second <<endl ;
    return 0 ;
}