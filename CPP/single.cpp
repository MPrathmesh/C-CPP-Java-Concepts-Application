#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        Base()
        {
            cout<<"Base constructor\n";
        }
        ~Base()
        {
            cout<<"Base Destructor\n";
        }
};

class Derived : public Base
{
    public:
        int a,b,c;
        Derived()
        {
            cout<<"Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived Destructor\n";
        }
};

int main()
{
    Derived dobj;
    return 0;
}