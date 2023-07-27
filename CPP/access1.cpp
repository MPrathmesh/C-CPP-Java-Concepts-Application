#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
     protected:
        int k;
};

class Hello : public Demo
{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
    public:
        void fun()
        {
            cout<<k<<"\n";
        }
};

int main()
{
    cout<<sizeof(Demo)<<"\n";
    cout<<sizeof(Hello)<<"\n";
    Demo dobj;
    dobj.i;     //A
    //dobj.j;     //NA
    //dobj.k;     //Na

    Hello hobj;
    hobj.x;     //A
    //hobj.y;     //NA
    //hobj.z;     //NA

    hobj.i;     //A
   // hobj.j;     //NA
    //hobj.k;     //A

    hobj.fun();

    return 0;
}