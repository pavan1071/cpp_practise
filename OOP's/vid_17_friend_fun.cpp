#include<iostream>
using namespace std ;

class Distance
{
private :
int meters ;
public:
Distance()
{
    meters = 0;
}
void display()
{
    cout<<meters<<endl ;
}
// prototype or signature of friend function
friend void addValue(Distance &t);
};

void addValue(Distance &t)
{
    t.meters += 5 ;
}

int main()
{
    Distance d1 ;
    d1.display() ;
    addValue(d1) ;
    d1.display() ;
    return 0 ;
}