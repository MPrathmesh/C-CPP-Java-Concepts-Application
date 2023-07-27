#include<iostream>

using namespace std;

class Demo
{
    public:
        int i; //Non - constant charactristics
        const int j; //constant characterstics

        Demo(int a, int b) : j(b)
        {
            i = a;
        }

        void fun()
        {
            cout<<"Inside Fun\n";
            i++; //allwoed
            //j++; //not allwoed
        }

        void gun(int a, const int b) const
        {
            int x = 10;
            const int y = 20; //constant local variable

            cout << "Inside gun\n";

            //i++; //not allwoed
            //j++; //not allwoed

            x++;
            //y++; //not allwoed

            a++;
            //b++; //not allwoed
        }
};

int main()
{
    Demo obj1(11,21);
    const Demo obj2(11,21);

    obj1.fun();
    obj2.gun(10,20);

    //obj2.fun();
    obj2.gun(10,20);

    return 0;
}