#include<iostream>
#include<unordered_map>
using namespace std ;

//uses hash table instead of trees like in ordered map
//time complexity for insertion O(1) , access O(1) , find O(1) , erase O(1)
// should use valid key types those which have inbuilt  hash function 
int main()
{
    unordered_map<int ,string> m ;
    //code same as maps
    unordered_multimap<int,string> m ;
    //
    return 0 ;
}