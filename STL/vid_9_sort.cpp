#include<iostream>
#include<algorithm>

using namespace std ;
// this inbuilt sort function is intro sort i.e mixture of 3 sorting algorithms 
//quick sort (if taking more recursion time then shifts to heap sort)
//heap sort (if the array is small then shifts to insertion sort)
//insertion sort
//two operators 1.address of starting 2.address of the last element's next
//n*log(n) time complexity 

bool cmp(pair <int ,int> a , pair<int ,int > b)
{
    if(b < a) return true ;
    if(b.first == a.first)
    {
        if(b.second < a.second) return true ;
    }
    return false ;
}
int main()
{
    int a[5] = {1,52,23,14,5} ;
    sort(a,a+5) ;
    for(auto t:a )
    cout<<t<<" " ;
    //*****************************comparator function can be used for flexibity in sorting********************************************************
    pair<int , int > p[5] ;
    for(int i=0;i<5;i++)
    cin>>p[i].first>>p[i].second;
    sort(p,p+5) ;
    for(auto t : p)
    cout<<t.first<<" "<<t.second<<endl ;
    sort(p,p+5,cmp);
    for(auto t : p)
    cout<<t.first<<" "<<t.second<<endl ;   
    return 0 ;
}