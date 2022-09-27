#include<iostream>
using namespace std ;

class animal
{
    public:
    animal()
    {}
animal(animal* ptr[])
{
    ptr[i] = this ;
    i = i+1 ;
}
    static int i ;
    virtual void eat()
    {
        cout<<"Eating animal food."<<endl;
    }
};

class dog : public animal
{
public:

dog(animal* ptr[])
{
    ptr[i] = this ;
    i = i+1 ;
}

void eat()
{
    cout<<"Eating dog food."<<endl ;
}
};

class cat:public animal
{
public:

cat(animal* ptr[])
{
    ptr[i] = this ;
    i = i+1 ;
}
void eat()
{
    cout<<"Eating cat food."<<endl ;
}
};

int animal::i = 0 ;
void animaleat(animal* ptr)
{
    ptr->eat() ;
}

int main()
{
    animal* ptr[3] , g(ptr) ;
    dog d(ptr) ;
    cat c(ptr) ;
    //ptr[0] = &d ;
    //animaleat(ptr) ;
    //ptr[1] = &c ;
    //animaleat(ptr) ;

    //ptr[2] = &k ;
    //animaleat(ptr) ;

    for(int k=0;k<3;k++)
    {
        ptr[k]->eat() ;
    }
    return 0 ;
}
//if eat is not virtual then animal function gets called ; to call derived functions should write separate functions
//make it virtual so that when we pass address of derived object , object's function gets executed