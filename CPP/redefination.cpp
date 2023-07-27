#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        void fun()     //Defination
        {
            cout<<"Inside fun\n";
        }
        void gun()    //defination
        {
            cout<<"Inside gun\n";
        }
};

class Hello : public Demo
{
    public:
        int x,y;

        void sun()      //Defination
        {
            cout<<"Inside sun\n";
        }

        void gun(int n)     //Re-Defination
        {
            cout<<"Inside gun\n";
        }
};
int main()
{

    return 0;
}