#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
};

class Derived : public Base
{
    public:
        int i,j;
};

int main()
{
    Base *bp = new Base(); //no casting
    Derived *dp = new Derived(); //no casting

    Base *bp1 = new Derived(); //up casting
    //Derived *dp1 = new Base(); //down casting

    return 0;
}