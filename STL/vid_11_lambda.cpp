#include<bits/stdc++.h>
using namespace std ;

int main()
{
    //cout<< [](int x , int y){return x*y ;}(4,7) <<endl ;//[] to tell it is lambda function ( parameters ) { what to return and what to do}(arguments)
    auto pro = [](int x , int y){return x*y ;} ; // we can define like this and call the function any no.of times 
    // for this can be implemented comparator 
    cout<<pro(3,4)<<" "<<pro(5,6) <<endl ;
    vector<int> v = {3,5,7} ;
    cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0 ;}) <<endl;//these functions return bool type 
    cout<<any_of(v.begin(),v.end(),[](int x){return x%2==0 ;}) <<endl;// all_of considers all any_of atleast one none_of atmost zero 
    cout<<none_of(v.begin(),v.end(),[](int x){return x%2==0 ;}) <<endl;
    return 0 ;
}