#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};
class Derived : public Base //Derived is a class which derived from base class
{
    public:
        int i,j;
    Derived()
    {
        cout<<"Inside Derived constructor\n";
    }
    ~Derived()
    {
        cout<<"Inside Derived destructor\n";
    }
    void gun()
    {
        cout<<"Inside Derived gun\n";
    }
};

int main()
{
    Derived dobj;
    cout<<sizeof(Base)<<"\n";       //8
    cout<<sizeof(Derived)<<"\n";   //16
    dobj.fun();
    dobj.gun();


    return 0;
}