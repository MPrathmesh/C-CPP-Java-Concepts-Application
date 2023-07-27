#include<iostream>

using namespace std;

class Demo
{
    public:
        int i; //Non - constant charactristics
        const int j; //constant characterstics

        Demo() : j(20) //Member initilization j = 20
        {
            i = 10;
            //j = 20;
        }

        Demo(int a, int b) : i(a), j(b)
        {
            cout<<"Inside paramerised constructor\n";
        }
};

int main()
{
    Demo obj(11,21);
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    obj.i++;
    //obj.j++;
    cout<<obj.i<<"\n";

    return 0;
}