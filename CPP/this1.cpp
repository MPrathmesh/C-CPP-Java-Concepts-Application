#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;       //characteristics
        int y;      //characteristics

        Demo(int a = 10, int b = 20)
        {
            x = a;
            y = b;
        }

        void fun(int no) //1000
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Demo obj(11,21);
    obj.fun(51);

    return 0;
}