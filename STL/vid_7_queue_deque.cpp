#include<iostream>
#include<queue>
using namespace std ;

int main()
{
    queue <string> q ;
    q.push("sdf") ;
    q.push("erw");
    q.push("dgeel");
    while(!q.empty())
    {
        cout<<q.front()<<endl ;
        q.pop() ;
    }
    deque<int> s ;
    s.push_back(8);
    s.push_front(9) ;
    s.pop_back() ;
    s.pop_front() ;
    s.clear() ;
    s.size(); 
    
return 0 ;
}
//see deque also