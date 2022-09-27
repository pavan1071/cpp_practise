#include <iostream>
#include <vector>
using namespace std ;

void printVect(vector < pair<int ,int>> v)
{
    cout<<"Size :"<<v.size()<<endl ; //O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<"  " << v[i].second<<endl ;
    }
    cout<<endl ;
}

int main()
{
    //vector<pair<int ,int>> a = {{1,2},{2,3},{3,4}} ;
    vector<pair<int ,int>> a ;
    int n ;
    cin>>n ;
    for(int i=0 ;i<n;i++)
    {
        int x , r ;
        cin>>x >>r ;
        a.push_back(make_pair(x,r));//v.push_back({x ,y}) we have to push pair in to the vector
    }
    printVect(a) ;
    return 0 ;
}
