#include <iostream>
#include <vector>

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
    vector<vector<int>> a ;
    //two ways to fill that 
    //1.By creating temp vector and pushing it 
    int N ;
    cin>> N ;
    for(int i=0;i<N;i++)
    {
        int n ;
        vector<int> temp ;
        cin>> n ;
        for(int i=0;i<n;i++)
        {
            int x ;
            cin>>x ;
            temp.push_back(x) ;
        }
        a.push_back(temp) ;
    }
     for(int i=0;i<N;i++)
 {
     printVect(a[i]);
 }
 //2.by pushing one empty vector and pushing elements in to it
 vector<vector<int>> b ;
 cin>>N ;
 for(int i=0;i<N;i++)
 {
     int n ;
     cin >> n ;
     b.push_back(vector<int> ()) ;//pushing empty vector and then using it
      for(int i=0;i<n;i++)
        {
            int x ;
            cin>>x ;
            b[i].push_back(x) ;
        }
 }
for(int i=0;i<N;i++)
 {
    printVect(a[i]);
 }
 return 0 ;
}