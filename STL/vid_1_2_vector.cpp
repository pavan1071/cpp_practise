#include<iostream>
#include<vector>
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
    vector<int> v ;
    int n ;
    cin>>n ;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>> x ;
        v.push_back(x) ;//O(1)
        printVect(v) ;
    }
    vector <int> a(10) ;//10 values will be created and initialized to 0
    printVect(a) ;
    vector <int> b(10,3) ;// 10 elements will be created and initialized to 3
    printVect(b) ;
    b.push_back(4) ;// 4 will be 11th element or pushed to last
    printVect(b) ;
    b.pop_back() ; // to remove last element in vector O(1)
    printVect(b) ;
    a = b ;// we can copy directly in vectors not possible in arrays but O(n) time so use reference 
    printVect(a) ;
    return 0 ;
}