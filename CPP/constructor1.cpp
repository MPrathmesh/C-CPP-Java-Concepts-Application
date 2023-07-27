#include<iostream>

using namespace std;

class Demo
{
    public:
        int x;  //characteristics
        int y;  //characteristics

        Demo()          //Default constructor
        {
            cout<<"Inside Default constructor\n";
            x = 0;
            y = 0;
        }

        Demo(int i, int j)      //Parametrized constructor
        {
            cout<<"Inside Parametrized constructor\n";
            x = i;
            y = j;
        }

        Demo(Demo &ref)       //Copy constructor
        {
            cout<<"Inside Copy constructor\n";
        }

        ~Demo()      //Destructor
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    cout<<sizeof(obj1)<<"\n";
    cout<<sizeof(obj2)<<"\n";

    cout<<"value of x in obj1 : "<<obj1.x<<"\n"; //11
    cout<<"value of x in obj2 : "<<obj2.x<<"\n"; //51

    obj1.x++;

    cout<<"value of x in obj1 : "<<obj1.x<<"\n"; //12
    cout<<"value of x in obj2 : "<<obj2.x<<"\n"; //51

    return 0;
}